#ifndef __THIRD_HPP__
#define __THIRD_HPP__

#if defined(USE_EXPORT)
#define EXPORT export
#else
#define EXPORT
#endif

EXPORT
template <typename T>
void print_typeof(T const&);

#if !defined(USE_EXPORT)
#include "first.cpp"
#endif

#endif
