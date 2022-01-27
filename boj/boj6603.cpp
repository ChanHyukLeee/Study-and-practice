#include <bits/stdc++.h>
using namespace std;

int n;
int board[15];
int ans[10];

void func(int start, int k){
  if(k==6){
    for(int i =0; i<6; i++){
      cout << ans[i] << " ";
    }
    cout << "\n";
    return;
  }
  for(int i=start; i<n; i++){
      ans[k] = board[i];
      func(i+1, k+1);
  }
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  while(1){
    cin >> n;
    if(n==0){
      break;
    }
    for(int i=0; i<n; i++){
        cin >> board[i];
    }
    func(0,0);
    cout << "\n";
  }
}
// next_permutation 쓰는 방법
