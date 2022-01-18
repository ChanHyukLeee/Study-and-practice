#include <bits/stdc++.h>
using namespace std;

const int MX = 1024 * 3 +2;
char board[MX][2*MX];


void star(int a, int b,int n){
  if(n==3){
    board[a][b] = '*';
    board[a+1][b+1] = '*';
    board[a+1][b-1] = '*';
    for(int i=-2;i<3; i++) board[a+2][b+i] ='*';
  }else{
    int h = n/2;
    star(a,b,h);
    star(a+h,b-h,h);
    star(a+h,b+h,h);
  }
}


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  for(int i=0; i<n; i++) fill(board[i], board[i]+n, ' ');
  star(0,n-1,n);
  int h = 2*n-1;

  for(int i=0; i<n; i++){
      for(int j=0; j<h; j++){
          if(board[i][j] == '*') cout <<'*';
          else cout << ' ';
      }
      cout << "\n";
  }
//   for(int i=0; i<n; i++) cout << board[i] << "\n";
//  이거 사용하면 안됨 다 나오지 않는다.
}
// board 범위 틀렸었다.
// 가로랑 세로 길이가 다른 것을 간과했다.