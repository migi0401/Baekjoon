#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;

    int m;
    cin>>m;

    vector<int> v;

    for (int i=0;i<n;i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }

    long count=0;
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (v[i]+v[j]==m) {
                count++;
            }
        }
    }
    cout<<count<<"\n";
}