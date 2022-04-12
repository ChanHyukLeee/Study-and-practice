#include <iostream>
#include <algorithm>
int arr[100002];
using namespace std;
bool compare(int a, int b){
    return a >b;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0; i<n;i++) cin >> arr[i];
    sort(arr, arr+n, compare );
    for(int i=0; i<n;i++) cout << arr[i] << " ";
}