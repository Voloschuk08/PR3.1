#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу

	cout << "x = "; cin >> x;

	y = 1 + 9 * x;
	if (x <= 0)
		y += log(fabs(sin(x))) + pow(x, 7);
	if (x > 0 && x <= 3)
		y += (cos(fabs(x + 1)) / sin(fabs(x + 1))) / 2.0;
	if (x > 3)
		y += 3 * x - pow(x, 5);

	cout << endl;
	cout << "1) y = " << y << endl;

	y = 1 + 9 * x;
	if (x <= 0)
		y += log(fabs(sin(x))) + pow(x, 7);
	else
		if (x > 0 && x <= 3)
			y += (cos(fabs(x + 1)) / sin(fabs(x + 1))) / 2.0;
		else
			y += 3 * x - pow(x, 5);

	cout << "2) y = " << y << endl;
	cin.get();
	return 0;


}
