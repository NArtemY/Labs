#include "pch.h"
#include <iostream>


using namespace std;

int main() {

	//1 вариант
	setlocale(LC_ALL, "Russian");
	float arr[5] = { 1.1, -1.4, -1.2, 1.3, 1.5 };
	float a = 0, max = arr[0], min=arr[0], mult = 1, b;
	int maxp = 0, minp = 0;
	for (int i = 0; i < 4; i++) {
		if (arr[i] < 0) a = a + arr[i]; //Нахождение суммы отрицательных чисел
	}
	for (int i = 0; i < 4; i++) {
		if (arr[i] < min) {
			min = arr[i];
			minp = i;
		}
		if (arr[i] > max) {
			max = arr[i];
			maxp = i;
		}
	}
	for (int j = minp + 1; j < maxp + 1; j++) {
		mult = mult * arr[j];//Произведение чисел между минимумом и максимумом
	}
	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 4 - j; i++) {
			if (arr[i] > arr[i + 1]) {
				b = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = b;
			}
		}
	}
	cout << "Сумма отрицательных элементов массива: " << a << endl;
	cout << "Произведение чисел между минимумом и максимумом: " << mult << endl;
	cout << "Массив: ";
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << "; ";
	}
	
	
	return 0;
}