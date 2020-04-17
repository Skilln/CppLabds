#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int size = 20;

	int* arrayOfNumbers = new int[size];

	for (int i = 0; i < size; i++) {
		arrayOfNumbers[i] = rand() % 100;
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			int a = arrayOfNumbers[j];
			int b = arrayOfNumbers[j + 1];

			if (a > b) {
				arrayOfNumbers[j] = b;
				arrayOfNumbers[j + 1] = a;
			}
		}
	}

	for (int i = 0; i < size; i++) {
		cout << arrayOfNumbers[i] << " ";
	}
}