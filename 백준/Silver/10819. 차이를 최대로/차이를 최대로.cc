#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
    int N;
    cin>>N;

    vector<int> v;

    for (int i=0;i<N;i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end()); //오름차순 정렬

    int max=0;
    do {
        int sum=0;
        for (int i=0;i<N-1;i++) {
            sum+=abs(v[i]-v[i+1]);
        }

        if (sum>max) {
            max=sum;
        }
    }while (next_permutation(v.begin(),v.end()));

    cout<<max<<"\n";
}