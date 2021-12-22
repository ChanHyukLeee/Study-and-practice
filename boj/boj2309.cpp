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
    int total_sum = 0;
    for(int i= 0; i<9; i++){ 
        cin >> arr[i];
        total_sum += arr[i];
    }
    int wanted, total;
    wanted = total_sum - 100;

    for(int a = 0; a<9; a++){
        for (int b=a+1; b<9; b++){
            total = arr[a]+arr[b];
            if(total == wanted){
                arr[a] = 100;
                arr[b] = 100; // 최대가 100
                break;
            }
        }if(total == wanted){
            break; // 왜??
            // 100이 4개 생기는 경우가 발생 그래서 해야함
        }
    }
    
    sort(arr, arr+9);
    for (int i = 0; i<7; i++){
        cout << arr[i] << "\n";
    }
    return 0;
}