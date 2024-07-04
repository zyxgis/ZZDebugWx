#pragma once
#pragma execution_character_set("utf-8")

#include "Base.h"
#include "AppConfig.h"

#include <wx/version.h>
#include "wx/wxprec.h"
#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif
#include "wx/frame.h"
#include "wx/textctrl.h"
#include "wx/ribbon/bar.h"
#include "wx/ribbon/buttonbar.h"
#include "wx/ribbon/gallery.h"
#include "wx/ribbon/toolbar.h"
#include "wx/sizer.h"
#include "wx/menu.h"
#include "wx/msgdlg.h"
#include "wx/dcbuffer.h"
#include "wx/colordlg.h"
#include "wx/artprov.h"
#include "wx/combobox.h"
#include "wx/tglbtn.h"
#include "wx/wrapsizer.h"
//
#include <map>




namespace SparkMap
{
  class AppMain;

  class GLFrame : public wxFrame
  {
  public:
    GLFrame(wxWindow *parent, wxWindowID id = WidgetID::ID_GL_FRAME, const wxString &title = wxT("Main Windows"), const wxPoint &pos = wxDefaultPosition, const wxSize &size = wxSize(1024, 768), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);
    virtual ~GLFrame();
    //
  private:
    wxStatusBar *statusBar;

    void initStatusBar();

    void OnClose(wxCommandEvent &event);

    wxDECLARE_EVENT_TABLE();
  };

}