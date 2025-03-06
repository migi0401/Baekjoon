#include<iostream>
using namespace std;

int gcd(int a, int b) {
	if (a % b == 0) {
		return b;
	}
	else {
		return gcd(b, a % b);
	}
}

int main() {
	int a;
	int b, c{}, d;
	int x;
	cin >> a;
	if (a == 2) {
		cin >> b>>c;
		x = gcd(b, c);
		for (int i = 1; i <= x; i++) {
			if (x % i == 0) {
				cout << i << endl;
			}
		}
	}
	else {
		cin >> b >> c >> d;
		x = gcd(b, gcd(c, d));
		for (int i = 1; i <= x; i++) {
			if (x % i == 0) {
				cout << i << endl;
			}
		}
	}
	return 0;
}