#include<iostream>
#include<string>
using namespace std;

int reverse(int x) { //gpt한테 얻은 숫자 뒤집기 함수
    int rev=0;
    while (x>0) {
        rev=rev*10+(x%10);
        x/=10;
    }
    return rev;
}

int main() {
    int x,y;
    cin>>x>>y;

    int revX=reverse(x);
    int revY=reverse(y);
    int sum=revX+revY;
    int temp=reverse(sum);

    cout<<temp<<endl;
    return 0;   
}