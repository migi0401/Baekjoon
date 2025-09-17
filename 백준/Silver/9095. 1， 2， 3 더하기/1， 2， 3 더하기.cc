#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    int v[12];

    int n;

    v[1]=1;
    v[2]=2;
    v[3]=4;

    while (t--) {
        cin>>n;    //n입력받기

        for (int i=4;i<=n;i++) {
            v[i]=v[i-1]+v[i-2]+v[i-3];
        }

        cout<<v[n]<<"\n";
    }
}