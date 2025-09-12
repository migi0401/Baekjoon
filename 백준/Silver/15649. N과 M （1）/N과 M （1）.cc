#include<iostream>
#include<vector>
using namespace std;

int N,M;
vector<int> v;
bool visited[1000];

void search(int count) {
    if (count==M) { //수열이 완성되면 출력하는 거임!!
        for (int i:v) {
            cout<<i<<" ";
        }
        cout<<"\n";
        return;
    }
    else {
        for (int i=1;i<=N;i++) { //수열을 완성시켜보자
            //1부터 시작이라 i=1 부터!
            if (visited[i]) {
                continue;
            }
            visited[i]=true;
            v.push_back(i);
            search(count+1); //재귀적으로 호출, 수열이 아직 안 만들어지면 출력 x
            visited[i]=false;
            v.pop_back();
        }
    }
}


int main() {
    cin>>N>>M;

    search(0);
}