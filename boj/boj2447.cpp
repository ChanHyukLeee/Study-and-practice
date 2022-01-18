#include <bits/stdc++.h>
using namespace std;

const int MX = pow(3,8);
char board[MX][MX];


void star(int a, int b, int n){
  if(n==1){
    board[a][b] = '*';
    return;
  }else{
    int h = n/3;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i==1 && j == 1) continue;
            star(a+(i*h),b+(j*h),h);
        }
    }
  }
}


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  for(int i=0; i<n; i++) fill(board[i], board[i]+n, ' '); // 이거 채워넣다고 달라지네..
  star(0,0,n);
  for(int i=0; i<n; i++) cout << board[i] << "\n";
}
