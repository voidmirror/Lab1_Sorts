#include <iostream>
#include "Functions.h"

void randomizeArrays(float arr10[], float arr50[], float arr100[], float arr500[], float arr1k[], float arr5k[], float arr10k[], float arr50k[], float arr100k[]) {
	for (int i = 0; i < 10; i++) {
		arr10[i] = static_cast <float> (rand()) / static_cast <float> (RAND_MAX)* 100;
	}
	for (int i = 0; i < 50; i++) {
		arr50[i] = static_cast <float> (rand()) / static_cast <float> (RAND_MAX)* 100;
	}
	for (int i = 0; i < 100; i++) {
		arr100[i] = static_cast <float> (rand()) / static_cast <float> (RAND_MAX)* 100;
	}
	for (int i = 0; i < 500; i++) {
		arr500[i] = static_cast <float> (rand()) / static_cast <float> (RAND_MAX)* 100;
	}
	for (int i = 0; i < 1000; i++) {
		arr1k[i] = static_cast <float> (rand()) / static_cast <float> (RAND_MAX)* 100;
	}
	for (int i = 0; i < 5000; i++) {
		arr5k[i] = static_cast <float> (rand()) / static_cast <float> (RAND_MAX)* 100;
	}
	for (int i = 0; i < 10000; i++) {
		arr10k[i] = static_cast <float> (rand()) / static_cast <float> (RAND_MAX)* 100;
	}
	for (int i = 0; i < 50000; i++) {
		arr50k[i] = static_cast <float> (rand()) / static_cast <float> (RAND_MAX)* 100;
	}
	for (int i = 0; i < 100000; i++) {
		arr100k[i] = static_cast <float> (rand()) / static_cast <float> (RAND_MAX)* 100;
	}
}

int selection(float arr10[], float arr50[], float arr100[], float arr500[], float arr1k[], float arr5k[], float arr10k[], float arr50k[], float arr100k[]) {


	return 1;
}

int bucket(float arr10[], float arr50[], float arr100[], float arr500[], float arr1k[], float arr5k[], float arr10k[], float arr50k[], float arr100k[]) {


	return 2;
}