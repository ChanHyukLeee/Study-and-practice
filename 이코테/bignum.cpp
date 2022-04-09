#include <iostream>
#include <algorithm>
using namespace std;
int arr[10004];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,k;
    cin >> n >> m >> k;
    int ret = 0;
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int cnt = 0;
    int first = arr[n-1];
    int second = arr[n-2];
    while(true){
        for(int i =0; i<k; i++){
            if(cnt == m){
                cout << ret;
                return 0;
            }
            ret += first;
            cnt++;
        }
        if(cnt == m){
            cout << ret;
            return 0;
        }
        ret += second;
        cnt++;
    }    
}

// sort 함수 return None.  1,2,3 순으로 order 