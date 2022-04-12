// 1만움직임
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int n,m;
char arr[202][202];
int vis[202][202];
int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};

bool check(int x, int y){
    if(x>=0 && x<n && y>=0 && y<=m){
        if(vis[x][y] == 0 ){
            if(arr[x][y] == '1') return true;
        } 
    }
    return false;
}

void BFS(){
    queue<pair<int,int>> Q;
    Q.push({0,0});
    vis[0][0] = 1;
    while(!Q.empty()){
        pair<int,int> cur = Q.front();
        int x = cur.first;
        int y = cur.second;
        Q.pop();
        for(int i =0; i<4; i++){
            int nx = dx[i] + x;
            int ny = dy[i] + y;
            if (check(nx,ny)){
                vis[nx][ny] = vis[x][y]+1;
                Q.push({nx,ny});
            }
        }
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    BFS();
    
    cout << vis[n-1][m-1];
}
// 왜 비교를 =으로했냐 모지라
