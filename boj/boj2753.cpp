// 윤년이면 1 아니면 0
// 윤년은 4의 배수이면서 100의 배수가 아닐때 또는 400의배수

#include <iostream>
#include <algorithm>
using namespace std;

int year;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> year;
    if(((year%4 == 0)&&(year%100 != 0))||(year%400 ==0)){
        cout << 1;
    }else{
        cout << 0;
    }
    return 0;
}