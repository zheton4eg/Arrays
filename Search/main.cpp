#include <iostream>
using namespace std;
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	int const n = 10, m = 8;
	int array[n] = {};
	int count[m] = {0};

	for (int i = 0; i < n; i++) {
		array[i] = rand() % 7 - 0;
		cout << array[i] << tab;
	}
	
	// ������������ ���������� ������� �������� � �������:
	for (int i = 0; i < n; i++) {	
	count[array[i]]++;
	}
	cout << endl;
	bool duplicatesFound = false;
	// ������� ������ ������������� ��������:
	for (int i = 0; i < m; i++)
	{
		if (count[i] > 1)
		{
			duplicatesFound = true;
			cout << "�����: " << i << ", ���������� � �������: " << count[i] << endl;
		}
	}
}
