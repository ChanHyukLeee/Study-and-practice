#include <bits/stdc++.h>
using namespace std;

// int main(void){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int a, b, c;
//     cin >>a >> b>> c;
//     long long res = 1;
//     while(b--){
//         res = a * res;
//     }
//     int ans;
//     ans = res % c;
//     cout<< ans;
// }

// int -> longlong 바꿈
// 생각해보니 longlong도 곱하면서 넘어가는 경우가 생김 또다른 알고리즘을 채택해야한다.

// 2번째 방법 -> while문에서 res *a %m 반복 -> 분명 시간초과 발생
// 3번째
// 재귀 사용 


int answer(long long a, long long b, long long c){
    if(b ==1) return a % c;
    else{
        long long ans = answer(a,b/2,c);
        ans = ans * ans % c;
        if(b%2==0) return ans;
        else return ans * a % c;
    }
}


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long a, b, c, k;
    cin >>a >> b>> c;
    k = answer(a,b,c);
    cout << k;
}