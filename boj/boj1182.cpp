#include <bits/stdc++.h>
using namespace std;

int arr[25];
bool isused[25];
int n, s, adding = 0, cnt =0;

void partial(int nx, int k){
  if(adding == s && k!=0){ // 공집합 제외
    cnt++;
// return 하면 안된다. 왜냐면 더 합해질수도 있는데 멈춰버리기 때문
  }
  for(int i=0; i<n; i++){
    if(nx>i) continue; // 중복제거
    if(!isused[i]){
      adding += arr[i];
      isused[i] = 1;
      partial(i,k+1);
      isused[i]=0;
      adding -= arr[i];
    }
  }
}


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> s;
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }
  partial(0,0);
  cout << cnt;

}
// 2번째 풀이
// https://github.com/encrypted-def/basic-algo-lecture/blob/master/0x0C/solutions/1182.cpp
void func(int cur, int tot){
  if(cur == n){
    if(tot == s) cnt++;
    return;
  }
  func(cur+1, tot); // 하나씩 늘어나는데 포함시키지 않은거
  func(cur+1, tot+arr[cur]); // 하나씩 늘어나는데 포함시키는거 \
  // 총 2^n개 나옴(부분집합 개수)
}
// 이후에 main 함수에서 공집합 제거 total = 0일때 cnt -1;