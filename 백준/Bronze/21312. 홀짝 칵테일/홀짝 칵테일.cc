#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;

    int arr[3]={a,b,c};

    int max=0;
//이중 for문으로 다시 구현 : 갱신할 때는 이중 for문이 좋다

    for (int i=0;i<3;i++) {
        if (arr[i]%2!=0) {
            int temp=arr[i];
            if (temp>max) {
                max=temp;
            }
        }
    }

    for (int i=0;i<3;i++) {
        for (int j=i+1;j<3;j++) {
            if (arr[i]%2!=0&&arr[j]%2!=0) {
                int temp=arr[i]*arr[j];
                if (temp>max) {
                    max=temp;
                }
            }
        }
    }

    if (arr[0] % 2 != 0 && arr[1] % 2 != 0 && arr[2] % 2 != 0) {
        int temp = arr[0] * arr[1] * arr[2];
        if (temp > max) {
            max=temp;
        }
    }

    if (max==0) {
        max=arr[0]*arr[1]*arr[2];
    }

    cout<<max<<endl;
    return 0;
}