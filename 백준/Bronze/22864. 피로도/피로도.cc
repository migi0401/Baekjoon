#include<iostream>
using namespace std;

int main() {
	int a, b, c, m;
	cin >> a >> b >> c >> m;
	if (a > m) {
		cout << "0" << endl;
	}
	else{
		int total{ 0 };//총 피로도
		int temp{ 0 };//처리한 일의 양
		for (int i = 1; i <= 24; i++) {
			if (total + a > m) {
				total -= c;
				if (total < 0) {
					total = 0;
				}
			}
			else {
				total += a;
				temp += b;
			}
		}
		cout << temp << endl;
	}
}