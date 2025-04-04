//
// Created by user on 25. 4. 4.
//
#include<iostream>
using namespace std;

int gcd(int a, int b){
  while(b!=0){
    int temp=b;
    b=a%b;
    a=temp;
  }
  return a;
}

int main(){
  int N;
  cin>>N;

  int* arr=new int[N];

  for(int i=0;i<N;i++){
    cin>>arr[i];
  }

  int x;
  cin>>x;
  double sum=0;
  double count=0;

  for(int i=0;i<N;i++){
    if(gcd(arr[i], x)==1){
            sum+=arr[i];
            count++;
    }
  }
  cout<<sum/count<<"\n";
  return 0;
}