// 서로 다른 양의 정수로 이루어진 수열
// 합이 x가 되는 순서쌍의 수 구하기
// 크기 주어지고 수열 주어지고 x 주어짐

# include <bits/stdc++.h>
using namespace std;
bool ret[1000001];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N,x,cnt=0;
  cin >> N;
  int arr[N] ={};
  for (int i = 0; i<N; i++) cin >> arr[i];
  cin >> x;
  for (int i = 0; i<N; i++){
    if((x - arr[i]) <= 1000000 && (x - arr[i]) >=0){
      if(ret[(x - arr[i])]==1) cnt++;
    }
    ret[arr[i]] = 1; // 위치 바뀌면 i=j인 경우가 생김
  }
  cout << cnt;
}

// 계속 out of bound 나왔는데 배열 음수고려 안한 거 였음..

// 만약 ret의 범위를 2000001으로 한다면 굳이 if문 안넣어도 됨
