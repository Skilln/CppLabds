#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int size = 5;
	float sum = 0;

	float** arrayOfNumbers = new float* [size];

	for (int i = 0; i < size; i++) {
		arrayOfNumbers[i] = new float[size];
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			double randValue = (rand() % 201 - 100) / 100.0f;

			arrayOfNumbers[i][j] = randValue;

			sum += randValue;
		}
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (arrayOfNumbers[i][j] < -0.5f) {
				arrayOfNumbers[i][j] = sum / (size * size);
			}
		}
	}


	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << arrayOfNumbers[i][j] << " ";
			
		}
		cout << endl;
	}
	
}
