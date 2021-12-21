// 9개 자연수 중 7개의 합이 100이 되는 경우 찾기
// 안되는 경우는 없다고 가정
// 오름차순 출력

#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[9];
    for(int i= 0; i<9; i++){
        cin >> arr[i];
    }
    sort(arr, arr+9);
    

    
    return 0;
}