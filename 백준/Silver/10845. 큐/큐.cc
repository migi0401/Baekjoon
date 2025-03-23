#include<iostream>
using namespace std;

class queue {
private:
	int frontindex;
	int backindex;
	int qsize;
	int* arr;
public:
	queue() {
		frontindex = 0;
		backindex = -1;
	    qsize = 0 ;
		arr = new int[10000];
	}
	int size() {
		return  qsize;
	}
	bool empty() {
		return qsize == 0;
	}
	void push(int x) {
		backindex++;
		arr[backindex] = x;
		qsize++;
	}
	void pop() {
		if (empty()) {
			cout << "-1\n";
		}
		else {
			cout << arr[frontindex] << "\n";
			frontindex++;
			qsize--;
		}
	}
	void front() {
		if (empty()) {
			cout << "-1\n";
		}
		else {
			cout << arr[frontindex] << "\n";
		}
	}
	void back() {
		if (empty()) {
			cout << "-1\n";
		}
		else {
			cout << arr[backindex] << "\n";
		}
	}
};

int main() {
	int N;
	cin >> N;
	string s;
	queue qu;
	while (N--) {
	    cin >> s;
		if (s == "size") {
			cout << qu.size() << "\n";
		}
		else if (s == "empty") {
			if (qu.empty()) {
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
		}
		else if (s == "front") {
			qu.front();
		}
		else if (s == "push") {
			int x;
			cin >> x;
			qu.push(x);
		}
		else if (s == "pop") {
			qu.pop();
		}
		else if (s == "back") {
			qu.back();
		}
	}
}