#include <iostream>
#include <stack>
#include <string>

using namespace std;
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    cin >> str;
    int ret=1, ans =0;
    bool flag = true;
    stack<char> st;
    stack<int> number;
    for(int i=0; i< str.length(); i++){
        if(str[i] == '('){
            st.push(str[i]);
            ret*=2;
        }else if(str[i] == '['){
            st.push(str[i]);
            ret*=3;
        }else{
            if(st.empty()){
                flag = false;
                break;
            }else{ 
                if(str[i] == ')'){
                    if(st.top() == '('){
                        if(str[i-1] =='('){
                            ans += ret;
                        }
                        st.pop();
                        ret /=2;
                    }else{
                        flag = false;
                        break;
                    }
                }else{
                    if(st.top() == '['){
                        if(str[i-1] =='['){
                            ans += ret;
                        }
                        st.pop();
                        ret /=3;
                    }else{
                        flag = false;
                        break;                  
                    }
                }
            }
        }
    }
    if(st.empty() && flag){
        cout << ans;
    }else cout << 0;
}


//맨날 끝에서 뭐를 하려 했는데
// 앞에서 넣는 방법도 있는 것을 알게 되었다.