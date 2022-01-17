#include <bits/stdc++.h>
using namespace std;
const int MAX = pow(3,7) +1;

int board[MAX][MAX];

int cnt[3];

bool check(int a, int b, int n){
    for(int i = a; i< a+n; i++){
        for(int j=b; j<b+n; j++){
            if(board[a][b] != board[i][j]) return false;
        }
    }
    return true;
}


void cut(int a, int b, int n){
    int k = n/3;
    if(n==1){
        if(board[a][b]== -1) cnt[0] +=1;
        else if(board[a][b]== 0) cnt[1] +=1;
        else cnt[2] +=1;
    }
    else{
        if(check(a,b,n)){
            cnt[board[a][b]+1]+=1;
        }else{
           for(int i=0; i<3; i++){
               for(int j=0; j<3; j++) cut(a+(i*k), b+(j*k), k);
           }
        }
    }
}


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++) cin >> board[i][j];
    }
    cut(1,1,n);
    cout << cnt[0] << "\n";
    cout << cnt[1] << "\n";
    cout << cnt[2] << "\n";
}
// 변수가 많이 필요할때는 배열을 사용
// boolean 판단필요하면 check함수 만들어서 사용하자