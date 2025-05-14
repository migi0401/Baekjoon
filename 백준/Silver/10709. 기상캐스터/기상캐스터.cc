#include<iostream>
using namespace std;

int main() {
    int H,W;
    cin>>H>>W; //H는 남북방향, W는 동서방향

    char arr[101][101];
    int arr1[101][101];

    for (int i=0;i<H;i++) {
        for (int j=0;j<W;j++) {
            cin>>arr[i][j];
        }
    }

    for (int i=0;i<H;i++) {
        int count=-1;
        for (int j=0;j<W;j++) {
            if (arr[i][j]=='c') {
                count=0;
                arr1[i][j]=count;
            }
            else {
                if (count==-1) {
                    arr1[i][j] = -1;
                }
                else { //count=0인 상태
                    arr1[i][j]=++count;
                }
            }
        }
    }

    for (int i=0;i<H;i++) {
        for (int j=0;j<W;j++) {
            cout<<arr1[i][j]<<" ";
        }
        cout<<"\n";
    }
}