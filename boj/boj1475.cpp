// 방번호 달아주기 
// 세트 하나당 0-9 하나씩, 6하고 9는 바꿔서 사용 가능

# include <bits/stdc++.h>
using namespace std;
int arr[10];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N,k,ret;
  cin >> N;

  while(N){
    arr[N%10]++;
    N/=10;
  }
  k = (arr[6] + arr[9]);
  if(k % 2 ==0){
    ret = k/2;
  }else{
    ret = k/2 +1;
  }

  for (int i=0; i<10; i++){
    if(i!=6){
      if(i!=9) ret = max(ret, arr[i]);
    }
  }
  cout << ret;
}
// 다른 풀이
// 나처럼 or이 잘 안되서 if 두번 쓰는 게 아니라
// arr[6]에 ret값 저장하고 arr[9]는 사용 x
// max함수 대신 부등호로 비교

if(i==6||i==9)continue
// 이런 방식 있음, !=사용하면 꼬이나 봄, 아 그때는 && 써야하네..