//Arrays
#include<iostream>
using namespace std;

	void main()
	{
		setlocale(LC_ALL, "");
		int n; // объявление переменной для количества элементов массива
		cout << "Введите количество элементов в массиве: ";
		cin >> n; // ввод количества элементов с клавиатуры

		int arr[n]; // объявление массива размером n

		// Ввод элементов массива с клавиатуры
		cout << "Введите количество элементов в массиве:" << endl;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		// Вывод массива в прямом порядке
		cout << "Массив в прямом порядке:" << endl;
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;

		// Вывод массива в обратном порядке
		cout << "Массив в обратном порядке:" << endl;
		for (int i = n - 1; i >= 0; i--) {
			cout << arr[i] << " ";
		}
		cout << endl;

		// Вычисление суммы элементов массива
		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum += arr[i];
		}
		cout << "Сумма элементов массива: " << sum << endl;

		// Вычисление среднего арифметического элементов массива
		double average = static_cast<double>(sum) / n;
		cout << "Сумма элементов массива: " << average << endl;

		// Нахождение минимального и максимального значения в массиве
		int min_val = arr[0], max_val = arr[0];
		for (int i = 1; i < n; i++) {
			if (arr[i] < min_val) {
				min_val = arr[i];
			}
			if (arr[i] > max_val) {
				max_val = arr[i];
			}
		}
		cout << "Минимальное значение: " << min_val << endl;
		cout << "Максимальное значение: " << max_val << endl;


}

