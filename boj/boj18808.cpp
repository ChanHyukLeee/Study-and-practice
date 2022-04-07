#include <bits/stdc++.h>
using namespace std;
int final_arr[42][42];
int temp_arr[12][12];

int n,m,k;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m >>k;
  while(k--){
    int r, c;
    cin >> r >> c;
    for(int i =0; i<r; i++){
      for(int j = 0; j<c; j++){
        cin >> temp_arr[i][j];
      }
    }

  }
}