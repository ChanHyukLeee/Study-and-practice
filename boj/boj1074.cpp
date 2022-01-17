#include <bits/stdc++.h>
using namespace std;

int cnt;

// a,b 시작점
int zflip(int row, int column, int n){
    int x = pow(2, n-1);
    if(n==1){
        if(row == 0 && column == 0) return 0;
        else if(row == 0 && column == 1) return 1;
        else if(row == 1 && column == 0) return 2;
        else return 3;
    }
    else{
        if(row > x-1){
            if(column > x-1) cnt = 3;
            else cnt = 2;
        }else{
            if(column > x-1) cnt = 1;
            else cnt = 0;
        }
    }
    int row_revise = row % x;
    int column_revise = column % x;
    return cnt * x * x + zflip(row_revise, column_revise, n-1);
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,r,c;
    cin >> n >> r >> c;
    int answer = zflip(r,c,n);
    cout << answer;
}

// x를 pow함수가 아닌 1<<n-1로 표현가능 
// n==0일때 return 0로 바꿀 수 있음
