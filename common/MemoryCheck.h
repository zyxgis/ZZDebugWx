#pragma once
#pragma execution_character_set("utf-8")

// 不要在头文件中包含此文件，应在CPP文件中的所有其它头文件之后包含此文件

/*
#define _CRTDBG_MAP_ALLOC

#include <crtdbg.h>
#include <iostream>

#ifdef _DEBUG
//#define DEBUG_CLIENTBLOCK  new( _CLIENT_BLOCK, __FILE__, __LINE__)
#define DEBUG_CLIENTBLOCK  new( _NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_CLIENTBLOCK
#else
#define DEBUG_CLIENTBLOCK
#endif
*/

#ifdef __WXMSW__
// #include <msvc/wx/setup.h>
#include <wx/compiler.h>
#include <wx/msw/msvcrt.h>
#endif

inline void EnableMemLeakCheck()
{
  // _CrtSetReportMode( _CRT_ERROR, _CRTDBG_MODE_FILE );
  // _CrtSetReportFile( _CRT_ERROR, _CRTDBG_FILE_STDERR );
  _CrtSetDbgFlag(_CrtSetDbgFlag(_CRTDBG_REPORT_FLAG) | _CRTDBG_LEAK_CHECK_DF);
  //std::cout<<"---------------------------- " <<__VISUALC__<<std::endl;
}
