#include <bits/stdc++.h>
using namespace std;
queue<int> q;

void reverseQueue(){
    stack<int> st;
    st.push(q.front());
    q.pop();
    q.push(st.top());
    st.pop();
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    for (int i =1; i<=N; i++) q.push(i); // 1 2 ... n
    while(N>1){
        q.pop();
        reverseQueue();
        N--;
    }
    cout << q.front();
}
// reversequeue 함수에서 굳이 stack 쓰지 않고 
// 임시 변수 tmp 활용해서 하면 더 좋았을듯
// 그리고 N-- 대신 q.size()!=1  방법도 있음