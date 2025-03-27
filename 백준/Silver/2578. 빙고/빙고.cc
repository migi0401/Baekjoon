#include<iostream>
using namespace std;

int arr[5][5];
int count{0};


int check() {
    int bingo{ 0 };

    for (int i{ 0 }; i < 5; i++) { //가로 구별
        bool checkZero = true; //bool 함수로 0인 부분 판별 아니면 다음줄에서 다시
        for (int j{ 0 }; j < 5; j++) {
            if (arr[i][j] != 0) { //0인 부분을 true
                checkZero = false;
                break; //하나라도 0이 아니면 다른 행으로 이동
            }
        }
        if (checkZero == true) {
            bingo++;
        }
    }

    for (int j{ 0 }; j < 5; j++) { //세로 판별
        bool checkZero = true;
        for (int i{ 0 }; i < 5; i++) {
            if (arr[i][j] != 0) {
                checkZero = false;
                break;
            }
        }
        if (checkZero == true) {
            bingo++;
        }
    }

    bool checkCol = true;
    for (int i{ 0 }; i < 5; i++) { //오른쪽 위로 가는 대각선
        if (arr[i][4 - i] != 0) {
            checkCol = false;
            break;
        }
    }
    if (checkCol == true) {
        bingo++;
    }

    bool checkDiag = true;
    for (int i{ 0 }; i < 5; i++) { //오른쪽 아래로 가는 대각선
        if (arr[i][i] != 0) {
            checkDiag = false;
            break;
        }
    }
    if (checkDiag == true) {
        bingo++;
    }

    return bingo;
}

void find(int x) {
    for (int i{ 0 }; i < 5; i++) {   //전체 탐색 => 숫자 같으면 0으로
        for (int j{ 0 }; j < 5; j++) {
            if (arr[i][j] == x) {
                arr[i][j] = 0;
                 //찾으면 종료하기
                count++;
                return;
            }
        }
    }
}

int main() {


    for (int row{ 0 }; row < 5; row++) { //2차원 배열의 행
        for (int col{ 0 }; col < 5; col++) { //각 행의 요소 관리
            cin >> arr[row][col];  //입력받기
        }
    }

    for (int i{ 0 }; i < 25; i++) {
        int m;
        cin >> m; //사회자 번호 입력
        find(m); //받을 때 마다 탐색
        if (check() >= 3){
            cout<<count<<endl;
            break;
        }
    }
}