#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	int x;
	int count{ 0 }; //반복 수
	while (true) {
		cin >> a >> b >> c;
		count++;
		if (a == 0 && b == 0 && c == 0) {
			break; // 반복문 나가기
		}
		else if (c % b > a) { //나머지가 크면 L을 더한다
			x = (c/b) * a + a; 
			cout << "Case " << count << ": " << x << endl;
			x = 0; //x초기화
		}
		else {
			x = (c / b) * a + (c % b); // 기본 점화식
			cout << "Case " << count << ": " << x<<endl;
			x = 0;
		}
	}
}