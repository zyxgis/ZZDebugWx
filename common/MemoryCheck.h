#pragma once
#pragma execution_character_set("utf-8")

// #define _CRTDBG_MAP_ALLOC
// #define wxUSE_DEBUG_NEW_ALWAYS
// #define wxUSE_VC_CRTDBG

// #include <crtdbg.h>
// #include <iostream>

#ifdef __WXMSW__
//#include <msvc/wx/setup.h>
#include <wx/compiler.h>
#include <wx/msw/msvcrt.h>
#endif


// #include "wx/vector.h"

// #ifdef _DEBUG
// //#define DEBUG_CLIENTBLOCK  new( _CLIENT_BLOCK, __FILE__, __LINE__)
// #define DEBUG_CLIENTBLOCK  new( _NORMAL_BLOCK, __FILE__, __LINE__)
// #define new DEBUG_CLIENTBLOCK
// #else
// #define DEBUG_CLIENTBLOCK
// #endif

inline void EnableMemLeakCheck()
{
  // _CrtSetReportMode( _CRT_ERROR, _CRTDBG_MODE_FILE );
  // _CrtSetReportFile( _CRT_ERROR, _CRTDBG_FILE_STDERR );
  _CrtSetDbgFlag(_CrtSetDbgFlag(_CRTDBG_REPORT_FLAG) | _CRTDBG_LEAK_CHECK_DF);
  //std::cout<<"---------------------------- " <<__VISUALC__<<std::endl;
}

// #ifdef _DEBUG
// #define new new (_NORMAL_BLOCK, __FILE__, __LINE__)
// #endif