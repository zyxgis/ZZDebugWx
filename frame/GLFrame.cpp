#pragma execution_character_set("utf-8")
//
#include "GLFrame.h"
#include "AppConfig.h"

//
#include <wx/wxprec.h>

//
namespace SparkMap
{
  // EVT_MENU(wxID_NEW, GLFrame::OnNewWindow)
  // EVT_MENU(wxID_HIGHEST, GLFrame::OnNewStereoWindow)
  // EVT_MENU(wxID_CLOSE, GLFrame::OnClose)

  wxBEGIN_EVENT_TABLE(GLFrame, wxFrame)

  wxEND_EVENT_TABLE()
  //
  GLFrame::GLFrame(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &pos, const wxSize &size, long style)
  : wxFrame(parent, id, title, pos, size, style)
  {
    this->SetIcon(wxICON(appIcon));
    //
    // Make a statusBar
    this->statusBar = this->CreateStatusBar();
    this->initStatusBar();

    // this->SetClientSize(400, 400);
    this->Show();
  }
  //
  void GLFrame::initStatusBar()
  {
    int widths[] = {120, 120, -1};
    this->statusBar->SetFieldsCount(WXSIZEOF(widths), widths);
    this->statusBar->SetStatusText(wxT("status text"), 0);
    this->statusBar->SetStatusText(wxT("2017-11-25"), 1);
    // progress bar
    wxRect rc;
    this->statusBar->GetFieldRect(2, rc);
    wxGauge *gauge = new wxGauge(this->statusBar, WidgetID::ID_GAUGE, 200, wxPoint(rc.x, rc.y), wxSize(rc.width, rc.height), wxGA_HORIZONTAL);
    gauge->SetValue(100);
    gauge->Show(true);

  }
  //
  GLFrame::~GLFrame()
  {
    std::cout << "Destroy GLFrame" << std::endl;
  }
  //
  void GLFrame::OnClose(wxCommandEvent &event)
  {
    this->Close(true);
  }

}