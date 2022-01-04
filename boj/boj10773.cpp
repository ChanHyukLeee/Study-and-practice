#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio();
    cin.tie();
    int k;
    stack<int> s;
    cin >> k;
    while(k--){
        int a;
        cin >> a;
        if(a == 0) s.pop();
        else s.push(a);
    }
    int ret = 0;
    while(!s.empty()){
        ret += s.top();
        s.pop();
    }
    cout << ret;
}