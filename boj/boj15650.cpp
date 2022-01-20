#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> vec;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>> n >> m;
    for(int i =0; i <n; i++){
        if(i < m) vec.push_back(0);
        else vec.push_back(1);
    } 
    // 0, 1로 구분
    do{
      for(int i =0; i <n; i++){
        if(vec[i] ==0) cout << i+1 << ' ';
      }
      cout << '\n';
    }while(next_permutation(vec.begin(), vec.end()));
}
