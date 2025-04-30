#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int k;
    cin>>k; //반의 수 입력
    int count=0;

    while (k--) {
        count++; //몇 반인지 개수 세기

        int number; //시험 성적의 수
        cin>>number;

        // int score[number]; 가변 길이 배열
        vector<int> score;
        for (int i=0;i<number;i++) {
            int x;
            cin>>x;
            score.push_back(x);
        }

        int max=score[0];
        for (int i=0;i<number;i++) {
            if (max<score[i]) {
                max=score[i];
            }
        }

        int min=score[0];
        for (int i=0;i<number;i++) {
            if (min>score[i]) {
                min=score[i];
            }
        }
        //내림차순 정렬
        int minus=0;
        sort(score.begin(),score.end(),greater<int>());

        for (int i=0;i<number-1;i++) {
            int temp=score[i]-score[i+1];
            if (temp>minus) {
                minus=temp;
            }
        }
        cout<<"Class "<<count<<"\n";
        cout<<"Max "<<max<<", "<<"Min "<<min<<", "<<"Largest gap "
        <<minus<<"\n";
    }
}