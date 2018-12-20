#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

int Task1() {
	int rows, columns;
	GetDimensionMatrix(rows, columns);

	char** matrix = new char*[rows];
	for (int i = 0; i < rows; i++) {
		matrix[i] = new char[columns];
	}

	GetMatrixFromFile(matrix);
	cout << "Исходный массив:\n";
	PrintMatrix(matrix, rows, columns);
	cout << "\nОтсортированный массив:\n";
	BubbleSortMatrix(matrix, rows, columns);
	PrintMatrix(matrix, rows, columns);

	SaveMatrix(matrix, rows, columns);

	return 0;
}

int GetMatrixFromFile(char **matrix) {
	int rows, columns;

	ifstream file("task1_matrix.txt");

	file >> rows;
	file >> columns;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			file >> matrix[i][j];
		}
	}

	file.close();

	return 0;
}
int SaveMatrix(char **matrix, int rows, int columns) {
	ofstream file("task1_matrixSort.txt", ios_base::trunc);

	file << "Отсортированный массив:\n";

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			file << matrix[i][j] << " ";
		}
		file << endl;
	}

	file.close();
	return 0;
}


int PrintMatrix(char **matrix, int rows, int columns) {

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	cout << " ";
	return 0;
}

int BubbleSortMatrix(char **matrix, int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		BubbleSort(matrix[i], columns);
	}

	return 0;
}
int BubbleSort(char* array, int length) {
	bool exit = false;

	while (!exit) {
		exit = true;
		for (int i = 0; i < length - 1; i++) {
			//по возрастанию - >
			//по убыванию - <

			if (array[i] > array[i + 1]) {
				Swap(array[i], array[i + 1]);
				exit = false;
			}
		}

	}

	return 0;
}

int InsertionSortMatrix(char **matrix, int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		InsertionSort(matrix[i], columns);
	}

	return 0;
}
int InsertionSort(char* array, int length) {
	char tmp;
	int elemntIndex;

	for (int i = 1; i < length; i++) {
		tmp = array[i]; 
		elemntIndex = i - 1;
		while (elemntIndex >= 0 && array[elemntIndex] > tmp) {
			array[elemntIndex + 1] = array[elemntIndex];
			array[elemntIndex] = tmp;
			elemntIndex--;
		}
	}

	return 0;
}

int SelectionSortMatrix(char **matrix, int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		SelectionSort(matrix[i], columns);
	}

	return 0;
}
int SelectionSort(char* array, int length) {
	for (int i = 0; i < length; i++) {
		char tmp = array[0];

		for (int j = i + 1; j < length; j++) {
			if (array[i] > array[j]) {
				Swap(array[i], array[j]);
			}
		}
	}

	return 0;
}

int Swap(char &a, char &b) {
	char tmp = a;
	a = b;
	b = tmp;

	return 0;
}
int GetDimensionMatrix(int &rows, int &columns) {
	ifstream file("task1_matrix.txt");

	file >> rows;
	file >> columns;

	file.close();

	return 0;
}