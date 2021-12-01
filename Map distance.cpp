#include <iostream>

using namespace std;

int main()
{
	double scale = 0;
	double distance = 0;
	double range;
	cout << "What scale of the map?" << endl;
	cin >> scale;
	cout << "What distance?" << endl;
	cin >> distance;
	range = scale * distance;
	cout << "Distance between locality A to locality B - " << range / 100000 << " Kilometer" << endl;

	system("pause");
	return 0;
}