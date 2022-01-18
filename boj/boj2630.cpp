#include <bits/stdc++.h>
using namespace std;

int board[130][130];
int cnt[2];

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
        if(board[a][b] == 0) cnt[0]+=1;
        else cnt[1]+=1;
    }else{
      if(check(a,b,n)){ // 1이나 0으로 칠해진다면
        if(board[a][b] == 0) cnt[0]+=1;
        else cnt[1]+=1;
      }else{ // 나누어야함
        int h = n/2;
    
        for(int i = 0; i<2; i++){
          for(int j=0; j<2; j++){  
            split(a+(i*h),b+(j*h), h);
          }
        }
      }
    }
}


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++) cin >> board[i][j];
  }

  split(1,1,n);
  cout << cnt[0] << "\n";
  cout << cnt[1];

}
//    cout << a << ' '<<b << ' '<< h<<"\n";