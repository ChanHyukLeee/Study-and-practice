// 별찍기 1
#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    for (int i = 0; i < N; i++){
        for(int j = N-i; j <=N; j++) cout << '*';
        cout << '\n';
    }
}

// 실수
// 파이썬을 많이 사용하다보니 "*" * 3 이런식의 문법에 길들여짐
// cpp언어에선 그런 문법이 존재 못함