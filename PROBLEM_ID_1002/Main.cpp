#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

main() {
	double n = 3.14159, raio, area;

	cin >> raio;
	area = n * (raio * raio);

	cout << fixed << setprecision(4);
	cout << "A=" << area << "\n";

	system("pause");
}