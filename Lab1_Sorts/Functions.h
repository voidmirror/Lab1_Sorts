#ifndef Functions_H
#define Functions_H

void randomizeArrays(float arr10[], float arr50[], float arr100[], float arr500[], float arr1k[], float arr5k[], float arr10k[], float arr50k[], float arr100k[]);
int runSelection(float **arrays, const int *lengthArr);
int runBucket(float **arrays, const int *lengthArr);
int runMerge(float **arrays, const int *lengthArr);
int runQuick(float **arrays, const int *lengthArr);
int runTim(float **arrays, const int *lengthArr);

#endif