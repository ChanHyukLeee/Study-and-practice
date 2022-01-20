#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> vec;
int isused[10];
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
      if(isused[i] <= m)
      a[k] = i+1;
      isused[i] +=1;
      nandm(k+1);
      isused[i]-=1;
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>> n >> m;
    nandm(0);
}