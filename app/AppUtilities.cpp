#pragma execution_character_set("utf-8")

#include "AppUtilities.h"

#include "wx/wxprec.h"
#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

#include "wx/app.h"

namespace SparkMap
{
  //-----------------------------------------------------------------------------

  AppMain &AppUtilities::getAppMain()
  {
    AppMain &app = wxGetApp();
    return app;
  }

  std::string AppUtilities::GetAppRunDirectory()
  {
    wxString directory(wxTheApp->argv[0]);
    directory.Replace(wxT("\\"), wxT("/"));
    const wxString directoryRun = directory.BeforeLast('/', nullptr);
    if (directoryRun.IsEmpty())
    {
      return std::string(".");
    }
    
    return directoryRun.ToStdString(); // std::string(directoryRun.mb_str());
  }
}