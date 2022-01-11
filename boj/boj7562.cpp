#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int board[304][304];
int vis[304][304];
int dx[8] = {-2,-1,1,2,-2,-1,1,2};
int dy[8] = {1,2,2,1,-1,-2,-2,-1};
int nx, ny;


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--){
        int I;
        cin >> I;
        for(int i=0; i<I; i++){
            fill(vis[i], vis[i]+I, -1);
            fill(board[i], board[i]+I, 0);
        }
        int a,b,c,d;
        cin >> a >>b;
        cin >> c >> d;
        queue<pair<int,int>> Q;
        Q.push({a,b});
        vis[a][b] = 0;
        while(!Q.empty()){
            auto cur = Q.front();
            Q.pop();
            for(int dir =0; dir<8; dir++){
                nx = cur.X + dx[dir];
                ny = cur.Y + dy[dir];
                if(nx<0||nx>=I||ny<0||ny>=I) continue;
                if(vis[nx][ny]>=0) continue;
                vis[nx][ny] = vis[cur.X][cur.Y]+1;
                Q.push({nx,ny});
            }
        }
        cout<< vis[c][d] << "\n";
    }
    return 0;
}
// 굳이 board가 필요없었음