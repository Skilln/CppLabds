#include <iostream>
#include <math.h>

using namespace std;

int findElementIn(int arrayOfElements[], int length, int value) {

	for (int i = 0; i < length; i++) {
		if (arrayOfElements[i] == value) return i;
	}

	return -1;
}

void showSimple(int arrayOfElements[], int length) {

	for (int i = 0; i < length; i++) {
		for (int j = 2; j <= arrayOfElements[i]; j++) {
			if (arrayOfElements[i] % j == 0 && arrayOfElements[i] != j) {
				arrayOfElements[i] = 0;
			}
		}

		if (arrayOfElements[i] != 0) {
			cout << arrayOfElements[i] << " ";
		}
	}
}

void makeFrame(int width, int height, int d) {
	int** frameArray = new int* [width];

	d--;

	for (int i = 0; i < width; i++) {
		frameArray[i] = new int[height];
	}

	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			frameArray[i][j] = 0;
			if (i <= d || j <= d) frameArray[i][j] = 1;
			if (i >= (width - d) - 1 || j >= (height - d) - 1) frameArray[i][j] = 1;
		}
	}

	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			if (frameArray[i][j] != 0) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}

		cout << endl;
	}
}

int main()
{
	int size = 20;

	int* arrayOfElemets = new int[size];

	for (int i = 0; i < size; i++) {
		arrayOfElemets[i] = rand() % 100;
	}

	cout << "Index of 5 is " << findElementIn(arrayOfElemets, size, 5) << endl;

	showSimple(arrayOfElemets, size);
	cout << endl;

	makeFrame(10, 10, 2);

}
