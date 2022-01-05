// N개의 탑의 높이 주어짐
#include <bits/stdc++.h>
using namespace std;
// int pos = 0;
// int dat[500001];

// void push(int a){
//     dat[pos++] = a;
// }

// int main(void){
//     ios::sync_with_stdio();
//     cin.tie();
//     int n;
//     cin >> n;
//     int ptr;
//     vector<int> vec;
//     vector<int>::iterator it = vec.begin();
//     ptr = n-1;
//     while(n--){
//         int a;
//         cin >> a;
//         push(a);
//     }
//     pos--;
//     while(pos>=0){
//         if(dat[pos] < dat[ptr]){
//             pos--;
//             vec.push_back(ptr+1);
//             ptr = pos -1;
//         }
//         else{
//             ptr--;
//             if(ptr <= 0){
//                 pos--;
//                 ptr = pos -1;
//                 vec.push_back(0);
//             }
//         } 
//     }
//     reverse(vec.begin(), vec.end());
//     for (int i = 0; i < vec.size(); i++) cout << vec.at(i) << " ";
// }
// 시간초과...
// 배열(스택)로 구현하는 것은 1.5초 로는 너무 느린듯

//2번째 풀이
// http://boj.kr/44465623025e452bba5feb80b0b0e60e 참고
int N;
stack<pair<int, int>> tower;

// pair 사용하기 위해 #include <utility> 필요
//pair<자료형1, 자료형2> -> x.first, x.second
// make_pair(변수1, 변수2)

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    tower.push({100000001, 0});
    for(int i =1; i<=N; i++){
        int dat;
        cin >> dat;
        while(tower.top().first < dat)
            tower.pop();
        cout << tower.top().second << " ";
        tower.push({dat, i});
    }
} //천잰가?