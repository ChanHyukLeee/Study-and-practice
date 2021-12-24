// N개 정수 주어질때 v개수 구하기

#include <bits/stdc++.h>
using namespace std;
int ret[201] = {};

int main(void){
    int n, v, a;
    cin >> n;
    for (int i =0; i<n; i++) {
      cin >> a;
      if(a>0) ret[a+100]++;
      else ret[(-a)]++;
    }
    cin >> v;
    if(v>0)cout << ret[v+100];
    else cout<< ret[(-v)];
}