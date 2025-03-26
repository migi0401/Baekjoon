//
// Created by user on 25. 3. 26.
//
#include<iostream>

using namespace std;

class queue{
  private:
    int front;
    int rear;
    int qsize;
    int capacity;
    int* arr;
public:
  queue(int x) {
    front = 0;
    rear = -1;
    qsize = 0;
    capacity = x;
    arr=new int[capacity];
  }
    bool empty(){
      return qsize==0;
    }
    bool full(){
      return qsize==capacity;
    }
    int size(){
      return qsize;
      }
    int Front(){
      return arr[front];
    }
    void enqueue(int x){
      if(full()){
        return;
      }
      rear=(rear+1)%capacity;
      arr[rear]=x;
      qsize++;
    }
    void dequeue(){
      if(empty()){
        return;
      }
      front=(front+1)%capacity; //front++이 아니라 이 라인으로 연산 가능
      qsize--;
    }
};

int main(){
  int N, k;//k번째 사람 수
  cin>>N>>k;
  queue qu(N);

  for(int i=1;i<=N;i++){
    qu.enqueue(i);
  }
  cout<<"<";
  while(qu.size() > 0) {
    //마지막 한 개 남을 때까지
    for(int i=0;i<k-1;i++){
      int a=qu.Front();
      qu.dequeue();
      qu.enqueue(a);
    }
    cout<<qu.Front();
    qu.dequeue();
    if(qu.size()>0) {
      cout<<", ";
    }
  }
  cout<<">"<<endl;//마지막 한 개 남으면 원소 출력
}