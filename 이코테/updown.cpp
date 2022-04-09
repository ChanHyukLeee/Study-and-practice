#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string str;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int N;
    cin >> N;
    cin.ignore();
    int x =1, y = 1;
    getline(cin, str);
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c == 'R'){
            y++;
            if(y>N) y--;
            
        }else if(c == 'L'){
            y--;
            if(y<1) y++;
            
        }else if(c == 'U'){
            x--;
            if(x<1) x++;
            
        }else if(c=='D'){
            x++;
            if(x>N) x--;
            
        }
    }
    cout << x << ' ' << y;
}
// 공백이 있는 string을 받을 때는 getline(std::cin, str) 사용
// 공백이 없는 string을 받을 때는 cin << str; 사용
// 그래서 for문, str.length()로 받음
// 그전에 getline을 받으려면 cin.ignore()를 사용해서 비워야함
// 만약 없으면 '/0'을 읽음
// cin.getline(str, 20) 방식도 있음