// 오름차순으로 정렬된 배열을
// 주어진 구간만 역순으로 배열 후 나열
#include <iostream>
#include <algorithm>
using namespace std;
int arr[21];

void reverses(int a, int b){
    for (int i=0; i<(b-a+1)/2; i++){
        swap(arr[a+i], arr[b-i]);
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    for (int i=1; i<=20; i++) arr[i] = i;
    
    for (int i=1; i<=10; i++){
        cin >> a >> b;
        reverses(a,b);
    }

    for (int i=1; i<=20; i++) cout << arr[i] << ' ';
    return 0;
}

// 아니면 STL reverse 사용
// reverse(arr+a. arr+b+1)