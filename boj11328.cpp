// strfry함수 : 입력된 문자열 무작위로 재배열
// 테스트 케이스 N개 존재
// 2번째 문자열이 strfry로 표현 가능한지 판별

#include <bits/stdc++.h>
using namespace std;
int abc[27], abc1[27];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  bool ret[n] = {};
  string str1, str2;
  for (int i=0; i<n; i++){
    cin >> str1 >> str2;
    for (auto c: str1) abc[c - 'a']++;
    for (auto c: str2) abc1[c - 'a']++;
    for (int j = 0; j<27; j++){
    if(abc[j] != abc1[j]) ret[i] =1;}
  }
  for (int i=0; i<n; i++){
      if(ret[i] == 0) cout << "Possible" << '\n';
      else cout << "Impossible"<< '\n';
  }
}