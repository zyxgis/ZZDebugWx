cmake_minimum_required (VERSION 3.11)

project(win-wx VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_BUILD_TYPE "Debug")
# SET(CMAKE_BUILD_TYPE "Release")

Add_Definitions(-DUNICODE -D_UNICODE -D_DEBUG -D_WINDOWS -D__WXMSW__ -DWXUSINGDLL  -DwxMSVC_VERSION_AUTO -DwxMSVC_VERSION_ABI_COMPAT  -D_CRT_SECURE_NO_WARNINGS -D_SILENCE_CXX17_ITERATOR_BASE_CLASS_DEPRECATION_WARNING)

# /JMC /permissive- /ifcOutput "x64\Debug\" /GS /W3 /Zc:wchar_t /I"E:\bigdata/LibCPP\wxWidgets\3.2.1\include\msvc" /I"E:\bigdata/LibCPP\wxWidgets\3.2.1\include" 
# /ZI /Gm- /Od /sdl /Fd"x64\Debug\vc143.pdb" /Zc:inline /fp:precise 
# /D "_DEBUG" /D "_WINDOWS" /D "_CRT_SECURE_NO_WARNINGS" /D "__WXMSW__" /D "WXUSINGDLL" /D "wxMSVC_VERSION_AUTO" /D "wxMSVC_VERSION_ABI_COMPAT" 
# /D "_UNICODE" /D "UNICODE" /errorReport:prompt 
# /WX- /Zc:forScope /RTC1 /Gd /MDd /FC /Fa"x64\Debug\" 
# /EHsc /nologo /Fo"x64\Debug\" /Fp"x64\Debug\Test01.pch" /diagnostics:column 

# wxWidgets
set(wxWidgets_ROOT_DIR "E:/bigdata/LibCPP/wxWidgets/3.2.1")
set(wxWidgets_LIB_DIR "E:/bigdata/LibCPP/wxWidgets/3.2.1/lib/vc14x_x64_dll")
# 
find_package(wxWidgets REQUIRED gl core base xml ribbon propgrid richtext OPTIONAL_COMPONENTS net webview html media stc xrc adv aui qa opengl32)

# 
include(${wxWidgets_USE_FILE})

#
set(CMAKE_INCLUDE_CURRENT_DIR ON)

#
include_directories(${PROJECT_SOURCE_DIR}/resource/rc)
include_directories(${PROJECT_SOURCE_DIR}/resource/xpm)

include_directories(${PROJECT_SOURCE_DIR}/common)
include_directories(${PROJECT_SOURCE_DIR}/app)
include_directories(${PROJECT_SOURCE_DIR}/frame)


set(SRC_LIST
  resource/rc/resource.rc
  
  common/MemoryCheck.cpp
  common/Base.cpp

  app/AppMain.cpp
  app/AppUtilities.cpp

  frame/GLFrame.cpp
  
)

file(GLOB STATIC_RESOURCES "static/*")
message(">>> STATIC_RESOURCES=${STATIC_RESOURCES}") # print the directory

file(COPY ${STATIC_RESOURCES} DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/build/Debug/static)

get_property(dirs DIRECTORY ${CMAKE_SOURCE_DIR} PROPERTY INCLUDE_DIRECTORIES)
message(">>> include_dirs=${dirs}") # print the directory

message(">>> PROJECT_SOURCE_DIR=${PROJECT_SOURCE_DIR}") # print the directory

set ( CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /SUBSYSTEM:WINDOWS" ) 

add_executable(ZZDebugWx ${SRC_LIST})

# 
target_include_directories(ZZDebugWx PRIVATE ${wxWidgets_INCLUDE_DIRS})

target_link_libraries(ZZDebugWx ${wxWidgets_LIBRARIES} ws2_32 winmm wldap32)
                                                                                            

