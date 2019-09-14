#include <stdio.h>
#include "Sorts.h"

float* mergeSort(float* p_left, float* p_right, /*float* p_right,*/ int left, int right) {
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