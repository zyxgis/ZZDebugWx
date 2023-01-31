#pragma once
#pragma execution_character_set("utf-8")

#ifndef Base_h
#define Base_h

#include "MemoryCheck.h"

#include <iostream>

//
#define ZERO_MEM(a) memset(a, 0, sizeof(a))
#define ZERO_MEM_VAR(var) memset(&var, 0, sizeof(var))
#define ARRAY_SIZE_IN_ELEMENTS(a) (sizeof(a) / sizeof(a[0]))
#define SAFE_DELETE(p) \
  if (p)               \
  {                    \
    delete p;          \
    p = NULL;          \
  }
//

#endif
