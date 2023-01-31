#pragma once
#pragma execution_character_set("utf-8")

#ifndef AppUtilities_h
#define AppUtilities_h

#include "Base.h"
#include "AppMain.h"

namespace SparkMap
{
  class AppUtilities
  {
  public:
    static AppMain &getAppMain();

    static std::string GetAppRunDirectory();
  };
}
#endif
