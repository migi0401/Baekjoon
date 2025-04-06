#include<iostream>
using namespace std;

int main() {
    int money;
    cin>>money;

    int* arr = new int[14];

    for (int i=0;i<14;i++) {
        cin>>arr[i];
    }

    int bnp=0;//준현이의 주식 수
    int timming=0;//성민이의 주식 수

    int bnpMoney=money;//준현이가 보유한 현금
    int timmingMoney=money;//성민이가 보유한 현금

    for (int i=0;i<14;i++) {
        while (arr[i]<=bnpMoney) { //주가가 현금보다 작을 때
            bnpMoney-=arr[i]; //현금에서 주가만큼 차감
            bnp++; //주식 수 증가
        }
    }
    int bnptotal=bnpMoney+arr[13]*bnp; //준현이의 마지막 합계

    for (int i=3;i<14;i++) { //처음부터 매수하지 않음/ 음수인 경우를 방지
        if (arr[i-3]>arr[i-2] && arr[i-2]>arr[i-1]) {
            int temp=timmingMoney/arr[i];
            timming+=temp;
            timmingMoney-=arr[i]*temp;
        }
        else if (arr[i-3]<arr[i-2] && arr[i-2]<arr[i-1]) {
                timmingMoney+=arr[i]*timming; //주가만큼 현금 잔고에 추가
                timming=0; //주식 수가 0보다 클 때까지만
        }
    }
    int timmingtotal=timmingMoney+arr[13]*timming;

    if (bnptotal>timmingtotal) {
        cout<<"BNP\n";
    }
    else if (bnptotal<timmingtotal) {
        cout<<"TIMING\n";
    }
    else {
        cout<<"SAMESAME\n";
    }
}