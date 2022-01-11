#include <bits/stdc++.h>
using namespace std;
char board[1002][1002];
int vis[1002][1002][2];
int n,m;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

int BFS(){
  queue<tuple<int,int,int>> Q;
  Q.push({0,0,0});

  while(!Q.empty()){
    int x, y, broken;
    tie(x,y,broken) = Q.front();
    if(x==n-1 && y ==m-1) return vis[x][y][broken];
    Q.pop();
    for(int dir = 0; dir<4; dir++){
      int nx = dx[dir] + x;
      int ny = dy[dir]+ y;
      if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
      if(board[nx][ny]=='0' && vis[nx][ny][broken] == -1){
        vis[nx][ny][broken] = vis[x][y][broken] +1;
        Q.push({nx,ny, broken});
      }
      if(board[nx][ny] == '1' && vis[nx][ny][1] == -1 && !broken){
        vis[nx][ny][1] = vis[x][y][broken] +1;
        Q.push({nx,ny,1});
      }
    }
  }
  return -1;
}


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            cin >> board[i][j];
    }
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++)
          vis[i][j][0] = vis[i][j][1] = -1;
    }
    vis[0][0][0] = vis[0][0][1] = 1;
    cout << BFS();
}




// 나는 생각못했는데 벽을 부수는 횟수를 변수로 삼아
// vis를 3차원 배열로 활용했다.
// 