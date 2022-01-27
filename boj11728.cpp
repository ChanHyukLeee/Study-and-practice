#include <iostream>
#include <algorithm>

using namespace std;
int n, m;
const int MX = 1000002;
int A[MX], B[MX], C[2*MX];


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n >> m;
  int k;
  for(int i =0; i<n; i++){
    cin >> A[i];
  } 
  for(int i =0; i<m; i++){
    cin >> B[i];
  }
  int siz = n+m;
  int idx1 =0;
  int idx2=0;
  for(int i =0; i<siz; i++){
    if(A[idx1] >= B[idx2]){
      cout << B[idx2] << " ";
      idx2++;
    }else{
      cout << A[idx1] << " ";
      idx1++;
    }
  }
}

// idx가 정해진 index를 넘는 경우 0이 나와버림 0을 안나오게 해ㅑ야하ㅣㅁ