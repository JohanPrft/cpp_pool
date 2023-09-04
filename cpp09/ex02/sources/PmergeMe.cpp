#include "../includes/PmergeMe.hpp"

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

//std::vector<std::vector<int> > createArrayOfPairs(std::vector<int> & array)
//{
//	size_t size = array.size();
//	std::vector<std::vector<int> > arrayOfPairs;
//
//	for (size_t i = 0; i < size; i+=2)
//	{
//		std::vector<int> subArray;
//
//		subArray.push_back(array[i]);
//		if (i + 1 != size) // only add an element if one left
//			subArray.push_back(array[i + 1]);
//		arrayOfPairs.push_back(subArray);
//	}
//	return (arrayOfPairs);
//}
//
//void sortPairsInArray(std::vector<std::vector<int> > & arrayOfPairs)
//{
//	size_t size = arrayOfPairs.size();
//	for (size_t i = 0; i < size; i++)
//	{
//		if (arrayOfPairs[i].size() < 2) //skip alone
//		{
//			std::cout << arrayOfPairs[i][0] << std::endl;
//			continue;
//		}
//		if (arrayOfPairs[i][0] > arrayOfPairs[i][1])
//			std::swap(arrayOfPairs[i][0], arrayOfPairs[i][1]);
//		std::cout << arrayOfPairs[i][0] << " " << arrayOfPairs[i][1] << std::endl;
//	}
//}
//
//void sortArrayOfPairs(std::vector<std::vector<int> > & arrayOfPairs)
//{
//	size_t size = arrayOfPairs.size();
//	for (size_t i = 0; i < size; i+=2)
//	{
//		if (size)
//	}
//}

// Merges two subvectors of vector.
// First subvector is vec[left..mid]
// Second subvector is vec[mid+1..right]
void merge(std::vector<int>& array, int left, int mid, int right) {
	int subVectorOneSize = mid - left + 1;
	int subVectorTwoSize = right - mid;

	std::vector<int> leftVector(subVectorOneSize);
	std::vector<int> rightVector(subVectorTwoSize);

	for (int i = 0; i < subVectorOneSize; i++) {
		leftVector[i] = array[left + i];
	}

	for (int j = 0; j < subVectorTwoSize; j++) {
		rightVector[j] = array[mid + 1 + j];
	}

	int i = 0, j = 0, k = left;
	while (i < subVectorOneSize && j < subVectorTwoSize) {
		if (leftVector[i] <= rightVector[j]) {
			array[k] = leftVector[i];
			i++;
		} else {
			array[k] = rightVector[j];
			j++;
		}
		k++;
	}

	while (i < subVectorOneSize) {
		array[k] = leftVector[i];
		i++;
		k++;
	}

	while (j < subVectorTwoSize) {
		array[k] = rightVector[j];
		j++;
		k++;
	}
}

void insertionSort(std::vector<int>& arr, int left, int right) {
	for (int i = left + 1; i <= right; i++) {
		int key = arr[i];
		int j = i - 1;
		while (j >= left && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

// Merge sort function
void PmergeMe::mergeInsertSort(std::vector<int>& array, int left, int right) {
	if (right - left + 1 <= 2) //threshold
	{
		insertionSort(array, left, right);
	}
	else if (left < right) {
		int mid = left + (right - left) / 2;
		mergeInsertSort(array, left, mid);
		mergeInsertSort(array, mid + 1, right);
		merge(array, left, mid, right);
	}
}

// COPLIEN FORM

PmergeMe::PmergeMe() {

}

PmergeMe::PmergeMe(const PmergeMe &src) {
	*this = src;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &cpy) {
	if (this != &cpy) {
	}
	return (*this);
}

PmergeMe::~PmergeMe() {

}
