//Arrays
#include<iostream>
using namespace std;

	void main()
	{
		setlocale(LC_ALL, "");
		int n; // ���������� ���������� ��� ���������� ��������� �������
		cout << "������� ���������� ��������� � �������: ";
		cin >> n; // ���� ���������� ��������� � ����������

		int arr[n]; // ���������� ������� �������� n

		// ���� ��������� ������� � ����������
		cout << "������� ���������� ��������� � �������:" << endl;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		// ����� ������� � ������ �������
		cout << "������ � ������ �������:" << endl;
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;

		// ����� ������� � �������� �������
		cout << "������ � �������� �������:" << endl;
		for (int i = n - 1; i >= 0; i--) {
			cout << arr[i] << " ";
		}
		cout << endl;

		// ���������� ����� ��������� �������
		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum += arr[i];
		}
		cout << "����� ��������� �������: " << sum << endl;

		// ���������� �������� ��������������� ��������� �������
		double average = static_cast<double>(sum) / n;
		cout << "����� ��������� �������: " << average << endl;

		// ���������� ������������ � ������������� �������� � �������
		int min_val = arr[0], max_val = arr[0];
		for (int i = 1; i < n; i++) {
			if (arr[i] < min_val) {
				min_val = arr[i];
			}
			if (arr[i] > max_val) {
				max_val = arr[i];
			}
		}
		cout << "����������� ��������: " << min_val << endl;
		cout << "������������ ��������: " << max_val << endl;


}

