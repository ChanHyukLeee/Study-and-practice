// 1번부터 n명이 원을 둘러싸이면 k번째 사람 제거 

#include <iostream>
#include <list>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, len=0, a=1;
    int pre[n+1], nxt[n+1], data[n+1];
    cout << "dlfir";
    cin >>n>>k;
    if(cin.fail() ==1 )cout << "error";
    for (int i=1; i<=n; i++){
        pre[i] = i-1; // 0 1 2 .. n-1
        nxt[i] = i+1; // 2 3 ... n+1
        len++;
    }
    pre[1] = n; // n 1 2 .. n-1
    nxt[n] = 1; // 2 3 ...n 1
    list<int> ret;

    for(int cur = 1; len !=0; cur=nxt[cur]){
        if(a == k){
            nxt[pre[cur]] = nxt[cur];
            pre[nxt[cur]] = pre[cur];
            ret.push_back(cur);
            --len;
        }else ++a;
    }
    
    cout << '<';
    for (list<int>::iterator iter = ret.begin(); iter != prev(ret.end(), 1) ; iter++){
        cout << *iter <<", ";
    }
    cout << ret.back();
    cout << '>';

}