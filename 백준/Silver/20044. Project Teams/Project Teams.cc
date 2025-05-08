#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;

    list<int> li;
    vector<int> v;


    for (int i=0;i<2*n;i++) {
        int x;
        cin>>x;
        li.push_back(x); //코딩역량을 다루는 리스트
    }

    //sort(list.begin(),list.end()); 코딩 역량 오름차순 정렬
    //리스트는 std::sort로 쓸 수 없다. 벡터처럼 임의 접근이 가능한 형태에서만 작동

    li.sort(); //리스트에 내장된 메소드로 사용 / 오름차순 정렬

    for (int i=0;i<n;i++) {
        int temp=li.front()+li.back();
        li.pop_front();
        li.pop_back();
        v.push_back(temp);
    }

    sort(v.begin(),v.end());//역량의 최소값 구하기 위해 정렬
    cout<<v[0]<<"\n";
}