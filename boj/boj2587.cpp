// 평균과 중앙값 구하기

#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[5], result = 0;
    for (int i = 0; i<5; i++){
        cin>> arr[i];
        result += arr[i];
    }
    sort(arr, arr+5);
    cout << result / 5 << '\n';
    cout << arr[2];
    return 0;
}