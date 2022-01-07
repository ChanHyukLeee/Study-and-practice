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
      bool flag = true;
      cin >> str;
      for(auto c :str){
          if(c == '(') stac.push(c);
          else{
              if(stac.empty()){
                flag = false;
                break;
              }else{
                stac.pop();
              }
          }
      }
      if(flag && stac.empty()) cout << "YES" << "\n";
      else cout << "NO" << "\n";
    }
}