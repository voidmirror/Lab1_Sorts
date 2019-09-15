#include <iostream>
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