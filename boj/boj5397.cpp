//키보드 누른 명령을 모두 기억
// 첫째줄 테스트 케이스 개수
// 백스페이스 - , 화살표 ><, 
#include <iostream>
#include <string>
#include <algorithm>
#include <list>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--){
        string str;
        cin >> str;
        list<char> ret = {};
        list<char>:: iterator t = ret.begin();
        for (char c : str)
            if(c == '<') {
                if(t != ret.begin()) t--;} 

            else if(c == '>'){
                if(t != ret.end()) t++;}

            else if(c == '-'){
                if(t != ret.begin()){
                    t--;
                    t = ret.erase(t); //지울 때 iterator 한칸 앞으로
                } } 
            else ret.insert(t,c);
        for (list<char>::iterator t = ret.begin(); t!=ret.end(); t++) cout << *t;
        cout << '\n';
    }
}