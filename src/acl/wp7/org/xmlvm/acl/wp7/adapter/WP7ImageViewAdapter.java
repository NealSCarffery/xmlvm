/* Copyright (c) 2002-2011 by XMLVM.org
 *
 * Project Info:  http://www.xmlvm.org
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301,
 * USA.
 */

package org.xmlvm.acl.wp7.adapter;

import org.xmlvm.acl.common.adapter.BitmapDrawableAdapter;
import org.xmlvm.acl.common.adapter.ImageViewAdapter;
import org.xmlvm.acl.wp7.objects.WP7View;

import Compatlib.System.Windows.Controls.Image;
import android.widget.ImageView;

/**
 *
 */
public class WP7ImageViewAdapter extends WP7View implements ImageViewAdapter {

    public WP7ImageViewAdapter(ImageView imageView) {
        super(imageView);
        this.setElement(new Image());
    }

    @Override
    public void setImage(BitmapDrawableAdapter image) {
        ((Image)this.getElement()).setSource(((WP7BitmapDrawableAdapter)image).getImage());
    }

    @Override
    public BitmapDrawableAdapter getImage() {
        return new WP7BitmapDrawableAdapter(((Image)this.getElement()).getSource());
    }

}