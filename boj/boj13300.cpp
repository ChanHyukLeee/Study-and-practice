
// 남 여 따로 , 한방에는 같은 학년 끼리
// 수학여행 참가 학생 수 n 최대인원수 k
// n개 각 줄에는 성별 s(0:여자)와 학년 y 1-6 구분

#include <bits/stdc++.h>
using namespace std;
int year_S[13];
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, k, ret = 0;
  cin >> n>> k;
  int s[n] = {}, y[n] = {};
  for (int i =0; i<n; i++){
    cin >> s[i] >> y[i];
    if(s[i] == 0) year_S[y[i]]++; // 1-6
    else year_S[y[i]+6]++; // 7-12
  }
  for (int i=1; i<=12; i++){
    if(year_S[i] % k){
        ret += (year_S[i] / k)+1;}
    else {ret += (year_S[i] / k);}
  }
  cout << ret;
}
// 다른 풀이
// 이중 for 문 s[2][7]