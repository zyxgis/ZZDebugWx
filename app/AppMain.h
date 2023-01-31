#pragma once
#pragma execution_character_set("utf-8")

#include "Base.h"

#include "wx/wxprec.h"
#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

namespace SparkMap
{
  // 定义应用程序类
  class AppMain : public wxApp
  {
  public:
    AppMain()
    {
      EnableMemLeakCheck(); 
      //
      frame = nullptr;
    }

    // 这个函数将会在程序启动的时候被调用
    // virtual wxApp methods
    virtual bool OnInit() override;
    virtual int OnExit() override;

  private:
    wxFrame *frame;
  };
  // 有了这一行就可以使用 AppMain& wxGetApp()了
  wxDECLARE_APP(AppMain);
}