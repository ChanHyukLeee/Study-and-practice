#include <bits/stdc++.h>
using namespace std;
int n, m, size_of_vec, ans = 0;
int board[10][10];
int vis[10][10];
vector<pair<int,int>> vec;
// int dx[4] = {1,0,-1,0};
// int dy[4] = {0,1,0,-1};
int dx[4] = {0,1,0,-1}; // 상 우 하 좌
int dy[4] = {1,0,-1,0};

int coloring(int x, int y, int dir){
    dir %=4; // why?
    while(1){
      x += dx[dir];
      y += dy[dir];
      if(x<0 || y<0 || x>=n || y >=m) return 1;
      if(board[x][y] == 6) return 1;
      if(board[x][y]!=0) continue;
      vis[x][y]++;
    }
  }

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  for(int i=0;i<n;i++){
      for(int j=0; j<m; j++){
      cin >> board[i][j];
      if(board[i][j]>0 && board[i][j]<6) vec.push_back({i,j});
      if(board[i][j]==0) ans++;
      }
  }
  size_of_vec = vec.size();
  for(int tmp =0; tmp< (1<<(2*size_of_vec)); tmp++){
      int brute = tmp;
      for(int i=0;i<n;i++){
          for(int j=0; j<m; j++){
          vis[i][j] = board[i][j];
          }
      }
      for(int i = 0; i< vec.size(); i++){
          int dir = brute %4;
          brute /= 4;
          int x,y;
          tie(x,y) = vec[i];
          if(board[x][y] == 1) coloring(x,y,dir);
          else if(board[x][y] == 2){
          coloring(x,y,dir);
          coloring(x,y,dir+2);
          }
          else if(board[x][y]==3){
          coloring(x,y,dir);
          coloring(x,y,dir+1);
          }
          else if(board[x][y] == 4){
          coloring(x,y, dir);
          coloring(x,y, dir+1);
          coloring(x,y, dir+2);
          }
          else{
          coloring(x,y, dir);
          coloring(x,y, dir+1);
          coloring(x,y, dir+2);
          coloring(x,y, dir+3);
          }
      }
      int cur = 0;
      for(int i=0;i<n;i++){
          for(int j=0; j<m; j++){
              if(vis[i][j]==0) cur++;
          }
      }
      ans = min(ans, cur);
  }
  
  cout << ans;
}
// 참고
// 독립적인 백트래킹 문제가 나왔을때
// 진법으로 풀기
// 가능한 종류의 방향이 최대 4방향이므로 4진법 사용
// 총 가능한 경우의 수는 4 ^ k개 -> 1<<(2*size_of_vec)