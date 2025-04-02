#include<iostream>
using namespace std;

class Node{
public:
    char elem;
    Node* next=nullptr;
    Node* prev=nullptr;
};

class Iterator{
public:
  Node* node;
  Iterator(){
    node=nullptr;
  }
  void set(Node* node){
    this->node=node;
  }
  Iterator *operator++(){
    node=node->next;
    return this;
  }
  Iterator *operator--(){
    node=node->prev;
    return this;
  }
};

class list{
  public:
    Node* header;
    Node* trailer;
    int listsize;
    list(){
      header=new Node();
      trailer=new Node();
      listsize=0;
      header->next=trailer;
      trailer->prev=header;
    }
    Node* begin(){
      return header->next;
    }
    Node* end(){
      return trailer;
    }
    bool empty(){
      return listsize==0;
    }
    void L(Iterator& p){
      if(p.node==header->next){
        return;
      }
      else{
        --p;
      }
    }
    void D(Iterator& p){
      if(p.node==trailer){
        return;
      }
      else{
        ++p;
      }
    }
    void B(Iterator& p){
      if(p.node == header->next || listsize==0){
        return;
      }
      else{
        Node* delnode=p.node->prev; //커서의 왼쪽을 명시
        delnode->prev->next=delnode->next; //삭제될 노드의 prev와 연결
        delnode->next->prev=delnode->prev;
        delete delnode; //삭제
        listsize--;
      }
    }
    void P(Iterator& p, char x){
      Node* v=new Node();
      v->elem=x;

      p.node->prev->next=v;
      v->prev=p.node->prev;
      v->next=p.node;
      p.node->prev=v;
      listsize++;
    }
    void print(){
      if(listsize==0){
        cout<<"empty"<<endl;
      }
      else{
        Node* current=header->next;
        while(current!=trailer){
          cout<<current->elem;
          current=current->next;
        }
        cout<<"\n";
      }
    }
};

int main(){
  list sq= list();
  Iterator q=Iterator();
  q.set(sq.begin());
  string st;
  cin>>st;

  for(size_t i=0;i<st.size();i++){
    sq.P(q, st[i]);
  }

  int x;
  cin>>x;
  string command;
  while(x--){
    cin>>command;
    if(command=="L"){
      sq.L(q);
    }
    else if(command=="D"){
      sq.D(q);
    }
    else if(command=="B"){
      sq.B(q);
    }
    else if(command=="P"){
      char y;
      cin>>y;
      sq.P(q, y);
    }
  }
  sq.print();
}