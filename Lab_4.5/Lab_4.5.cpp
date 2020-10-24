// Lab_4.5.cpp
// Дорожовець Володимир 
// Лабораторна робота № 4.5
// «Попадання» у плоску фігуру.
// Варіант 0.6 
#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x, y, R;

	cout << "R = ";  cin >> R;
	cout << endl;

    // Перший спосіб

	for (int i = 0; i < 10; i++)
	{
		cout << "x ="; cin >> x;
		cout << "y ="; cin >> y;

		if ((y >= sqrt(R * R - (pow(x + R, 2))) - R && y <= 0 && x >= -R) ||
			(y <= sqrt(R * R - (pow(x - R, 2))) && y >= 0))
		{
			cout << "Так" << endl;
			cout << endl;
		}
		else
			cout << "Ні" << endl;
		    cout << endl;
	}

	// Другий спосіб

	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		x = (4.0 * R) * rand() / RAND_MAX - 2 * R;
		y = (4.0 * R) * rand() / RAND_MAX - 2 * R;

		if ((y >= sqrt(R * R - (pow(x + R, 2))) - R && y <= 0 && x >= -R) ||
			(y <= sqrt(R * R - (pow(x - R, 2))) && y >= 0))
			cout << setw(8) << setprecision(4) << x << " "
			     << setw(8) << setprecision(4) << y << " " << "Так" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			     << setw(8) << setprecision(4) << y << " " << "Ні" << endl;
	}

	cin.get();
	return 0;
}
