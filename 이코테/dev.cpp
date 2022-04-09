#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int arr[52][52];
bool vis[52][52];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0}; // N, E, S, W
int n,m;

bool check(int x, int y){
    if(x>=0 && x<n && y>=0 && y<m){
        if(vis[x][y] == false && arr[x][y]==0) return true;
    }
    return false;
}
int dir_check(int dir){
    if(dir ==0){
        return 3;
    }else{
        return dir-1;
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    int x,y,dir;
    cin >> x >> y >> dir;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin >> arr[i][j];
    }
    int cnt =1;
    int k = 0;
    while(true){
        dir= dir_check(dir);
        int nx = x+dx[dir];
        int ny = y+dy[dir];
        if (check(nx,ny)){
            vis[nx][ny] = true;
            x = nx;
            y= ny;
            cnt++;
            k=0;
        }else{
            k++;
            if(k == 4){
                nx = x - dx[dir];
                ny = y - dy[dir];
                if(check(nx,ny)){
                    x = nx;
                    y = ny;
                    k =0;
                    cnt++;
                }else{
                    cout << cnt;
                    return 0;
                }
            }
        }
    }


}
