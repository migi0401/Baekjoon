#include<iostream>
using namespace std;



int main() {
	int n{ 0 };
	cin >> n;

	int five{ 0 };
	int two{ 0 };
	
	for (int i{ n }; i > 0;) {
		if (i ==3 || i==1) {
			five=-1;
			break;
		}
		else {
			if (i % 2 == 0 && i < 10) {
				i = i - 2;
				two++;
			}
			else {
				i = i - 5;
				five++;
			}
		}
	}
	cout << two + five;
	return 0;
}