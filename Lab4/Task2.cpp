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

int MinNum(int* A, int N) {

	int min = A[0];

	for (int i = 0; i < N; i++) {
		if (min > A[i]) min = A[i];
	}

	return min;
}

void Invert(int* A, int N) {
	int* inverted = new int[N];

	for (int i = 0; i < N; i++) {
		inverted[i] = A[N - i - 1];
	}

	for (int i = 0; i < N; i++) {
		cout << inverted[i] << " ";
	}
	cout << endl;
}

void MegNum(int* A, int N) {

	for (int i = 0; i < N; i++) {
		cout << A[i] * -1 << " ";
	}

	cout << endl;

}

int main()
{
	int sizeA = 10;
	int sizeB = 15;
	int sizeC = 20;

	int* A, * B, * C;

	A = new int[sizeA];

	createVect(A, sizeA, 1, 20);
	
	view(A, sizeA);

	B = new int[sizeB];

	createVect(B, sizeB, 1, 20);

	view(B, sizeB);

	C = new int[sizeC];

	createVect(C, sizeC, 1, 20);

	view(C, sizeC);

	cout << endl;

	cout << "Min value : A" + MinNum(A, sizeA) << endl;
	cout << "Min value : B" + MinNum(B, sizeB) << endl;
	cout << "Min value : C" + MinNum(C, sizeC) << endl;

	Invert(A, sizeA);
	Invert(B, sizeB);
	Invert(C, sizeC);

	MegNum(A, sizeA);
	MegNum(B, sizeB);
	MegNum(C, sizeC);


	delete[] A;
	delete[] B;
	delete[] C;

	return 0;
}