#include<iostream>
using namespace std;

class node {
private:
	int elem;
	node* next;
public:
	node() {
		elem = 0;
		next = nullptr;
	}
	friend class queue;
};

class queue {
private:
	node* frontnode;
	node* rearnode;
	int qsize;
public:
	queue() {
		frontnode = nullptr;
		rearnode = nullptr;
		qsize = 0;
	}
	int size() {
		return  qsize;
	}
	bool empty() {
		return qsize == 0;
	}
	void push(int x) {
		node* v = new node;
		v->elem = x;
		if (empty()) {
			frontnode = rearnode = v;
		}
		else {
			rearnode->next = v; //처음엔 v=rearnode->next로 했음
			rearnode = v;
		}
		qsize++;
	}
	void pop() {
		if (empty()) {
			cout << "-1\n";
		}
		else {
			node* delnode = frontnode;
			frontnode = frontnode->next;
			cout << delnode->elem << "\n";
			delete delnode;
			qsize--;
		}
	}
	void front() {
		if (empty()) {
			cout << "-1\n";
		}
		else {
			cout << frontnode->elem << "\n";
		}
	}
	void back() {
		if (empty()) {
			cout << "-1\n";
		}
		else {
			cout << rearnode->elem << "\n";
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