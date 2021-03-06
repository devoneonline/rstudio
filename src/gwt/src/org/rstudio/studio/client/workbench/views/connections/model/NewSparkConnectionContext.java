/*
 * NewSparkConnectionContext.java
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
import com.google.gwt.core.client.JsArray;
import com.google.gwt.core.client.JsArrayString;

public class NewSparkConnectionContext extends JavaScriptObject
{
   protected NewSparkConnectionContext()
   {
   }
   
   public final native JsArrayString getRemoteServers() /*-{
      return this.remote_servers;
   }-*/;
   
   public final native int getCores()  /*-{
      return this.cores;
   }-*/;
   
   public final native JsArray<SparkVersion> getSparkVersions() /*-{
      return this.spark_versions;
   }-*/;
   
   public final native String getDefaultSparkVersion() /*-{
      return this.default_spark_version;
   }-*/;
}