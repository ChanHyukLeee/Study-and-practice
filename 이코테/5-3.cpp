#include <iostream>
#include <algorithm>
#include <queue>
#include <string>
using namespace std;
int n,m,cnt;
char arr[1002][1002];
bool vis[1002][1002];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

bool check(int nx, int ny){
    if(nx>=0 && nx <n && ny >=0 && ny<m){
        if(arr[nx][ny] == '0' && vis[nx][ny] == false) return true;
    }
    return false;
}

int BFS(int a, int b){
    if(vis[a][b] == true){
        return 1;
    }
    queue <pair<int,int>> Q;
    Q.push({a,b});
    while(!Q.empty()){
        pair<int,int> cur = Q.front();
        Q.pop();
        int x = cur.first;
        int y = cur.second;
        vis[x][y]= true;
        for(int i=0; i<4; i++){
            int nx, ny;
            nx = x+dx[i];
            ny = y+dy[i];
            if(check(nx,ny)){
                Q.push({nx, ny});
            }
        }
    }
    cnt+=1;
    return 1;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >>m;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == '0'){
                BFS(i,j);
            }
        }
    }
    cout << cnt;
}
// 공백없는 문자받기