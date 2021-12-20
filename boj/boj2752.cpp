#include <bits/stdc++.h>
using namespace std;
int main(void){
    int arr[3];
    for (int i =0; i<3; i++){
        cin >> arr[i]; 
    }
    sort(arr, arr+3); // algorithm 헤더에서 sort 함수
    for (int i =0; i<3; i++){
        cout << arr[i]<< " ";
    }
}

// BaaaaaaaaaaarkingDog 님 풀이
int a, b, c; // 입력
cin >> a >> b >> c;
int d, e, f; // 크기 순으로 출력할 세 수
d = min({a,b,c});
f = max({a,b,c});
e = a+b+c-d-f;
cout << d << ' ' << e << ' ' << f;