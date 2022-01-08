#include <bits/stdc++.h>
using namespace std;
int board[100001];
int dis[100001];
int n,k, nx;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    if(n==k){
        cout << 0;
        return 0;
    }
    queue<int> Q;
    Q.push(n);
    dis[n] = 1;

    while(!Q.empty()){
        int cur = Q.front();
        Q.pop();
        int dx[3] ={-1, 1, cur};
        for(int dir =0; dir<3; dir++){
            nx = cur + dx[dir];
            if(nx<0 || nx>100000) continue;
            if(dis[nx] > 0) continue;
            if(nx == k){
                cout << dis[cur];
                return 0;
            }
            dis[nx] = dis[cur]+1;
            Q.push(nx);
        }
    }
    
}