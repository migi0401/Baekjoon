#include<iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M; //전구의 개수와 명령횟수

	int num;//전구의 현재 상태;

	int* arr = new int[N+1];

	for (int i{ 1 }; i <= N; i++) {
		cin >> num;
		arr[i] = num;
	}

	int a, b, c;//명령숫자
	
	while (M--) {
		cin >> a >> b >> c;
		if (a == 1) {
			arr[b] = c;
		}
		else if (a == 2) {
			for (int i = b; i <= c; i++) {
				if (arr[i] == 1) {
					arr[i] = 0;
				}
				else if(arr[i]==0) {
					arr[i] = 1;
				}
			}
		}
		else if (a == 3) {
			for (int i = b; i <= c; i++) {
				arr[i] = 0;
			}
		}
		else if (a == 4) {
			for (int i = b; i <= c; i++)
			{
				arr[i] = 1;
			}
		}
	}
	for (int i{ 1 }; i <= N; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}