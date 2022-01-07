#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, ans = 0;
    cin >> N;
    
    while(N--){
        stack<char> stac;
        string str;
        cin >> str;

        for(auto c: str){
            if(c == 'A'){
                if(!stac.empty()){
                    if(stac.top() == 'A') stac.pop();
                    else stac.push(c);
                }else stac.push(c);
            }else{
                if(!stac.empty()){
                    if(stac.top() == 'B') stac.pop();
                    else stac.push(c);
                }else stac.push(c);
            }
        }
        if(stac.empty()) ans++;
    }
    cout << ans;
}
// 굳이 a랑 b로 나눌 필요가 없었다. 그리고 !empty s.top == c 일떼민 pop하고 나머지는 push로 했으면 됐다.