// 1번부터 n명이 원을 둘러싸이면 k번째 사람 제거 

#include <bits/stdc++.h>
using namespace std;

int erase()

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >>n>>k;
    int pre[n+1] = {}, nxt[n+1] = {}, data[n+1] = {}, ret[n] = {};
    for (int i=1; i<=n; i++){
        data[i] = i;
        pre[i] = i-1;
        nxt[i] = i+1;
    }
    pre[1] = n;
    nxt[n] = 1;
    
    while(n--){
        
    }

}