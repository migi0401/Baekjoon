#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

struct Lecture {
    int start;
    int end;
};

bool compare(Lecture& a, Lecture&b) {
    if (a.start != b.start) {
        return a.start < b.start; //시작 시간이 다르면 먼저 시작하는 강의부터
    }
    return a.end < b.end; //시작 시간이 같으면 빨리 끝나는 강의 먼저
}

int main() {
    int N;
    cin>>N;

    int s, t;

    vector<Lecture> v(N);
    for (int i = 0; i < N; i++) {
        cin>>s>>t;
        v[i].start = s;
        v[i].end = t;
    }

    sort(v.begin(), v.end(), compare); //비교함수 기준으로 정렬 가능

    priority_queue<int, vector<int>, greater<int>> pq; //최솟값이 가장 큰 우선순위를 가진다면 이렇게 선언

    for (int i=0;i<N;i++) {
        int current_start = v[i].start;

        if (!pq.empty() && current_start >= pq.top()) {
            pq.pop();
        }
        
        pq.push(v[i].end);
    }

    cout<<pq.size()<<endl;
}