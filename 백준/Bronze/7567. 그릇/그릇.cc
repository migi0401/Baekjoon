#include<iostream>
using namespace std;

int main() {
    string plate;
    cin>>plate;

    int sum=10;
    for (int i=0;i<plate.size()-1;i++) {
        if (plate[i]==plate[i+1]) {
            sum+=5;
        }
        else {
            sum+=10;
        }
    }

    cout<<sum<<"\n";
}