#include<iostream>
using namespace std;

int main() {

	int  n;
	cin >> n;
	int five{ 0 }, three{ 0 };

	for (int i = n; i > 0;) { //반복문의 수를 나눠서 작성 가능하다
		if (i == 4 || i<3) {
			five = -1;
			break;
		}
		else {
			if (i % 3 == 0 && i<15) { //
				i = i - 3;
				three++;
			}
			else {
				i = i - 5;
				five++;
			}

		}
	}
	cout << five + three << endl;
}