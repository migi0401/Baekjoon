//
// Created by user on 26. 3. 9.
//
#include<iostream>
using namespace std;

int arr[128][128];
int blue, white = 0;

void ColorCheck(int x, int y, int size) {
    int first = arr[x][y];
    bool checkPoint = true;

    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y +  size; j++) {
            if (arr[i][j] != first ) { //처음 요소와 다른 요소이면 자르기
                checkPoint = false;
                break;
            }
        }
    }

    if (checkPoint) { //모두 같은 색이면 종료
        if (first == 1) {
            blue++;
        }
        else {
            white++;
        }
        return;
    }

    ColorCheck(x, y, size/2); //왼쪽 위
    ColorCheck(x + (size/2), y, size/2); //왼쪽 아래
    ColorCheck(x, y + (size/2), size/2); //오른쪽 위
    ColorCheck(x + (size/2), y + (size/2), size/2); //오른쪽 아래

}

int main(){
    int n;
    cin>>n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin>>arr[i][j];
        }
    }

    ColorCheck(0, 0, n);
    cout<<white<<"\n"<<blue;
}