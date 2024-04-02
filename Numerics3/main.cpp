#include <iostream>
using namespace std;
//#define DEC_2_BIN
#define DEC_2_HEX
void main()
{
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введитедесятичное число: "; cin >> decimal;

#ifdef DEC_2_BIN

	const int MAX_CAPACITY = 32;//максимально возможная разрядность двоичного числа
	bool bynary[MAX_CAPACITY]{};//этот массив будет хранить разряды двоичного числа


	int i = 0;//номер разряда
	for (; decimal; decimal /= 2)bynary[i++] = decimal % 2;
	//Для получения конечного результата нужно переписать остатки от деления в обратном порядке
	//начиная с последненго результата от деления
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
		hex[i] = decimal % 16;  //получаем младший шестнадцатиричный разряд и сохраняем его
		decimal /= 16;         //убираем из десятичного числа младший шестнадцатиричный разряд из десятичного числа
	}
	for (--i; i >= 0; i--)
	{
		(hex[i] >= 10) /*> (hex[i] < 10)*/ ? cout << char(hex[i] + 55) : cout << (int)hex[i];
	}
	cout << endl;
}