#include <iostream>
#include <algorithm>

int cnt =0;

using namespace std;
void check(int h ,int m, int n){
    if((h/10)==3 || (h%10)==3||(m/10)==3 || (m%10)==3||(n/10)==3 || (n%10)==3){
        cnt++;
    }
}


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >>n;
    int h,m,s =0;
    for(int i=0;i<=n;i++){
        for(int j=0; j<60; j++){
            for(int k=0; k<60; k++){
                check(i,j,k);
            }
        }
    }
    cout << cnt;
}