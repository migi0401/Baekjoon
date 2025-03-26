#include<iostream>
using namespace std;

int main(){
  int N;
  cin>>N;

  int temp{0};
  int count{0};

  for (int i=1;i<=N;i++) {
    temp=0;
    for (int j=i;j<=N;j++) {
     temp+=j;
      if (temp==N) {
        count++;
        break;
      }
      else if (temp>N) {
        break;
      }
    }
  }
  cout<<count<<endl;
}