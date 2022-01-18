#include <bits/stdc++.h>
using namespace std;

string board[66];

bool check(int a, int b, int n){
  for(int i=a; i<a+n; i++){
    for(int j=b; j<b+n; j++){
        if(board[a][b] != board[i][j]) return false;
    }
  }
  return true;
}

void split(int a, int b, int n){
    
    if(n==1){ 
        if(board[a][b] == '0') cout << 0;
        else cout << 1;
    }else{
      if(check(a,b,n)){ // 1이나 0으로 칠해진다면
        if(board[a][b] == '0') cout << 0;
        else cout << 1;
      }else{ // 나누어야함
        int h = n/2;
        cout << '(';
        for(int i = 0; i<2; i++){
          for(int j=0; j<2; j++){
            split(a+(i*h),b+(j*h), h);
          }
        }
        cout << ')';
      }
    }
    
}


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  for(int i=0; i<n; i++) cin >> board[i];

  split(0,0,n);
}
// 공백없는 문자니깐 string board로 받는다.
// if문에서 stirng이니깐 0이 아닌 '0'으로 표시해야한다.
// 아니면 받을때 arr[i][j] = str[j] - '0'