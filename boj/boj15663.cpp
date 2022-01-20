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
    int temp = 0;
    for(int i=0; i<n; i++){
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

// 중복되는 순열을 피하기 위해서 보통 밖에서 temp를 정한뒤 
// for문을 i=temp이상부터 돌려줬다. 그래서 중복된 순열을 방지했다.
// 여기서는 board를 받기 때문에 중복되는 수를 쓸 수 있지만,
// 중복되는 순열을 쓰면 안된다. 그래서 temp를 for문안에서 정한 뒤
// 같은 a[k]에서는 동일한 숫자를 못쓰게 했다.