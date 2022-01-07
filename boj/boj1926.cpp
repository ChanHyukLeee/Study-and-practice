#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second // pair에서 first, second를 줄여서 쓰기 위해서 사용
int board[502][502];
bool vis[502][502];
int n, m;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    int cnt=0, max_size = 0;
    for(int i =0; i<n; i++){
      for(int j= 0; j<m; j++){
        cin >> board[i][j];
      }
    }
    for(int i =0; i<n; i++){
      for(int j= 0; j<m; j++){
        queue<pair<int,int>> Q;
        int size = 0;
        if(vis[i][j] == 0 && board[i][j]==1){
          cnt++;
          vis[i][j] =1;
          Q.push({i,j});
          while(!Q.empty()){
            pair<int,int> cur =Q.front(); 
            Q.pop();
            size++;
            for(int dir =0; dir<4; dir++){
              int nx = cur.X + dx[dir];
              int ny = cur.Y + dy[dir];
              if(nx<0||nx>=n || ny<0 || ny>=m) continue;
              if(vis[nx][ny] || board[nx][ny]==0) continue;
              vis[nx][ny] = 1;
              Q.push({nx, ny});
            }
          }
        }
        max_size = max(max_size, size);
      }
    }
    cout << cnt << "\n";
    cout << max_size << "\n";
}
// 알려준 BFS 내용 조금만 응용한듯