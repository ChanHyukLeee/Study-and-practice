// 빠른 a+b 구하기


#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >>a >> b;
        cout << a+b << '\n';
    }
}