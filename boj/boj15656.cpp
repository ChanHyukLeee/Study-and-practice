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

    for(int i=0; i<n; i++){
      a[k] = board[i];
      nandm(k+1);
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