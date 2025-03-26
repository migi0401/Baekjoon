//
// Created by user on 25. 3. 26.
//
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
    bool empty(){
      return qsize==0;
    }
    int size(){
      return qsize;
    }
    int Front(){
      return front->elem;
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
        cout<<"Queue is empty"<<endl;
      }
      else{
        node* delnode=front;
        front=front->next;
        delete delnode;
        qsize--;
        if(empty()){
          front=rear=nullptr;
        }
      }
    }
    void print(){
      node* current=front;
      while(current!=nullptr){
        cout<<current->elem<<" ";
        current=current->next;
      }
    }
};

int main() {
  int N;
  cin>>N;

  queue q;

  for(int i=1;i<=N;i++){
    q.enqueue(i);
  }

  queue q2;

  for(int i=0;i<N-1;i++){
    q2.enqueue(q.Front());
    q.dequeue();
    q.enqueue(q.Front());
    q.dequeue();
  }
  q2.print();
  q.print();
  return 0;
}