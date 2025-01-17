#pragma once 
//////////////////////////////////////////////////////////
// includes.h
//
// standard includes and adapter
//
//
//////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////
// filesystem usage : only for C++17
// NOTE : For c++ <17, try using boost::filesystem (which is roughly the same)
#if _HAS_CXX17
#include <filesystem>
namespace fs = std::filesystem;

#else

#ifdef _WIN32
#include <filesystem>
namespace fs = std::filesystem;
#elif __unix
#include <filesystem>
namespace fs = std::filesystem;
#endif
#endif