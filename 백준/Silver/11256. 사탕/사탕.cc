#include<iostream>
#include<algorithm>
using namespace std;



int main(){
    int T;
    cin>>T;
    while(T--){

        int J,N;
        cin>>J>>N;
        int a[N];
        for(int i=0;i<N;i++){
            int r,c; //세로 , 가로
            cin>>r>>c;
            int temp=r*c;
            a[i]=temp;
        }

        sort(a,a+N,greater<int>()); //이거 개중요

        int count=0;
        for(int i=0;i<N;i++){
            J-=a[i];
            count++;
            if(J<=0){
                break;
}
}
        cout<<count<<endl;
    }
}