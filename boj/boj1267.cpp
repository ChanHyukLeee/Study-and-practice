// 영식 요금제 Y: 30초마다 10원 
// 민식 요금제 M: 60초마다 15원
// 통화의 개수 N(<20 자연수)
// 그리고 통화시간 (자연수)
// 최선의 요금제, 몇 원 표시
// 둘의 가격이 같으면 Y M 표시
#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,y =0,m = 0;
    cin >> N;
    int arr[N], yy[N], mm[N];
    for (int i =0; i <N; i++){
        cin >> arr[i];
        yy[i] = ((arr[i] / 30) + 1)*10;
        mm[i] = ((arr[i] / 60) + 1)*15;
    }
    for (int i =0; i <N; i++){
        y += yy[i];
        m += mm[i];
    }

    if(y>m){
        cout << "M ";
        cout << m;
    }else if(y ==m){
        cout << "Y M ";
        cout << y;
    }else{
        cout << "Y ";
        cout << y;
    }
    return 0;
}
// 다른 풀이
// yy, mm 안쓰고 바로 더해버리기
// 마지막 cout 할때 바로 이어서 쓰기