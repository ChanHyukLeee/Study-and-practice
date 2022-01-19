#include <bits/stdc++.h>
using namespace std;
int n,cnt = 0;
bool isused_row[40];
bool isused_col[40];
bool isused_right[40]; // 우상향 대각선
bool isused_left[40]; // 좌하향 대각선

void queen(int k){
  if(k ==n){
    cnt++;
    return;
  }
  for(int i = 0; i<n; i++){
    for(int j=0; j<n; j++){
      if(!isused_row[i] && !isused_col[j] && !isused_right[i+j] && !isused_left[i-j+(n-1)]){
        isused_row[i] =1;
        isused_col[j] =1;
        isused_right[i+j] = 1;
        isused_left[i-j+(n-1)] = 1;
        queen(k+1);
        isused_row[i] =0;
        isused_col[j] = 0;
        isused_right[i+j] = 0;
        isused_left[i-j+(n-1)] = 0;
      }
    }
  }
}

void revise_queen(int k){
  if(k ==n){
    cnt++;
    return;
  }
  for(int i=0; i<n; i++){
    if(!isused_row[i] && !isused_right[i+k] && !isused_left[i-k+(n-1)]){
        isused_row[i] =1;
        isused_right[i+k] = 1;
        isused_left[i-k+(n-1)] = 1;
        revise_queen(k+1);
        isused_row[i] =0;
        isused_right[i+k] = 0;
        isused_left[i-k+(n-1)] = 0;
    }
  } 
}


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  revise_queen(0);
  cout << cnt;
}

// 대각선 : x+y가 동일 혹은 x-y가 동일
// 만약 계속 for문을 돌려서 대각선, 행, 열에 있는지 찾는다면 총 n^2의
// 복잡도가 낭비될 것이다.
// 그래서 행과 열, 대각선 2개의 isused 배열을 활용해 문제를 해결한다.
//이중 for문 활용 시 시간 초과 발생 
// 그래서 열마다 이동하는 걸로 바꿈