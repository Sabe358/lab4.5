#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	cout << "R = "; cin >> R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if (((x >= 0 && y >= 0 && pow(x - R, 2) + pow(y - R, 2) <= pow(R, 2) && y <= x)) ||
			(x <= 0 && y <= 0 && pow(x + R, 2) + pow(y + R, 2) <= pow(R, 2) && y >= x))

			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|     " << setw(10) << "Point(x,y)" << "  |"
		<< setw(6) << "Answer" << " |" << endl;
	cout << "---------------------------" << endl;
	for (int i = 0; i < 10; i++)

	{

		double x = 4.0 * R * rand() / RAND_MAX - 2.0 * R;
		double y = 4.0 * R * rand() / RAND_MAX - 2.0 * R;
		if (((x >= 0 && y >= 0 && pow(x - R, 2) + pow(y - R, 2) <= pow(R, 2) && y <= x)) ||
			(x <= 0 && y <= 0 && pow(x + R, 2) + pow(y + R, 2) <= pow(R, 2) && y >= x))

			cout << "|" << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << "|" << "  yes" << "  |" << endl;
		else
			cout << "|" << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << "|" << "  no" << "   |" << endl;



		cout << "---------------------------" << endl;
	}
	return 0;
}