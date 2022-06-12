#pragma once
#include <iostream>

template<typename T>
T Add(T x, T y)
{
	return x + y;
}

template<typename T>
T ArraySum(const T* pArr, size_t arrSize)
{
	T sum{};
	for (size_t i = 0; i < arrSize; i++)
	{
		sum += pArr[i];
	}
	return sum;
}

template<typename T>
T Max(const T* pArr, size_t arrSize)
{
	T max{ pArr[0] };
	for (size_t i = 0; i < arrSize; i++)
	{
		if(pArr[i] > max)
			max = pArr[i];
	}
	return max;
}

template<typename T>
std::pair<T, T> MinMax(const T* pArr, size_t arrSize)
{
	T min{ pArr[0] };
	T max{ pArr[0] };
	for (size_t i = 0; i < arrSize; i++)
	{
		if(pArr[i] > max)
			max = pArr[i];
		if(pArr[i] < min)
			min = pArr[i];
	}

	return std::pair<T, T>(min, max);
}