#include<iostream>
#include<vector>
using namespace std;

int gcd(int a,int b) {
    while (b!=0) {
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main() {
    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        vector<int> v;

        for (int i=0;i<n;i++) {
            int x;
            cin>>x;
            v.push_back(x);
        }

        long sum=0;
        for (int i=0;i<n;i++) {
            for (int j=i+1;j<n;j++) {
                sum+=gcd(v[i],v[j]);
            }
        }

        cout<<sum<<"\n";
    }
}