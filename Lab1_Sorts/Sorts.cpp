#include <iostream>
#include <vector>
#include "Sorts.h"

using namespace std;
/*
float* mergeSort(float* p_left, float* p_right, float* p_right, int left, int right) {
	int middle, buff;
	float *merged, *l_part, *r_part;

	if (p_left = p_right) {
		return p_right;
	}

	middle = (left + right) / 2;

	l_part = mergeSort(p_left, p_right, left, middle);
	r_part = mergeSort(p_left, p_right, middle + 1, right);

	//bubble
	for (int i = left; i <= right; i++) {
		for (int j = left; j <= right; j++) {
			if (p_left[i] > p_left[j]) {
				buff = p_left[i];
				p_left[i] = p_left[j];
				p_left[j] = buff;
			}
		}
	}
}
*/

void selectionSort(float **arrays, int numArr, int lengthArr) {
	float temp;
	for (int i = 0; i < lengthArr; i++) {
		for (int j = i + 1; j < lengthArr; j++) {
			if (arrays[numArr][i] > arrays[numArr][j]) {
				temp = arrays[numArr][i];
				arrays[numArr][i] = arrays[numArr][j];
				arrays[numArr][j] = temp;
			}
		}
	}

	// print sorted array
	/*
	for (int i = 0; i < lengthArr; i++) {
		cout << arrays[numArr][i] << endl;
	}
	*/
}

void bucketSort(float **arrays, int numArr ,int lengthArr, int maxElement/*, int minElement*/)  {
	/*
		bucketArr[i][0] - counter
	*/
		
	/*
	int bucketsNum;
	int string, column, string2, column2;
	int **matr;

	//Creating
	matr = (int**)malloc(string * sizeof(int*));
	for (int i = 0; i < string; i++) {
		matr[i] = (int*)malloc(column2 * sizeof(int));
	}

	//Filling
	for (int i = 0; i < string; i++) {
		for (int j = 0; j < column2; j++) {
			matr[i][j] = rand() % 7 + 1;
			matr[i][j] = 1;
		}
	}

	//Print matrix
	for (int i = 0; i < string; i++) {
		for (int j = 0; j < column2; j++) {
			printf("%d ", matr[i][j]);
		}
		printf("\n");
	}
	*/
	
	int bucketLength = lengthArr + 5;
	//int bucketNum = rand() % maxElement + 101 + lengthArr;
	int bucketNum = lengthArr + lengthArr / 2;
	int divider = ceil(float((maxElement + 1)) / float(bucketNum));
	int currentBucketIndex;
	float **bucketArr;
	//float *bucketArr = (float*)malloc(bucketLength * bucketNum * sizeof(float));
	bucketArr = (float**)malloc(bucketNum * sizeof(float*));
	for (int i = 0; i < bucketNum; i++) {
		bucketArr[i] = (float*)malloc(bucketLength * sizeof(float));
	}
	for (int i = 0; i < bucketNum; i++) {
		bucketArr[i][0] = 0;
	}

	// sorting each bucket
	for (int i = 0; i < lengthArr; i++) {
		currentBucketIndex = floor(arrays[numArr][i] / divider);
		bucketArr[currentBucketIndex][0]++;
		bucketArr[currentBucketIndex][(int)bucketArr[currentBucketIndex][0]] = arrays[numArr][i];
	}
	
	float temp;
	for (int i = 0; i < bucketNum; i++) {
		//selectionSort(bucketArr, i, bucketArr[i][0]);
		for (int k = 1; k <= bucketArr[i][0]; k++) {
			for (int j = k + 1; j <= bucketArr[i][0]; j++) {
				if (bucketArr[i][j] < bucketArr[i][j - 1]) {
					temp = bucketArr[i][j];
					bucketArr[i][j] = bucketArr[i][j - 1];
					bucketArr[i][j - 1] = temp;
				}
			}
		}
	}
	
	// unmerged buckets
	/*
	for (int i = 0; i < bucketNum; i++) {
		for (int j = 1; j <= bucketArr[i][0]; j++) {
			cout << bucketArr[i][j] << endl;
		}
	}
	*/
	
	// reconstruction of source array
	currentBucketIndex = 0;
	int currentBucketReverseIndex = 0;
	for (int i = 0; i < lengthArr; i++) {
		if (currentBucketReverseIndex == bucketArr[currentBucketIndex][0]) {
			currentBucketIndex++;
			currentBucketReverseIndex = 0;
		}
		else {
			currentBucketReverseIndex++;
			arrays[numArr][i] = bucketArr[currentBucketIndex][currentBucketReverseIndex];
			
		}
	}
	int g = 0;
	for (int k = 0; k < bucketNum; k++) {
		for (int i = 1; i <= bucketArr[k][0]; i++) {
			arrays[numArr][g] = bucketArr[k][i];
			g++;
		}
	}

	for (int i = 0; i < bucketNum; i++) {
		free(bucketArr[i]);
	}
	free(bucketArr);

	// print sorted array
	/*
	for (int i = 0; i < lengthArr; i++) {
		cout << arrays[numArr][i] << endl;
	}
	*/
}

float randPivot(float *arr, int left, int right)
{
	return  *(arr + left + rand() % (right - left));
}

float worsePivot(float *arr, int left, int right)
{
	float max = *(arr + right);
	for (int i = left; i < right; i++)
	{
		if (*(arr + i) > max) max = *(arr + i);
	}
	return max;
}

void quickSort(float *arr, int left, int right, float getPivot(float*, int, int))
{
	int i = left, j = right;
	float pivot = getPivot(arr, left, right);
	while (i <= j) {
		while (*(arr + i) < pivot)
			i++;
		while (*(arr + j) > pivot)
			j--;
		if (i <= j) {
			swap(arr + i, arr + j);
			i++;
			j--;
		}
	};
	if (left < j)
		quickSort(arr, left, j, getPivot);
	if (i < right)
		quickSort(arr, i, right, getPivot);
}

void swap(float *a, float *b)
{
	float c = *a;
	*a = *b;
	*b = c;
}

void merge(float *arr, int l, int m, int r)
{
	int i, j, k;
	int nl = m - l + 1;
	int nr = r - m;

	/* create temp arrays */
	//int L[nl], R[nr];
	float *leftArr = (float *)malloc(nl * sizeof(float));
	float *rightArr = (float *)malloc(nr * sizeof(float));
	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < nl; i++)
		*(leftArr + i) = *(arr + l + i);
	for (j = 0; j < nr; j++)
		*(rightArr + j) = *(arr + m + 1 + j);

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray 
	j = 0; // Initial index of second subarray 
	k = l; // Initial index of merged subarray 
	while (i < nl && j < nr)
	{
		if (*(leftArr + i) <= *(rightArr + j))
		{
			*(arr + k) = *(leftArr + i);
			i++;
		}
		else
		{
			*(arr + k) = *(rightArr + j);
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of L[], if there
	are any */
	while (i < nl)
	{
		*(arr + k) = *(leftArr + i);
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there
	are any */
	while (j < nr)
	{
		*(arr + k) = *(rightArr + j);
		j++;
		k++;
	}
	free(leftArr);
	free(rightArr);
}

void mergeSort(float *arr, int l, int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}