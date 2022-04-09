#include <iostream>
#include <algorithm>
using namespace std;


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, res;
    int cnt = 0;
    cin >> n >> k;
    res = n;
    while (true){
        if(res / k > 0){
            cnt ++;
            res = res/k;
        }else{
            cnt++;
            res = res - 1;
        }
        if(res == 1) break;
    }
    cout << cnt;
}
    

    