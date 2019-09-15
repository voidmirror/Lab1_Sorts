#ifndef Functions_H
#define Functions_H

void randomizeArrays(float arr10[], float arr50[], float arr100[], float arr500[], float arr1k[], float arr5k[], float arr10k[], float arr50k[], float arr100k[]);
int runSelection(float **arrays);
int runBucket(float **arrays);
int runMerge(float **arrays);
int runQuick(float **arrays);
int runTim(float **arrays);

#endif