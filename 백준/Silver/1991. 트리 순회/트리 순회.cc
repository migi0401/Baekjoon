#include<iostream>
#include<list>
using namespace std;

class node {
public:
    node* parent;
    char value;
    int depth;
    node* left;
    node* right;
    node(node* parent, char value) {
        this->parent = parent;
        this->value = value;
        this->left = nullptr; //left랑 right를 nullptr로 설정하는 것이 매우 중요하다!!
        this->right = nullptr;
    }
};

class tree {
public:
    node* root;
    list<node*>nodelist;
    tree() {
        root=new node(nullptr, 'A');
        nodelist.push_back(root);
    }
    node* find(char x) {
        for (auto n:nodelist) {
            if (n->value == x) {
                return n;
            }
        }
        return nullptr;
    }
    void insert(char a,char b, char c) {
        node* parentnode=find(a);

        if (parentnode==nullptr) {
            return;
        }

        if (b!='.') {
            parentnode->left=new node(parentnode,b);
            nodelist.push_back(parentnode->left);
        }
        if (c!='.') {
            parentnode->right=new node(parentnode,c);
            nodelist.push_back(parentnode->right);
        }
    }
    void preorder(node* start) {
        if (start==nullptr) {
            return;
        }
        cout<<start->value;
        preorder(start->left);
        preorder(start->right);
    }
    void inorder(node* start) {
        if (start==nullptr) {
            return;
        }
        inorder(start->left);
        cout<<start->value;
        inorder(start->right);
    }
    void postorder(node* start) {
        if (start==nullptr) {
            return;
        }
        postorder(start->left);
        postorder(start->right);
        cout<<start->value;
    }
};

int main() {
    int N;
    cin>>N;
    tree t=tree();
    while(N--) {
        char a,b,c;
        cin>>a>>b>>c;
        t.insert(a,b,c);
    }
    t.preorder(t.root); cout<<"\n";
    t.inorder(t.root); cout<<"\n";
    t.postorder(t.root); cout<<"\n";
    return 0;
}