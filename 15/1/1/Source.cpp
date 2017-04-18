#include <iostream>

using namespace std;

void F(int *mas, int size) {
	
	int *mas2 = new int[size * 2], q = 0;

		for (int i = 0; i < size; ++i) {
				while (q > 0)
				{
					if (mas[i] <= mas2[q - 1]) break;
					mas[mas2[q - 2]] = mas[i];
					q -= 2;
				}
			q += 2;
			mas2[q - 1] = mas[i];
		mas2[q - 2] = i;}

		while (q > 0)
		{
			mas[mas2[q - 2]] = 0;
			q -= 2;
		}

delete[] mas2;}

void main() {

	int mas[] = { 1, 3, 2, 5, 3, 4 };
	int dpsize = sizeof(mas) / sizeof(mas[0]);

		for (int q = 0; q < dpsize; ++q) cout << mas[q] << " ";
		cout << endl;

	F(mas, dpsize);

		for (int q = 0; q < dpsize; ++q) cout << mas[q] << " ";
cout << endl;}