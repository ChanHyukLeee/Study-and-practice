// 9개 다른 자연수가 주어질때
// 최대값 찾고 몇 번째 수인지 

#include <iostream>
#include <algorithm>
using namespace std;
int arr[9];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int max = 0, idx;
    for (int i =0; i<9; i++){
        cin >> arr[i];
        if(arr[i]> max){
            idx = i+1;
            max = arr[i];
        }
    }
    cout << max << '\n';
    cout << idx;
}
// max_element
// 값을 참조하려면 * 연산자를 붙혀야함
// *max_element(a,a+9)
// idx는 max_element(a, a+9) - a+1(max 주소값 - a 주소값 +1)