// A,B,C주어질때 AxBxC 계산결과에서 0-9 몇번 썼는지

#include <bits/stdc++.h>
using namespace std;
int arr[10];
int main(void){
    int a, ret = 1;
    for(int i=0; i<3; i++){
        cin >> a;
        ret *= a;
    }
    
    while(ret){
        int c;
        c = ret % 10;
        for (int i =0; i<=9; i++){
            if(c == i) arr[i]++;
        }
        ret = ret / 10;
    }
    for (int i =0; i<=9; i++){
        cout << arr[i] <<"\n";
    }
}
// 다른 사람풀이
// while 부분을 짧게
while(ret >0){
    arr[ret%10]++;
    t/=10;
}
