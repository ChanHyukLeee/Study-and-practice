// Authored by : BaaaaaaaaaaarkingDog
// Co-authored by : -
// http://boj.kr/f36567ec0c9f44b4b460b5b29683c27b
// 백트래킹 개념 몰라서 참고
// 이어서 n과 m시리즈 풀 예정

#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[10];
bool isused[10];

void func(int k){ // 현재 k개까지 수를 택했음.
  if(k == m){ // m개를 모두 택했으면
    for(int i = 0; i < m; i++)
      cout << arr[i] << ' '; // arr에 기록해둔 수를 출력
    cout << '\n';
    return;
  }

  for(int i = 1; i <= n; i++){ // 1부터 n까지의 수에 대해
    if(!isused[i]){ 
      arr[k] = i; 
      isused[i] = 1; 
      func(k+1); 
      isused[i] = 0; 
    }
  }
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  func(0);
}