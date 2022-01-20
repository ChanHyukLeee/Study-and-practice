#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[10];
bool isused[10003];
vector<int> board;
vector<int> nx;

void nandm(int k){
    if(k==m){
      for(int i=0; i<m; i++){
        cout << a[i] << ' ';
      }
      cout << "\n";
      return;
    }
    int temp = 0;
    if(k!=0){
      int found = a[k-1];
      for(int i=0; i<n; i++){
        if(board[i]==found) temp = i;
      }    
    }

    for(int i=temp; i<n; i++){
      a[k] = board[i];
      nandm(k+1);
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>> n >> m;
    int b;
    int idx = 0;
    for(int i=0; i<n; i++){
      cin >> b;
      if(!isused[b]){
        isused[b] = 1;
        board.push_back(b);
        idx++;
      }
    }
    n = board.size();
    sort(board.begin(), board.end());
    nandm(0);
}
