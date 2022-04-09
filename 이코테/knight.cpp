#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int dx[8] = {2, 2, 1,1, -2,-2, -1, -1};
int dy[8] = {1, -1, 2, -2, 1, -1,2, -2};


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    int nx, ny;
    cin >> str;
    nx = str[0] - 'a' + 1;
    ny = str[1] - '0';
    int cnt =0;
    for(int i=0; i<8; i++){
        int x, y;
        x = nx + dx[i];
        y = ny + dy[i];
        if(x<1||x>8||y<1||y>8) continue;
        cnt++;
    }
    cout << cnt;
}

// a1을 string으로 받았다고 가정할 때,
// str[0] = 'a'이고 str[1] = '1'이다.그리고 이를 int인 nx,ny로 받았을때 
// 각각 아스키코드의 숫자로 적힌다. 즉 ny = 49이다. 
// 따라서 nx = str[0] - 'a' +1 이런식으로 놓아야한다. 숫자도 마찬가지다.