#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

void view(const int* X, int size) {
	cout << "Масив " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << X[i] << '\t';
	} cout << endl << endl;
}

void createVect(int*& X, int size, int minValue, int maxValue) {
	srand((time(NULL)));

	for (int i = 0; i < size; i++) 
		X[i] = rand() % (maxValue - minValue + 1) + minValue;


}

bool checkDate(int* A, int* B, int* C, int size) {

	int day = 5;
	int month = 9;
	int year = 2000;

	bool sameDay = false;
	bool sameMonth = false;
	bool sameYear = false;

	for (int i = 0; i < size; i++) {
		if (A[i] == day) {
			sameDay = true;
			break;
		}
	}

	for (int i = 0; i < size; i++) {
		if (B[i] == month) {
			sameMonth = true;
			break;
		}
	}

	for (int i = 0; i < size; i++) {
		if (C[i] == year) {
			sameYear = true;
			break;
		}
	}

	return sameDay && sameMonth && sameYear;
}

int main()
{
	int size = 10;

	int* A, * B, * C;


	A = new int[size];

	createVect(A, size, 1, 30);
	
	view(A, size);

	B = new int[size];

	createVect(B, size, 1, 12);

	view(B, size);

	C = new int[size];

	createVect(C, size, 1999, 2003);

	view(C, size);

	if (checkDate(A, B,  C, size)) {
		cout << "You are lucky!";
	}
	else {
		cout << "Try again!";
	}

	delete[] A;
	delete[] B;
	delete[] C;

	return 0;
}
