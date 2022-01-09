#include <bits/stdc++.h>
using namespace std;
int T, m, n, k;
int board[52][52] = {};
int vis[52][52] = {};
int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;

    while(T--){
        int cnt = 0;
        cin >> m >> n >> k;
        queue<pair<int,int>> Q;
        while(k--){
            int a,b;
            cin >> a >> b;
            board[b][a] = 1;
        }
        for(int x =0; x <n; x++){
            for(int y = 0; y< m; y++){
                if(board[x][y] != 1 || vis[x][y] == 1) continue;
                else{
                    Q.push({x,y});
                    vis[x][y] = 1;
                    cnt++;
                    while(!Q.empty()){
                        pair<int, int> cur = Q.front();
                        Q.pop();
                        for(int i = 0; i<4; i++){
                            int nx, ny;
                            nx = cur.first + dx[i];
                            ny = cur.second + dy[i];
                            if(nx<0||nx>=n||ny<0||ny>=m) continue;
                            if(board[nx][ny]==0|| vis[nx][ny] == 1) continue;
                            vis[nx][ny] = 1;
                            Q.push({nx,ny});
                        }
                    }
                }
            }
        }
        cout << cnt << "\n";
        for(int i = 0; i<n; i++){
            fill(board[i], board[i]+m, 0);
            fill(vis[i], vis[i]+m, 0);
        }
    }
}

// 모든 걸 BFS하려면 결국 모든 board돌면서 일일이 확인해야함