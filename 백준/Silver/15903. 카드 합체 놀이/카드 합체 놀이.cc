#include <iostream>
#include<queue>
using namespace std;

int main() {
    priority_queue<long long, vector<long long>, greater<long long>> pq; //우선순위 큐
    int n, m;
    cin >> n >> m;
    int temp;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        pq.push(temp);
    }

    while (m--) {
        long long first_min = pq.top();
        pq.pop();
        long long second_min = pq.top();
        pq.pop();

        long long sum = first_min + second_min;
        pq.push(sum);
        pq.push(sum);
    }
    long long score = 0;

    while (!pq.empty()) {
        score += pq.top();
        pq.pop();
    }

    cout << score << "\n";
}