#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string ans;
    while(true){
        string str;
        getline(cin,str);
        if(str == "."){
            break;
        } 
        stack<char> st;
        bool flag = true;
        for (auto c : str){
            if(c == '(' || c=='[') st.push(c);
            else if (c == ']'){
                if(st.empty()){
                    flag = false;
                    break;
                }else{
                    if(st.top() == '('){
                        flag = false;
                        break;
                    }else st.pop();
                }
            }else if(c == ')'){
                if(st.empty()){
                    flag = false;
                    break;
                }else{
                    if(st.top() == '['){
                        flag = false;
                        break;
                    }else st.pop();
                }
            }else continue;
        }
        if(flag && st.empty()) ans += "yes\n";
        else ans+= "no\n";
        
    }
    cout << ans;
    
}