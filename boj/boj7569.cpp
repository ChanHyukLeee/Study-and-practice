#include <bits/stdc++.h>

int board[102][102][102];
int vis[102][102][102]; // distance
int n,m,h, nx,ny, nz;
int dx[6] = {-1, 1, 0, 0,0,0};
int dy[6] = {0, 0, -1, 1,0, 0};
int dz[6] = {0,0,0,0,1,-1};

using namespace std;
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> m >> n >> h;
  queue<tuple<int,int,int>> Q;

  for(int i = 0; i<h; i++){
    for(int j = 0; j<n; j++){
      for(int k = 0; k<m; k++){
        cin >> board[i][j][k];
        if(board[i][j][k] == 1){
          Q.push({i,j,k});
        }else if(board[i][j][k] == 0){
          vis[i][j][k] = -1;
        }
      }
    }
  }

  while(!Q.empty()){
    tuple<int,int,int>cur =  Q.front();
    Q.pop();
    int curx, cury, curz;
    tie(curz, cury, curx) = cur;
    for(int dir = 0; dir<6; dir++){
      nx = curx + dx[dir];
      ny = cury + dy[dir];
      nz = curz + dz[dir];
      if (nx < 0 || nx >= m || ny < 0 || ny >= n || nz < 0 || nz >= h) continue;
      if(vis[nz][ny][nx] >=0) continue;
      vis[nz][ny][nx] = vis[curz][cury][curx] +1;
      Q.push({nz,ny,nx});
    }
  }
  int ans = 0;
  for(int i = 0; i<h; i++){
    for(int j = 0; j<n; j++){
      for(int k = 0; k<m; k++){
        if(vis[i][j][k] == -1){
            cout << -1;
            return 0;
        }
        ans = max(ans, vis[i][j][k]);
      }
    }
  }
  cout << ans;
}

// tie(curx, cury, curz) = cur;
// get<0>(cur)
// dz를 1 1로 표시해서 틀렸었음..
