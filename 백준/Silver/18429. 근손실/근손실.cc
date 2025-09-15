#include<iostream>
#include<vector>
using namespace std;

int N,K;
bool visited[1000];
vector<int> v;
int final=0;

void search(int count, int weight) {
    if (count == N) {
        final++;
    }
    else {
        for (int i=0;i<N;i++) {
            if (!visited[i]){
                int newWeight = weight - K + v[i];
                if (newWeight >= 500) {
                    visited[i]=true;
                    search(count+1, newWeight);
                    visited[i]=false;
                }
            }
        }
    }
}

    int main() {
        cin>>N>>K;
        for (int i=0;i<N;i++) {
            int num;
            cin>>num;
            v.push_back(num);
        }
    search(0, 500);
    cout<<final<<endl;
    return 0;
    }