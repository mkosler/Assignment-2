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
		int k = i;
		for (; (num_cmps++, k > 0) && (num_cmps++, temp < A[k - 1]); k--)
		{
			A[k] = A[k - 1];
		}
		A[k] = temp;
	}
}
