// 애너그램이 되기 위한 최소 제거 수

#include <bits/stdc++.h>
using namespace std;
int abc[27], abc1[27];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  string str1, str2;
  int cnt = 0;
  cin >> str1;
  cin >> str2;
  for (auto c : str1) abc[c - 'a']++;
  for (auto c : str2) abc1[c - 'a']++;
  for (int i =0; i<26; i++){
    if(abc[i] != abc1[i]) cnt += abs(abc[i] - abc1[i]);
  }
  cout << cnt;
}
// 생각해보니 굳이 if 가 필요없다..
