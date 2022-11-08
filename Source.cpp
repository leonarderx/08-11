#include <iostream>
#include <ctime>
using namespace std;
int main() {
	//Array1.Дано целое число N(> 0).Сформировать и вывести целочисленный массив размера N, содержащий N первых положительныхнечетных чисел : 1, 3, 5, ... .
	/*const int n = 10;
	int mas[n];
	mas[0] = 1;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] + 2;
		cout << mas[i] << ' ';
	}
	cout << endl;*/

	//Array1.Дано целое число N(> 0).Сформировать и вывести целочисленный массив размера N, содержащийN первыхположительныхнечетныхчисел : 1, 3, 5, ... .
	/*const int n = 10;
	int mas[n];
	mas[0] = 2;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] * 2;
		cout << mas[i] << ' ';
	}
	cout << endl;*/

	//Array3.Дано целое число N(> 1), а также первый член A и разность D арифметической прогрессии.Сформировать и вывести массив размера N, содержащий N первых
	//членов данной прогрессии : A, A + D, A + 2·D, A + 3·D, ... .
	/*int a, d;
	cin >> a >> d;
	const int n = 10;
	int mas[n];
	mas[0] = a;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] + d;
		cout << mas[i] << ' ';
	}
	cout << endl;*/

	//Array4.Дано целое число N(> 1), а также первый член A и знаменатель D геометрической прогрессии.Сформировать и вывести массив размера N, 
	//содержащий N первых членов данной прогрессии : A, A·D, A·D2, A·D3, ... .
	/*int a, d;
	const int n = 10;
	cin >> a >> d;
	int mas[n];
	mas[0] = a;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] * d;
		cout << mas[i] << ' ';
	}
	cout << endl;*/

	//Array5.Дано целое число N(> 2).Сформировать и вывести целочисленный массив размера N, содержащий N первых элементов последовательности 
	//чисел Фибоначчи FK : F1 = 1, F2 = 1, FK = FK−2 + FK−1, K = 3, 4, ... .
	
	const int n = 10;
	int mas[n];
	mas[0] = 3;
	mas[1] = 4;
	cout << mas[0] << " " << mas[1];
	for (int i = 2; i < n; i++) {
		mas[i] = mas[i - 1] + mas[i - 2];
		cout << mas[i] << " ";
	}
	cout << endl;
}