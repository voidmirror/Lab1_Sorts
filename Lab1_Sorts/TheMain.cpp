#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <ctime>

#include "Functions.h"

/*
	Randomize all arrays: [0f..100f]
	10, 50, 100, 500, 1000, 5000, 10000, 50000, 100000

	Setup timer (maybe as structure)

	Selection Sort
	Bucket Sort
	Merge Sort
	QuickSort
	Tim Sort


*/

using namespace std;

int(*menu(void)) (float arr10[], float arr50[], float arr100[], float arr500[], float arr1k[], float arr5k[], float arr10k[], float arr50k[], float arr100k[]) {
	int choice;
	int(*menu_items[])(float arr10[], float arr50[], float arr100[], float arr500[], float arr1k[], float arr5k[], float arr10k[], float arr50k[], float arr100k[]) = { runSelection, runBucket, runMerge, runQuick, runTim };

	cout << "Welcome to Sort Analysis." << endl << endl;
	cout << "1. Selection sort." << endl;
	cout << "2. Bucket Sort." << endl;
	cout << "3. Merge Sort." << endl;
	cout << "4. QuickSort." << endl;
	cout << "5. Tim Sort." << endl << endl;
	cout << "Choose a Sort: ";
	cin >> choice;
	if ((choice > 0) && (choice < 5)) {
		system("cls");
		return menu_items[choice - 1];
	}
	else {
		return NULL;
	}
}

int main() {
	float arr10[10], arr50[50], arr100[100], arr500[500], arr1k[1000], arr5k[5000], arr10k[10000], arr50k[50000], arr100k[100000];

	srand(time(0));
	cout.precision(3);
	
	randomizeArrays(arr10, arr50, arr100, arr500, arr1k, arr5k, arr10k, arr50k, arr100k);
	/*
	for (int i = 0; i < 10; i++) {
		cout << fixed << arr100k[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		cout << fixed << arr10[i] << endl;
	}
	*/
	

	int(*fn)(float arr10[], float arr50[], float arr100[], float arr500[], float arr1k[], float arr5k[], float arr10k[], float arr50k[], float arr100k[]);

	while (1) {
		fn = menu();
		if (fn == NULL) {
			cout << "There is nothing.\n" << endl;
			return 0;
		}
		int t = fn(arr10, arr50, arr100, arr500, arr1k, arr5k, arr10k, arr50k, arr100k);	//Run the function
		cout << "Ended: " << t << endl;
	}
}