/*
 * HadoopVersion.java
 *
 * Copyright (C) 2009-12 by RStudio, Inc.
 *
 * Unless you have received this program directly from RStudio pursuant
 * to the terms of a commercial license agreement with RStudio, then
 * this program is licensed to you under the terms of version 3 of the
 * GNU Affero General Public License. This program is distributed WITHOUT
 * ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THOSE OF NON-INFRINGEMENT,
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Please refer to the
 * AGPL (http://www.gnu.org/licenses/agpl-3.0.txt) for more details.
 *
 */

package org.rstudio.studio.client.workbench.views.connections.model;

import com.google.gwt.core.client.JavaScriptObject;

public class HadoopVersion extends JavaScriptObject
{ 
   protected HadoopVersion()
   {
   }
   
   public final native String getId() /*-{
      return this.id;
   }-*/;
  
   public final native String getLabel() /*-{
      return this.label;
   }-*/;
   
   public final native boolean isInstalled() /*-{
      return this.installed;
   }-*/;
  
}
