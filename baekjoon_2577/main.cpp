#include <iostream>
using namespace std;

int a, b, c, n[10];
unsigned long r;

int main()
{

	cin >> a >> b >> c;
	r = a * b * c;
	while (r != 0) {
		n[r % 10]++;
		r /= 10;
	}
	for (int i = 0; i < 10; i++) cout << n[i] << endl;
}