#include <iostream>
#include <algorithm>

using namespace std;
int arr[102][102];
int small_arr[102];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M, n;
    cin >> N >> M;
    for(int i=0; i<N; i++){
        small_arr[i] = 10000;
        for(int j=0; j<M; j++){
            cin >> n;
            small_arr[i] = min(small_arr[i], n);
        }
    }
    sort(small_arr, small_arr + N);
    cout << small_arr[N-1];
}
// 배열에 0이 채워지는 걸 유념해야 함.
// 따라서 초기값이 바꿔주지 않는다면 계속 min값이 0이 됨