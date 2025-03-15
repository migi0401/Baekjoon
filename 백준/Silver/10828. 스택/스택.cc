#include<iostream>
using namespace std;

int StackSize{ 0 };
int stack[10001];

void push(int x) {   //배열의 맨 뒤에 넣는다고 생각
	stack[StackSize] = x;
	StackSize++;
}
void pop() {
	if (StackSize == 0) {
		cout << "-1" << endl;
	}
	else {
		cout<<stack[StackSize-1]<<endl; //쌓아진 스택의 제일 나중에 저장된 데이터 반환
		StackSize--; //원래 size번째 원소를 출력하다가 안되서 바꿈
	} // 
}
void size() {
	cout << StackSize << endl;
}
void empty() {
	if (StackSize == 0) {
		cout << "1" << endl;
	}
	else {
		cout << "0" << endl;
	}
}
void top() {
	if (StackSize == 0) {
		cout << "-1" << endl;
	}
	else {
		cout << stack[StackSize-1] << endl;
	}//push함수에서 사이즈 1 증가되어서
	//나중 원소 사이즈-1 에서 찾을 수 있음!!
}

int main() {
	int n;
	cin >> n;
	string order;

	while (n--) {
		cin >> order;
		if (order == "push") {
			int x;
			cin >> x;
			push(x);
		}
		else if (order == "pop") {
			pop();
		}
		else if (order == "size") {
			size();
		}
		else if (order == "empty") {
			empty();
		}
		else if (order == "top") {
			top();
		}
	}
}