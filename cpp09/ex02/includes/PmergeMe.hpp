#ifndef CPP09_PMERGEME_HPP
# define CPP09_PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <limits>
#include <string>
#include <cerrno>
#include <vector>
#include <deque>

/*
 *	Merge-Insertion Sort : Ford–Johnson algorithm is a comparison sorting algorithm published in 1959.
 *
 *	Input X: n elements.
 *	Group the elements of X into n/2 pairs, if odd leave the last one unpaired.
 *	Sort the pairs and put to the right the larger. (merge sort part)
 *	Recursively sort the pairs by their largest element, creating a sequence S of n/2 number in ascending order.
 *	Insert at the start of S the element paired with the smallest number in S
 *	Insert the remaining n/2 - 1 elements (insertion sort part)
 *
 *	The algorithm is designed to take advantage that the binary searches used to insert elements into S are most efficient
 *	when the length of the subsequence that is searched is one less than a power of two.
 */

class PmergeMe {

private:
	PmergeMe();
	PmergeMe(const PmergeMe &src);
	PmergeMe &operator=(const PmergeMe &cpy);
	~PmergeMe();

public:
	// algorithm based on divide and conquer strategy
	template <typename T>
	static void merge(T& array, int left, int mid, int right)
	{
		int subVectorOneSize = mid - left + 1;
		int subVectorTwoSize = right - mid;

		T leftVector(subVectorOneSize);
		T rightVector(subVectorTwoSize);

		for (int i = 0; i < subVectorOneSize; i++)
			leftVector[i] = array[left + i];

		for (int j = 0; j < subVectorTwoSize; j++)
			rightVector[j] = array[mid + 1 + j];

		int i = 0, j = 0, k = left;
		while (i < subVectorOneSize && j < subVectorTwoSize)
		{
			if (leftVector[i] <= rightVector[j])
			{
				array[k] = leftVector[i];
				i++;
			} else
			{
				array[k] = rightVector[j];
				j++;
			}
			k++;
		}

		while (i < subVectorOneSize)
		{
			array[k] = leftVector[i];
			i++;
			k++;
		}

		while (j < subVectorTwoSize)
		{
			array[k] = rightVector[j];
			j++;
			k++;
		}
	}

	// algorithm growing a sorted list in front
	// best for little list
	template <typename T>
	static void insertionSort(T& arr, int left, int right)
	{
		for (int i = left + 1; i <= right; i++)
		{
			int key = arr[i];
			int j = i - 1;
			while (j >= left && arr[j] > key)
			{
				arr[j + 1] = arr[j];
				j--;
			}
			arr[j + 1] = key;
		}
	}

	template <typename T>
	static void mergeInsertSort(T& array, int left, int right)
	{
		if (right - left + 1 <= 2)
		{
			insertionSort(array, left, right);
		} else if (left < right)
		{
			int mid = left + (right - left) / 2;
			mergeInsertSort(array, left, mid);
			mergeInsertSort(array, mid + 1, right);
			merge(array, left, mid, right);
		}
	}
};


#endif
