#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[1001];

    arr[1]=1; //점화식을 세우면 초기 값 몇 개를 설정해서
    //다음 값을 도출해낼 수 있다.
    arr[2]=3;

    for (int i=3;i<=n;i++) { //범위를 설정하지 못함
        arr[i]=arr[i-1]+2*arr[i-2];
        arr[i]=arr[i]%10007;
    }

    cout<<arr[n];

    return 0;
}