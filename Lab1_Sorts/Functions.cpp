#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <ctime>
#include "Functions.h"

using namespace std;

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

int runSelection(float arr10[], float arr50[], float arr100[], float arr500[], float arr1k[], float arr5k[], float arr10k[], float arr50k[], float arr100k[]) {
	int _startTime, _endTime, durationTime;
	ofstream fout("reports/selectionReport.txt");

	if (!fout.is_open()) // если файл не открыт
		cout << "Unable to open file stream!\n";

	fout << "hi again and again, but not now\n";
	fout.close();

	//end of function-----------------------------------------------------------------
	cout << "All results are saved in txt-file \"selectionReport\"" << endl;
	return 1;
}

int runBucket(float arr10[], float arr50[], float arr100[], float arr500[], float arr1k[], float arr5k[], float arr10k[], float arr50k[], float arr100k[]) {


	return 2;
}

int runMerge(float arr10[], float arr50[], float arr100[], float arr500[], float arr1k[], float arr5k[], float arr10k[], float arr50k[], float arr100k[]) {


	return 2;
}

int runQuick(float arr10[], float arr50[], float arr100[], float arr500[], float arr1k[], float arr5k[], float arr10k[], float arr50k[], float arr100k[]) {


	return 2;
}

int runTim(float arr10[], float arr50[], float arr100[], float arr500[], float arr1k[], float arr5k[], float arr10k[], float arr50k[], float arr100k[]) {


	return 2;
}