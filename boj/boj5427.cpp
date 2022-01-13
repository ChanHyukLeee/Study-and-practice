#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

string board[1002];
int vis_fire[1002][1002];
int vis_move[1002][1002];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int n,w,h;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    while(n--){
        cin >> w >> h;
        for(int i =0; i<h; i++){
            fill(vis_fire[i],vis_fire[i]+w, -1);
            fill(vis_move[i],vis_move[i]+w, -1);
        }
        queue<pair<int,int>> Q1;
        queue<pair<int,int>> Q2;
        for(int i=0; i<h; i++)
            cin >> board[i];

        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                if(board[i][j] == '*'){
                    Q1.push({i,j});
                    vis_fire[i][j] = 0;
                }
                if(board[i][j] == '@'){
                    Q2.push({i,j});
                    vis_move[i][j] = 0;
                }
            }
        }
        while(!Q1.empty()){
            auto cur = Q1.front(); Q1.pop();
            for(int dir=0; dir<4; dir++){
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if(nx<0 || nx>=h || ny<0 || ny>=w) continue;
                if(board[nx][ny]=='#'||vis_fire[nx][ny] >=0) continue;
                vis_fire[nx][ny] = vis_fire[cur.X][cur.Y]+1;
                Q1.push({nx,ny});
            }
        }
        
        bool flag = false;
        while(!Q2.empty() && !flag){
            auto cur = Q2.front(); Q2.pop();
            for(int dir=0; dir<4; dir++){
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if(nx<0 || nx>=h || ny<0 || ny>=w){
                    cout << vis_move[cur.X][cur.Y]+1 <<"\n";
                    flag = true;
                    break;
                }
                if(board[nx][ny]=='#' || vis_move[nx][ny] >=0) continue;
                if(vis_fire[nx][ny] !=-1 && vis_fire[nx][ny]<=vis_move[cur.X][cur.Y] +1) continue;
            
                vis_move[nx][ny] = vis_move[cur.X][cur.Y]+1;
                Q2.push({nx,ny});
            }
        }
        if(!flag) cout << "IMPOSSIBLE" << "\n";
    }
    
}
// 불하고 move 제약조건에서 cur.X 대신 nx써서 틀림...


// // 밑에 얘는 되고 왜 위에 얘는 안됨?
// #include <bits/stdc++.h>
// using namespace std;
// #define X first
// #define Y second
// string board[1002];
// int dist1[1002][1002]; // 불의 전파 시간
// int dist2[1002][1002]; // 지훈이의 이동 시간
// int n, m, k;
// int dx[4] = {1,0,-1,0};
// int dy[4] = {0,1,0,-1};
// int main(void){
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   cin >> k;
//   while(k--){
//     cin >> m >> n;
//     for(int i = 0; i < n; i++){
//       fill(dist1[i], dist1[i]+m, -1);
//       fill(dist2[i], dist2[i]+m, -1);    
//     }
//     for(int i = 0; i < n; i++)
//       cin >> board[i];  
//     queue<pair<int,int> > Q1;
//     queue<pair<int,int> > Q2;
    
//     for(int i = 0; i < n; i++){
//       for(int j = 0; j < m; j++){
//         if(board[i][j] == '*'){
//           Q1.push({i,j});
//           dist1[i][j] = 0;        
//         }
//         if(board[i][j] == '@'){
//           Q2.push({i,j});
//           dist2[i][j] = 0;
//         }
//       }
//     }
//   // 불에 대한 BFS
//     while(!Q1.empty()){
//       auto cur = Q1.front(); Q1.pop();
//       for(int dir = 0; dir < 4; dir++){
//         int nx = cur.X + dx[dir];
//         int ny = cur.Y + dy[dir];
//         if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
//         if(dist1[nx][ny] >= 0 || board[nx][ny] == '#') continue; 
//         dist1[nx][ny] = dist1[cur.X][cur.Y]+1;
//         Q1.push({nx,ny});
//       }
//     }
//     bool flag = false;
//   // 지훈이에 대한 BFS
//     while(!Q2.empty() && !flag){
//       auto cur = Q2.front(); Q2.pop();
//       for(int dir = 0; dir < 4; dir++){
//         int nx = cur.X + dx[dir];
//         int ny = cur.Y + dy[dir];
//         if(nx < 0 || nx >= n || ny < 0 || ny >= m){ // 범위를 벗어났다는 것은 탈출에 성공했다는 의미. 큐에 거리 순으로 들어가므로 최초에 탈출한 시간을 출력하면 됨.
//           cout << dist2[cur.X][cur.Y]+1 << "\n"; 
//           flag = true;
//           break;
//         }
//         if(dist2[nx][ny] >= 0 || board[nx][ny] == '#') continue;
//         if(dist1[nx][ny] != -1 && dist1[nx][ny] <= dist2[cur.X][cur.Y]+1) continue; // 불의 전파 시간을 조건에 추가
//         dist2[nx][ny] = dist2[cur.X][cur.Y]+1;
//         Q2.push({nx,ny});
//       }
//     }
//     if(!flag) cout << "IMPOSSIBLE" << "\n"; // 여기에 도달했다는 것은 탈출에 실패했음을 의미.
//   }

// }