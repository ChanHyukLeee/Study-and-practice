// 두 양의 정수가 주어질 때 두 수 사이 정수를 모두 출력
// 두 양의 정수가 같을 때를 생각하는 것이 관건
// int의 경우는 대략 2.1 x 1e9까지 long long 사용(1e18)
// 만약 longlong 범위 넘으면 string으로 

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
long long a, b, n;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b;
    n = abs(b-a);
    if(n==0){
        n = 0;
        cout << n << "\n";
    }else{
        n = n-1;
        long long arr[n];
        long long k;
        k = min(a,b) + 1;
        for (long long i = 0; i<n; i++){
            arr[i] = k;
            k++;
        }
        cout << n << "\n";
        for (long long i = 0; i<n; i++){
            cout << arr[i] << ' ';
        }
    } 
}
// 다른 풀이 : abs 대신 swap 함수 만들어 사용