#include <bits/stdc++.h>
using namespace std;

int ans = 0, S_cnt =0, total_cnt=0;
string board[6];
bool mask[25];
int dx[4] = {1, -1 ,0, 0};
int dy[4] = {0, 0, 1, -1};

void BFS(){
  do{
    S_cnt = 0;
    total_cnt=0;
    bool vis[6][6] ={};
    bool vis_1[6][6] ={};
    queue<pair<int,int>> Q;
    for(int i=0; i<25; i++){
      if(!mask[i]){
        int x = i/5, y = i % 5;
        vis_1[x][y] =true;
        if(Q.empty()){
          Q.push({x,y});
          vis[x][y] = true;
        }
      }
    }

    while(!Q.empty()){
      auto cur = Q.front();
      Q.pop();
      total_cnt++;
      if(board[cur.first][cur.second] == 'S') S_cnt++;
      for(int i = 0; i<4; i++){
        int nx = dx[i] + cur.first;
        int ny = dy[i] + cur.second;
        if(nx<0 || nx >=5 || ny < 0 || ny >=5) continue;
        if(vis[nx][ny] == true || vis_1[nx][ny] == false) continue;
        vis[nx][ny] = true;
        Q.push({nx,ny});
      }
    }
    if(S_cnt>=4 && total_cnt >= 7) ans++;
    
  }while(next_permutation(mask, mask+25));
  cout << ans;
}


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  for(int i=0; i<5; i++){
    cin >> board[i];
  }
  fill(mask+7, mask+25, true);
  BFS();
}