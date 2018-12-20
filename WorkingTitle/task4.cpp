#include "pch.h"
#include <iostream>

using namespace std;

int Task4() {

	int length = 0;
	do {
		cout << "Enter n (0, 50]: ";
		cin >> length;
	} while (length < 0 || length > 50);

	int *array = new int[length];

	InputArray(array, length);
	OutputArray(array, length);

	Task4_1(array, length);

	delete[] array;

	return 0;
}

int InputArray(int *array, const int length) {
	cout << "Enter array (" << length << "):\n";
	for (int i = 0; i < length; i++) {
		cin >> array[i];
	}

	return 0;
}
int OutputArray(int *array, const int length) {
	cout << "Array:";
	for (int i = 0; i < length; i++) {
		cout <<  " " << array[i];
	}
	cout << ";\n";

	return 0;
}

int Task4_1(int* array, const int length) {
	cout << "Amount zero elements: " << AmountZeroElements(array, length) << endl;
	MaxElements(array, length);

	return 0;
}
int AmountZeroElements(int* array, int length) {
	int zero = 0;
	for (int i = 0; i < length; i++) {
		if (array[i] == 0)
			zero++;
	}
	return zero;
}
int MaxElements(int* array, int length) {
	int maxElement = array[0];
	int amountMaxElements = 1;
	for (int i = 1; i < length; i++) {
		if (array[i] > maxElement) {
			maxElement = array[i];
			amountMaxElements = 1;
		} else if (maxElement == array[i]) {
			amountMaxElements++;
		}
	}

	if (amountMaxElements > 1) {
		cout << "Max element = " << maxElement << "(" << amountMaxElements << ")" << endl;
	} else {
		cout << "Error\n";
	}

	return 0;
}

int Task4_4(int* array, const int length) {

}
//int MaxLengthRepeatNum(int *array, int length) {
//	int maxLenght = 1;
//	int element = array[0];
//	int currentLength = 1;
//	int currentElement = array[0];
//	for (int i = 1; i < length; i++) {
//		if (currentElement == array[i]) {
//			currentLength++;
//		} else if (array[i] != currentElement) {
//			if (currentLength > maxLenght) {
//				maxLenght = currentLength;
//				currentLength = 1;
//			}
//
//		}
//	}
//
//
//}
