#ifndef Sotrs_H
#define Sorts_H

void selectionSort(float **arrays, int numArr, int lengthArr);
void bucketSort(float **arrays, int numArr, int lengthArr, int maxElement/*, int minElement*/);
void qsortRecursive(float *mas, int size);
float randPivot(float *arr, int left, int right);
float worsePivot(float *arr, int left, int right);
void quickSort(float *arr, int left, int right, float getPivot(float*, int, int));
void swap(float *a, float *b);
void merge(float *arr, int l, int m, int r);
void mergeSort(float *arr, int l, int r);

#endif