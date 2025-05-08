#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b; //현재 주파수 a와 가고 싶은 주파수 b

    int N;
    cin>>N; //지정된 주파수의 개수

    vector<int> v;//지정 주파수를 저장할 벡터 v

    for (int i=0;i<N;i++) {
        int x;
        cin>>x;
        v.push_back(x); //지정 주파수 입력
    }

    int temp=abs(a-b); //절댓값을 구현하는 abs 이용 cmath로 사용 가능
    int count=temp; //버튼을 눌러서 직접 이동해야 하는 횟수

    for (int i=0;i<N;i++) { // 지정 주파수를 이용하여 이동하는 횟수
        int a=abs(v[i]-b)+1; //지정 주파수로 이동 + 버튼 한 번 누름
        if (count>a) {
            count=a;
        }
    }
    cout<<count<<"\n";
}