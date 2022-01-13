#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;
int board[302][302];
int vis[302][302];
int zero[302][302];
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int m,n;

void BFS(int i, int j){
    queue<pair<int,int>> Q;
    vis[i][j]= 1;
    Q.push({i,j});
    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for(int dir =0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx<0||nx>=n||ny<0 || ny>=m) continue;
            if(vis[nx][ny] ==1 || board[nx][ny]==0) continue;
            Q.push({nx,ny});
            vis[nx][ny] = 1;
        }
    }
}

// 동시에 못함 왜냐면 중간에 board값이 변하면 값이 달라지기 때문
// 그래서 배열을 하나 더 만들어서 추가한뒤 따로 for문 돌려서 빼줌 
void updateBoard(){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(board[i][j] >0){
                for(int dir =0; dir<4; dir++){
                    int nx = i + dx[dir];
                    int ny = j + dy[dir];
                    if(nx<0||nx>=n||ny<0 || ny>=m) continue;
                    if(board[nx][ny] == 0) zero[i][j]++;
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            board[i][j] = board[i][j] - zero[i][j];
            if(board[i][j]<=0) board[i][j] = 0;
        }
    }
                    
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
          cin >> board[i][j];
    }
    int t= -1;
    bool flag = false;
    while(!flag){
        int cnt = 0;
        t++;
        for(int i=0; i<n; i++){
            fill(vis[i], vis[i]+m, 0);
            fill(zero[i], zero[i]+m, 0);
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                // vis =1이면 통과
                // board =0이면 통과
                if(vis[i][j] == 1) continue;
                if(board[i][j]==0) continue;
                BFS(i,j);
                cnt++;
            }
        }
        if(cnt >=2){
            cout << t;
            flag = true;
        }else if(cnt == 0){
            cout << 0;
            flag = true;
        }else updateBoard();
    }
}
// 다른풀이로 cnt1 cnt2변수 해서
// cnt1은 남아있는 빙하의 개수 
// cnt2는 (x,y)와 연결된 빙하의 개수
// cnt1이 0이면 다 녹았으므로 return 0
// cnt1과 cnt2개수가 같으면 빙하의 개수가 1개이므로 다시 while문
// 둘의 개수가 다르면 빙하의 개수가 최소 2개이므로 t 값 return