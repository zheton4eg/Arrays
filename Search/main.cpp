#include <iostream>
using namespace std;
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	int const n = 10;
	int array[n] = {};
	int count[8] = { 0 };
	// ������������ ���������� ������� �������� � ������� � ������� �� �����:
	for (int i = 0; i < n; ++i) {
		array[i] = rand() % 7 - 0;
		count[array[i]]++;
		cout<< array[i] << tab;
	}
	cout << endl;
	bool duplicatesFound = false;
	// ������� ������ ������������� ��������:
	for (int i = 0; i < 8; ++i)
	{
		if (count[i] > 1)
		{
			duplicatesFound = true;
			cout << "�����: " << i << ", ���������� �������: " << count[i] << endl;
		}
	}
}
