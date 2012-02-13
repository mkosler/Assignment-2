//============================================================================
// Name        : insertion-sort.cpp
// Author      : Michael Kosler
// Date        : 02/07/2012
// Copyright   : GPL v3
// 		 Additional licenses can be found in the README.
// Description : Implementation of insertion sort in C++
//============================================================================

#include "sort.h"

void
InsertionSort::sort(int A[], int size)				// main entry point
{
  /* Complete this function with the implementation of insertion sort algorithm 
  Record number of comparisons in variable num_cmps of class Sort
  */
	int temp = 0;
	for (int i = 1; i < size; i++)
	{
		temp = A[i];
		for (int j = i; (num_cmps++, j > 0) && (num_cmps++, temp < A[j - 1]); j--)
		{
			A[j] = A[j - 1];
		}
		A[j] = temp;
	}
}
