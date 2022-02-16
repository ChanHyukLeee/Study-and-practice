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
  int flag = 0;
  for(int i =0; i<siz; i++){
    if(A[idx1] >= B[idx2]){
      cout << B[idx2] << " ";
      idx2++;
      if(idx2 == m){
        flag = 1;
        break;
      }
    }else{
      cout << A[idx1] << " ";
      idx1++;
      if(idx1 == n){
        flag = 1;
        break;        
      }
    }
  }
  if(flag = 1){
    for(int i = idx2; i<m; i++) cout << B[i] << " ";
  }
  if(flag = 2){
    for(int i = idx1; i<n; i++) cout << A[i] << " ";
  }
}
// 이렇게 하지말고 if를 4개써서 idx1==n, idx2==m, 크기차이 비교