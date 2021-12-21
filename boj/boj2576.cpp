// 7개 자연수 주어질때 홀수 합 고르고
// 홀수들 중 최솟값을 찾는 프로그램

#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    int result = 0;
    int flag = 1;
    for (int i = 0; i<7; i++){
        cin >> a;
        if(a % 2 == 1){
            result += a;
            if (flag == 1){
                b = a;
                flag = 2;
            }else{
                b = min(b, a);
            }
        }
    }
    if (flag == 1){
        cout << -1;
    }else{
        cout << result << '\n';
        cout << b;
    }
}
// 다른 풀이
// min 함수 대신
if (x < min){
    min = x;
}
// 홀수를 표현하기 위해 
// 짝수면 0, 홀수면 1
if (x & 1){
    
}