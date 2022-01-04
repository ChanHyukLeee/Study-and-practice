#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio();
    cin.tie();
    int n, a= 1;
    cin >> n;
    string ret;
    stack<int> s;
    while(n--){
        int k;
        cin >> k;
        while(a<=k){
            s.push(a++);
            ret += "+\n";
        }
        if(s.top() != k){
            cout << "NO";
            return 0;
        }
        s.pop();
        ret += "-\n";
    } 
    cout << ret;
}
// return 0로 no 인 상황에서 바로 탈출
// cout 쓰지 않고 ret에 string을 더해서 나중에 출력