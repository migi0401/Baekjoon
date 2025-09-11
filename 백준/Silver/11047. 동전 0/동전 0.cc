#include<iostream>
#include<vector>
using namespace std;


int main() {
        int n; //1부터 10가지 종류
        long k; //1부터 1억까지의 범위
        cin>>n>>k;

        vector<int> v(n);

        for (int i=0;i<n;i++) {
                cin>>v[i];
        }

        int count=0;

        for (int i=n-1;i>=0;i--) {
                if (k==0) {
                        break;
                }
                int temp=k/v[i];
                k-=temp*v[i];
                count+=temp;
        }

        cout<<count;
}