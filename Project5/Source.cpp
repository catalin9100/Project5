#include <iostream>
#include <math.h>

using namespace std;

//the divisors of a number (m) from a vector (x) displayed in another vector (y).
void main() {
	int x[10], y[10], i, n, k, m;
	cout << "Dimension: ";
	cin >> n;
	for (i = 1; i <= n; i++) {
		cout << "x[" << i << "]=";
		cin >> x[i];
	}
	cout << "m= " << endl;
	cin >> m;
	k = 0;
	cout << "New vector: " << endl;
	for (i = 1; i <= n; i++) {
		if (x[i] % m == 0) {
			k++;
			y[k] = x[i];
			cout << "y[" << k << "]=" << y[k] << endl;
		}
	}
	cout << "Initial vector: " << endl;
	for (i = 1; i <= n; i++) {
		cout << "x[" << i << "]=" << x[i] << endl;
	}
}

