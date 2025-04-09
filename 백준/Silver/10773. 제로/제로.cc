#include<iostream>
#include<stack>
using namespace std;



int main() {
    int K;
    cin>>K;
    stack<int> st;
    while (K--) {
        int n;
        cin>>n;
        if (n==0) {
            st.pop();
        }
        else {
            st.push(n);
        }
    }
    int sum=0;
    while (!st.empty()) {
        sum+=st.top();
        st.pop();

    }
    cout<<sum;
    return 0;
}