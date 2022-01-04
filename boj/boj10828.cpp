#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio();
    cin.tie();
    int n,a;
    stack<int> st;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if (s == "push"){
            cin >> a;
            st.push(a);
        }else if(s == "empty"){
            cout << st.empty() << '\n';
        }else if (s == "size"){
            cout << st.size() <<'\n';
        }else if(s == "pop"){
            if(st.empty()) cout << -1 << '\n';
            else{
                cout << st.top() << '\n';
                st.pop();
            }
        }else{ // top
            if(st.empty()) cout << -1 << '\n';
            else{
                cout << st.top() << '\n';
            }
        }
    }
}