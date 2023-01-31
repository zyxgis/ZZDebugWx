#pragma execution_character_set("utf-8")

#include "AppMain.h"
#include "GLFrame.h"

#define _USE_MATH_DEFINES

#include <string>
#include <vector>
#include <map>
#include <tuple>
#include <cmath>
#include <math.h>
#include <iostream>
#include <iomanip>
//

namespace SparkMap
{
  // 告诉wxWidgets主应用程序是哪个类
  wxIMPLEMENT_APP(AppMain);

  bool AppMain::OnInit()
  {
    //
    if (!wxApp::OnInit())
    {
      return false;
    }

    //
    const wxString title = wxT("主窗体");

    const wxSize size(1024, 768);

    this->frame = new GLFrame(NULL, WidgetID::ID_GL_FRAME, title, wxDefaultPosition, size, wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);

    frame->Show(true);
    return true;
  }

  int AppMain::OnExit()
  {
    return wxApp::OnExit();
  }

}