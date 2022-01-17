#include <bits/stdc++.h>
using namespace std;

void func(int a, int b, int n){
    if(n == 1) cout << a << ' ' << b << "\n";
    else{
        func(a, 6-a-b, n-1);
        cout << a << ' ' << b << "\n";
        func(6-a-b, b, n-1);
    }
}

int count (int a, int b, int n){
    if(n==1) return 1;
    else{
        return count(a, 6-a-b,n-1) *2 +1;
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, cnt;
    cin >> n;
    cnt = count(1,3,n);
    cout << cnt << "\n";
    func(1,3,n);
}

// 1개 옮길때는 1->3으로 하나 옮기면 되고
// n개 옮길때는
// 1. 1번에서 2번으로 n-1개 원판을 옮기고
// 2. 1번에서 3번으로 제일 큰거 옮기고
// 3. 2번에서 3번으로 n-1개 원판 옮긴다.