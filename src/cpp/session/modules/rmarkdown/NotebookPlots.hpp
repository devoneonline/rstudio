/*
 * NotebookPlots.hpp
 *
 * Copyright (C) 2009-16 by RStudio, Inc.
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


#ifndef SESSION_NOTEBOOK_PLOTS_HPP
#define SESSION_NOTEBOOK_PLOTS_HPP

#include <boost/function.hpp>

#define kDisplayListExt ".snapshot"

namespace rstudio {
namespace core {
   class Error;
   class FilePath;
}
}

namespace rstudio {
namespace session {
namespace modules {
namespace rmarkdown {
namespace notebook {

enum PlotSizeBehavior
{
   PlotSizeAutomatic,
   PlotSizeManual
};

core::Error beginPlotCapture(double height, double width, 
      PlotSizeBehavior sizeBehavior, 
      const core::FilePath& plotFolder);

core::Error initPlots();

} // namespace notebook
} // namespace rmarkdown
} // namespace modules
} // namespace session
} // namespace rstudio

#endif
