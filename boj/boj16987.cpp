#include <bits/stdc++.h>
using namespace std;

int n, ans=0, cnt = 0;
int s[10], w[10];

void answer(int k){
  if(k==n){
    ans = max(cnt, ans);
    return;
  }
  if(s[k]<=0 || cnt == n-1){
    answer(k+1);
    return;
  }
  for(int t= 0; t<n; t++){
    if(t==k || s[t]<=0) continue;
    s[k] -= w[t];
    s[t] -= w[k];
    if(s[k]<=0) cnt++;
    if(s[t]<=0) cnt++;
    answer(k+1);
    if(s[k]<=0) cnt--;
    if(s[t]<=0) cnt--;
    s[k] += w[t];
    s[t] += w[k];   
  }
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for(int i=0; i<n;i++) cin >> s[i] >> w[i];
  answer(0);
  cout << ans;
}