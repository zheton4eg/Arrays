#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using namespace std;
#define tab "\t"
//#define NUMERICS
#define DOMASHKA
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	int minRand, maxRand;
	cout << "Я могу вывести на экран 10 случайных цифр, введите числовой промежуток : "<< endl ;
	cout << "Введите минимальное число: "; cin >> minRand;
	cout << "Введите максимальное число: "; cin >> maxRand;



#ifdef NUMERICS
	//заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{

		arr[i] = rand() % (maxRand - minRand) + minRand;
	}

	//вывод массива на экран
	for (int i = 0; i < n; i++)

	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;

			}
		}
	}
	for (int i = 0; 1 < n; i++)
	{

		cout << arr[i] << tab;


	}
	cout << endl;


#endif // NUMERICS

#ifdef DOMASHKA
	

	if (maxRand - minRand >= n - 1)
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % (maxRand - minRand) + minRand;
		}

		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;

		}
		cout << endl;

		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j <= n; j++)
			{


				if (arr[j] == arr[i])
				{
					int boofer = arr[i];
					arr[j] += arr[j] + 1 <= maxRand;
					arr[i] = arr[j];

					arr[j] = boofer;
				}


			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j <= n; j++)
			{

				if (arr[j] == arr[i])
				{
					int boofer = arr[i];
					arr[j] -= 2 <= arr[n - 1];
					arr[i] = arr[j];

					arr[j] = boofer;
				}


			}
		}
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	}
	else if (maxRand - minRand <n)
		cout << "ОШИБКА! Разница максимального и минимального значения меньше десяти! Попробуйте еще раз.";
		cout << endl;
#endif // DOMASHKA

}


