#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int min{ -1000000 };
	int max{ 1000000 };
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if (max > num) {
			max = num;
		}
		if (min < num) {
			min = num;
		}
	}
	cout << max << " " << min;
}