#ifndef UTILS_H
#define UTILS_H

#include <cassert>
#include <numeric>
#include <vector>

/**
 * Inspired by : http://stackoverflow.com/a/3767904
 *
 */

#ifndef NDEBUG
#define ASSERT_MESSAGE(condition, message)\
	if( !( condition ) ) { fprintf(stderr, message); }\
	assert(condition)
#else
#define ASSERT_MESSAGE(condition, message)\
		((void)0)
#endif

template <class T>
T vector_sum(std::vector < T > v)
{
  return std::accumulate(v.begin(), v.end(), (T)0);
}
#endif
