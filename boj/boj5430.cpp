// 첫번째 원소를 버리는 것 -> deque, queue
// 배열 뒤집기 -> deque가 queue보다 편함 -> vector써도 괜찮을듯

#include <bits/stdc++.h>
using namespace std;
deque<int> dq;

void dequeparse(int n, string str){
    string s = "";
    for(int i = 0; i<str.length(); i++){
        if(isdigit(str[i])) s += str[i];
        else{
            if(!s.empty()){ // length =0 -> empty =1 empty 아니라면
                dq.push_back(stoi(s)); //string -> int
                s = "";
            }
        }
    } 
}

void printdq(){
    cout << "[";
    for (int i=0; i<dq.size(); i++){
        cout<< dq[i];
        if(i+1 != dq.size()) cout << ",";
    }
    cout <<  "]\n";
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N; //
    cin >> N;
    while(N--){
        dq ={};
        bool flag = false, rev = false;
        string s1, s2;
        int n;
        cin >> s1;
        cin >> n;
        cin >> s2;
        dequeparse(n, s2);
        for(auto c: s1){
            if(c =='R') rev = 1-rev;
            else{
                if(dq.empty()) flag = true;
                else{
                    if(rev) dq.pop_back();
                    else dq.pop_front();
                }
            }
        }
        if(flag){
            cout << "error" << "\n";
            flag = false;
        }else{
            if(rev) reverse(dq.begin(), dq.end());
            printdq();
        } 
    }
}
//시간초과...
// 다른 사람 코드 참고해서 매번 reverse하는 것이 아니라
// reverse할 때마다 pop 위치를 바꿔줌 그리고 나중에 reverse
// reverse 문자 다 훑어서 o(n)

// 반성
// 계속 test 1개만 해봐서
// flag, rev, dq 초기화 까먹음 -> 그래서 계속 출력초과 발생