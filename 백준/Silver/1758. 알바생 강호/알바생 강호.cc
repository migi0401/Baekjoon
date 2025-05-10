#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int N;
    cin>>N;

    vector<int> v;

    while (N--) {
        int x; //원래 주려던 팁
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(), v.end(),greater<int>()); //내림차순 정렬

    long sum=0; //합이 커질 수 있어서 long으로 쓴다!
    for (int i=0;i<v.size();i++) {
        int temp=v[i]-((i+1)-1);
        if (temp>0) {
            sum+=temp;
        }
    }
    cout<<sum<<"\n";
}