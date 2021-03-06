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

#import "xmlvm.h"
#import "java_util_Set.h"
#import "org_xmlvm_iphone_UIEvent.h"



// UIResponder
//----------------------------------------------------------------------------
@interface UIResponder (cat_org_xmlvm_iphone_UIResponder)

- (void) touchesBegan___java_util_Set_org_xmlvm_iphone_UIEvent
:(java_util_Set*) touches
:(org_xmlvm_iphone_UIEvent*) event;

- (void) touchesCancelled___java_util_Set_org_xmlvm_iphone_UIEvent
:(java_util_Set*) touches
:(org_xmlvm_iphone_UIEvent*) event;

- (void) touchesEnded___java_util_Set_org_xmlvm_iphone_UIEvent
:(java_util_Set*) touches
:(org_xmlvm_iphone_UIEvent*) event;

- (void) touchesMoved___java_util_Set_org_xmlvm_iphone_UIEvent
:(java_util_Set*) touches
:(org_xmlvm_iphone_UIEvent*) event;
	
- (int) resignFirstResponder__;
- (int) becomeFirstResponder__;   
- (int) isFirstResponder__;
@end
