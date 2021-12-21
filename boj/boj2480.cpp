// 주사위 3개
// 같은 눈이 3개면 10000+ 같은눈 x 1000
// 2개면 1000 + 같은 눈 x 100
// 모두 다른 눈 이면 큰 눈 x 100

#include <iostream>
#include <algorithm>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c, result;
    cin >> a >> b>> c;
    if(a == b && b==c){
        result = 10000 + 1000*a;
    }else if(a==b){
        result = 1000 + 100*a;
    }else if(a==c){
        result = 1000 + 100*a;
    }else if(b==c){
        result = 1000 + 100*b;
    }else{
        result = 100 * max(max(a,b),c);
    }
    cout << result;
    return 0;
}
// 다른 풀이 - 배열이용
// 배열 받은 담에  sorting 해서 비교