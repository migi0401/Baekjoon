#include<iostream>
#include<set>
using namespace std;

int main() {
    int N;
    cin>>N;

    set<string> v;

    string s;
    int count=0;

    for (int i = 0; i < N; i++) {
        cin>>s;

        if (s=="ENTER") {
            count+=v.size();
            v.clear();
        }
        else {
            v.insert(s);
        }
    }
    count+=v.size();
    cout<<count<<endl;
    return 0;
}