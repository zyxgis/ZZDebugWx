﻿#pragma once
#pragma execution_character_set("utf-8")

#include "Base.h"

#include "wx/wxprec.h"
#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

namespace SparkMap
{
  //
  class AppMain : public wxApp
  {
  public:
    AppMain();

    // virtual wxApp methods
    virtual bool OnInit() override;
    virtual int OnExit() override;

  private:
    wxFrame *frame;
  };

  //
  wxDECLARE_APP(AppMain);
}