#include<iostream>
using namespace std;

int fac(int n) {
	if (n == 0) {
		n = 1;
		return fac(n);
	}
	else if (n == 1)
		return n;
	else {
		return n * fac(n - 1);
	}
}

int main() {
	int n, k;
	cin >> n >> k;

	//팩토리얼을 구현해서 풀어보기
	int temp;
	temp = fac(n);
	int K;
	K = fac(k);
	int N;
	N = fac(n - k);

	cout << temp / (N * K) << "\n";
}