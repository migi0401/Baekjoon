#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b) {
	return a > b;
}

int main() {
	int N{0};
	int temp{ 0 };
	int num{0};
	cin >> N;
	int* arr = new int[N];

	for (int i{ 0 }; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N, compare); //

	for (int i{ 0 }; i < N; i++) {
		cout << arr[i] << "\n";
	}
	delete[] arr;
}