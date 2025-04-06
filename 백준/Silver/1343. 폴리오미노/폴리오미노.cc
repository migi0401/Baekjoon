#include<iostream>
using namespace std;

int main() {
    char board[52];
    char out[52];
    for (int i=0;i<51;i++) {
        board[i]=out[i]=0;
    }
    int count=0;

    cin>>board;

    for (int i=0;i<51;i++) {
        if (board[i]=='X') {
            count++;
            if (count==2) {
                out[i]='B';
                out[i-1]='B';
            }
            else if (count==4) {
                out[i]='A';
                out[i-1]='A';
                out[i-2]='A';
                out[i-3]='A';
                count=0;
            }
        }
        else {
            if (count%2!=0) {
                cout<<"-1";
                return 0;
            }
            count=0;
            out[i]=board[i];
            if (board[i]=='\n') {
                break;
            }
        }
    }
    cout<<out;
}