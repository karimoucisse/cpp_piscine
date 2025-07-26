
#ifndef WHATEVER_HPP_
#define WHATEVER_HPP_

#include <iostream>

template< typename T >
void swap(T &x, T &y)
{
	T tmp = y;
	y = x;
	x = tmp;
}

template< typename T >
const T &min(T const &x, T const &y)
{
	return( x < y) ? x : y;
}

template< typename T >
T const &max(T const &x, T const &y)
{
	return (x > y) ? x : y;
}

#endif




