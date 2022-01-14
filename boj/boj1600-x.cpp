#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second

int k, w,h;
int board[202][202];
int dist[32][202][202]; // 200 * 200 * 30 *4 = 4,800,000B = 4mb (k,h,w)
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int hx[8] = { -2, -2, -1, -1, 1, 1, 2, 2 };
int hy[8] = { 1, -1, 2, -2, 2, -2, 1, -1 };
queue<tuple<int,int,int>> Q;
const int MAX=9999999;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> k;
  cin >> w >> h;
  for(int i = 0; i<h; i++){
    for(int j=0; j<w; j++){
      cin >> board[i][j];
    }
  }
  
  Q.push({0,0,0});
  dist[0][0][0] = 1;

  while(!Q.empty()){
    int x, y, z;
    tie(z,y,x) = Q.front();
    Q.pop();
    if(z < k){
        for(int dir =0; dir <8; dir++){
          int nx = hx[dir] + x;
          int ny = hy[dir] + y;
          if(nx<0 || nx>=h || ny<0 || ny>=w) continue;
          if(board[ny][nx] == 1)continue;
          if(dist[z+1][ny][nx]>0) continue;
          dist[z+1][ny][nx] = dist[z][y][x]+1;
          Q.push({z+1, ny, nx});
        }
    }
    for(int dir =0; dir <4; dir++){
        int nx = dx[dir] + x;
        int ny = dy[dir] + y;
        if(nx<0 || nx>=h || ny<0 || ny>=w) continue;
        if(board[ny][nx] == 1 || dist[z][ny][nx]>0) continue;
        dist[z][ny][nx] = dist[z][y][x] +1;
        Q.push({z,ny,nx});
    }

  }
  int ans = MAX;
  for(int i = 0; i <= k; i++){
    if(dist[i][h-1][w-1]) ans = min(ans, dist[i][h-1][w-1]);
  }
  if(ans == MAX) cout << -1;
  else cout << ans-1;
}

// 어게인 메모리 초과 아무래도 3차원으로 푸는 것은 무리였나 보다.
// 원래는 3차원 배열이용해서 증가할때마다 계속해서 Q를 집어넣은뒤 pop 시켰다.
// 그리고 계속 돌게 시켰다.
// 그리고 끝에 도달하면 flag를 true로 바꾸고 ans를 그때의 dist값으로 정했다
// 물론 안도달하는 경우는 flag값에따라 -1을 제출했다.
// 답은 나오는데 메모리초과가 발생함..

// https://github.com/encrypted-def/basic-algo-lecture/blob/master/0x09/solutions/1600.cpp
// 위 코드를 참고했는데 나랑 거의 동일하게 풀어서 당황스럽다
// 뭐가 틀린지 모르겠어서 분석을해보았다.


