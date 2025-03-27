#include<iostream>
using namespace std;

class node{
  private:
    int elem;
    node* next;
    public:
      node(){
        elem=0;
        next=nullptr;
      }
    friend class queue;
};

class queue{
  private:
    node* front;
    node* rear;
    int qsize;
    public:
      queue(){
        front=nullptr;
        rear=nullptr;
        qsize=0;
      }
      int Front(){
        if (empty()) {
          return -1;
        }
        return front->elem;
      }
      int Rear(){
        if (empty()) {
          return -1;
        }
        return rear->elem;
      }
      int size(){
        return qsize;
      }
      bool empty(){
        return qsize==0;
      }
      void enqueue(int elem){
        node* temp=new node();
        temp->elem=elem;
        if(empty()){
          front=rear=temp;
        }
        else{
          rear->next=temp;
          rear=temp;
        }
        qsize++;
      }
      void dequeue(){
        if(empty()){
          return;
        }
        else{
          node* delnode=front;
          front=front->next;
          delete delnode;
          if(empty()){
            rear = nullptr;
          }
          qsize--;
        }
     }
};

int main(){
  int n,w,l;
  cin>>n>>w>>l;
  int m;
  queue q; //트럭들

  for(int i=0;i<n;i++){
    cin>>m;
    q.enqueue(m);
  }

  queue q2; //다리
  int total_weight{0};
  int time{0};

  for(int i=0;i<w;i++) { //0을 넣어서 다리의 크기를 표현한다
    q2.enqueue(0);
  }

  while(!q.empty()||total_weight>0){
    time++;

    total_weight-=q2.Front();
    q2.dequeue();

    if(total_weight+q.Front()<=l && !q.empty()){
      total_weight+=q.Front();
      q2.enqueue(q.Front());
      q.dequeue();
    }
    else{
      q2.enqueue(0);
    }
  }
  cout<<time<<endl;
}