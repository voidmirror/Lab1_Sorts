#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <ctime>
#include "Functions.h"
#include "Sorts.h"

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

int runSelection(float **arrays, const int *lengthArr) {
	int _startTime, _endTime, durationTime, numArr;
	char dateString[26];
	char *_dateStr;
	time_t currentDate;
	time_t *p_currentDate = &currentDate;
	
	selectArray();
	
	cin >> numArr;
	if (numArr == 0) {
		ofstream fout("reports/selectionReport.txt");
		if (!fout.is_open()) {
			cout << "Unable to open file stream!\n";
		}
		fout.close();
		system("cls");
		cout << "Report cleared" << endl;
		return 1;
	}
	numArr--;
	system("cls");
	ofstream fout("reports/selectionReport.txt", ios_base::app);

	// print source-array
	/*
	for (int i = 0; i < 10; i++) {
		cout  << arrays[0][i] << endl;
	}
	cout << endl;
	*/

	// print current date
	time(p_currentDate);
	_dateStr = ctime(p_currentDate);
	for (int i = 0; i < 26; i++) {
		dateString[i] = _dateStr[i];
	}
	//cout << dateString;

	// Sorting
	cout << "Sorting..." << endl << endl;
	_startTime = clock();
	selectionSort(arrays, numArr, lengthArr[numArr]);
	_endTime = clock();
	durationTime = _endTime - _startTime;

	// screen result
	cout << "Name: Selection Sort" << endl;
	cout << dateString;
	cout << "Array: " << lengthArr[numArr] << " elements" << endl;
	cout << "Duration Time: " << durationTime << " ms" << endl;
	cout << endl;
	// make report
	fout << "Name: Selection Sort" << endl;
	fout << dateString;
	fout << "Array: " << lengthArr[numArr] << " elements" << endl;
	fout << "Duration Time: " << durationTime << " ms" << endl;
	fout << endl;

	//end of function-----------------------------------------------------------------
	if (!fout.is_open()) {
		cout << "Unable to open file stream!\n";
	}
	else {
		cout << "All results are saved in txt-file \"selectionReport\"" << endl << endl;
	}
	fout.close();
	return 1;
}

int runBucket(float **arrays, const int *lengthArr) {
	int _startTime, _endTime, durationTime, numArr;
	// bucket
	int maxElement = 100;
	char dateString[26];
	char *_dateStr;
	time_t currentDate;
	time_t *p_currentDate = &currentDate;

	selectArray();

	cin >> numArr;
	if (numArr == 0) {
		ofstream fout("reports/bucketReport.txt");
		if (!fout.is_open()) {
			cout << "Unable to open file stream!\n";
		}
		fout.close();
		system("cls");
		cout << "Report cleared" << endl;
		return 1;
	}
	numArr--;
	system("cls");
	ofstream fout("reports/bucketReport.txt", ios_base::app);

	// print source-array
	/*
	for (int i = 0; i < 10; i++) {
	cout  << arrays[0][i] << endl;
	}
	cout << endl;
	*/

	// print current date
	time(p_currentDate);
	_dateStr = ctime(p_currentDate);
	for (int i = 0; i < 26; i++) {
		dateString[i] = _dateStr[i];
	}
	//cout << dateString;

	// Sorting
	cout << "Sorting..." << endl << endl;
	_startTime = clock();
	//bucket(arrays, numArr, lengthArr[numArr]);
	bucketSort(arrays, numArr, lengthArr[numArr], maxElement);
	_endTime = clock();
	durationTime = _endTime - _startTime;

	// screen result
	cout << "Name: Bucket Sort" << endl;
	cout << dateString;
	cout << "Array: " << lengthArr[numArr] << " elements" << endl;
	cout << "Duration Time: " << durationTime << " ms" << endl;
	cout << endl;
	// make report
	fout << "Name: Bucket Sort" << endl;
	fout << dateString;
	fout << "Array: " << lengthArr[numArr] << " elements" << endl;
	fout << "Duration Time: " << durationTime << " ms" << endl;
	fout << endl;

	//end of function-----------------------------------------------------------------
	if (!fout.is_open()) {
		cout << "Unable to open file stream!\n";
	}
	else {
		cout << "All results are saved in txt-file \"bucketReport\"" << endl << endl;
	}
	fout.close();
	return 2;
}

int runMerge(float **arrays, const int *lengthArr) {


	return 3;
}

int runQuick(float **arrays, const int *lengthArr) {


	return 4;
}

int runTim(float **arrays, const int *lengthArr) {


	return 5;
}

void selectArray() {
	cout << "Array to Sort:" << endl;
	cout << "1. 10 elements" << endl;
	cout << "2. 50 elements" << endl;
	cout << "3. 100 elements" << endl;
	cout << "4. 500 elements" << endl;
	cout << "5. 1 000 elements" << endl;
	cout << "6. 5 000 elements" << endl;
	cout << "7. 10 000 elements" << endl;
	cout << "8. 50 000 elements" << endl;
	cout << "9. 100 000 elements" << endl;
	cout << "0. Clear the Report";
	cout << endl << "Enter: ";
}