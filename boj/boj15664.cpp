#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[10];
vector<int> board;
int isused[10];

void nandm(int k){
    if(k==m){
      for(int i=0; i<m; i++){
        cout << a[i] << ' ';
      }
      cout << "\n";
      return;
    }
    int tmp =0;
    if(k>0){
      int found = a[k-1];
      for(int i = 0; i<n; i++){
        if(board[i] == found){
            tmp = i;
            break;
        }
      }
    }
    int temp = 0;
    for(int i=tmp; i<n; i++){
      if(board[i] == temp) continue;
      if(isused[i]>0) continue;
      isused[i] +=1;
      a[k] = board[i];
      temp = a[k];
      nandm(k+1);
      isused[i] -=1;
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>> n >> m;
    int b;
    for(int i=0; i<n; i++){
      cin >> b;
      board.push_back(b);
    }
    sort(board.begin(), board.end());
    nandm(0);
}
// func(k, st)를 넣은 뒤 for문에서 i = st이고 
// 다시 넣을때 func(k+1, st+1)