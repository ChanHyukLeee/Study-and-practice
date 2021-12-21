// 배:0. 등: 1 -> A,B,C,D,E 출력
#include <iostream>
#include <string>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,d;
    char arr[3];
    for (int i =0; i<=2; i++){
        cin >> a >> b>> c >>d;
        if((a+b+c+d) == 4){
            arr[i] = 'E';
        }else if((a+b+c+d) == 3){
            arr[i] = 'A';
        }else if((a+b+c+d) == 2){
            arr[i] = 'B';
        }else if((a+b+c+d) == 1){
            arr[i] = 'C';
        }else{
            arr[i] = 'D';
        }
    }
    cout << arr[0] << '\n';
    cout << arr[1] << '\n';
    cout << arr[2] << '\n';
    return 0;
}

// 다른 풀이
string res = "DCBAE"
cout << res[result]