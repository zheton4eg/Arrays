#include <iostream>
using namespace std;
//#define DEC_2_BIN
#define DEC_2_HEX
void main()
{
	setlocale(LC_ALL, "");
	int decimal;
	cout << "����������������� �����: "; cin >> decimal;

#ifdef DEC_2_BIN

	const int MAX_CAPACITY = 32;//����������� ��������� ����������� ��������� �����
	bool bynary[MAX_CAPACITY]{};//���� ������ ����� ������� ������� ��������� �����


	int i = 0;//����� �������
	for (; decimal; decimal /= 2)bynary[i++] = decimal % 2;
	//��� ��������� ��������� ���������� ����� ���������� ������� �� ������� � �������� �������
	//������� � ����������� ���������� �� �������
	for (--i; i >= 0; i--)
	{
		cout << bynary[i];
	}
	cout << endl;

#endif // DEC_2_BIN
	const int MAX_HEX_CAPACITY = 8;
	char hex[MAX_HEX_CAPACITY] = {};
	int i = 0;
	for (; decimal; i++)
	{
		hex[i] = decimal % 16;  //�������� ������� ����������������� ������ � ��������� ���
		decimal /= 16;         //������� �� ����������� ����� ������� ����������������� ������ �� ����������� �����
	}
	for (--i; i >= 0; i--)
	{
		(hex[i] >= 10) /*> (hex[i] < 10)*/ ? cout << char(hex[i] + 55) : cout << (int)hex[i];
	}
	cout << endl;
}