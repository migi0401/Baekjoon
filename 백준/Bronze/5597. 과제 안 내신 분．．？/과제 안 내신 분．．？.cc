#include<iostream>
using namespace std;

int main() {
	int a[30];  //학생번호 저장한 배열
	int b[30];  //입력 받은 배열
	int c;

	for (int i = 0; i < 30; i++) {
		a[i] = i + 1;
	}
	for (int j = 0; j < 28; j++) {
		cin >> c;
		b[c-1] = c;
	}
	for (int n = 0; n < 30; n++) {
		if (a[n] != b[n]) {
			cout << n + 1 << endl;
		}
	}
}