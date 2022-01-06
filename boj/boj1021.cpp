#include <bits/stdc++.h>
using namespace std;
deque<int> dq;
int temp;

void Left(){
    temp = dq.front();
    dq.pop_front();
    dq.push_back(temp);
}

void Right(){
    temp = dq.back();
    dq.pop_back();
    dq.push_front(temp);
}


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M; // n: 큐의 크기, m : 뽑아내려고하는 수의 개수
    cin >> N >> M;
    for(int i=1; i<=N; i++) dq.push_back(i); // 1 2 3 .. N, 위치는 자연수와 동일
    int cnt = 0;
    while(M--){
        int a;
        cin >> a;
        int idx = find(dq.begin(), dq.end(), a) - dq.begin();
        while(a != dq.front()){
            if(idx <= dq.size() - idx) Left();
            else Right();
            cnt++;
        }
        dq.pop_front();
    }
    cout << cnt;
}

// http://boj.kr/9571e70535a34702812d2a03510ac182
//못 풀겠어서 참고 -> idx 활용
// dq.size()는 unsigned int or unsigned long long
// 만약 idx가 dq.size()보다 크면 overflow 발생가능 -> int dq.size()로 형변환