#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[10];

void nandm(int k){
    if(k==m){
      for(int i=0; i<m; i++){
        cout << a[i] << ' ';
      }
      cout << "\n";
      return;
    }
    for(int i=0; i<n; i++){
      if(i < a[k-1]-1) continue;
      a[k] = i+1;
      nandm(k+1);
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>> n >> m;
    nandm(0);
}

// k가 0일 때를 고려해야하는데 다행히 잘 나왔다. 
// 원래 k가 0일때 -> if(k!=0) int temp = a[k-1]