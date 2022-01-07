#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int ans = 0;
    stack<char> st;
    stack<char> st_all;
    string s;
    cin >> s;
    for(auto c :s){
        if(c == '('){ // start
            st.push(c);
            st_all.push(c);
        }else{
            st.pop();
            if(st_all.top()=='('){ // laser
                ans += st.size();
                st_all.push(c);
            }else{ // End
                ans++;
                st_all.push(c);
            }
        }
    }
    cout << ans << "\n";
}
// https://hsp1116.tistory.com/29 코드를 참고함
// 나는 스택 2개로 풀었는데
for(int i=0; i<str.length(); i++){
    // 활용해서
    str[i-1] // 로 사용
}