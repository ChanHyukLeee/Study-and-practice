#include <bits/stdc++.h>
using namespace std;

void speak(int n){
    for (int i = 0; i < n; i++) { cout << "____"; }
    cout << "\"재귀함수가 뭔가요?\"\n";
    for (int i = 0; i < n; i++) { cout << "____"; }
    cout <<"\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n";
    for (int i = 0; i < n; i++) { cout << "____"; }
    cout << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n";
    for (int i = 0; i < n; i++) { cout << "____"; }
    cout << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n";
}

void speak1(int n){
    for (int i = 0; i < n; i++) { cout << "____"; }
    cout << "라고 답변하였지.\n";
}

void chatbot(int n){
    if(n==0){
        speak(0);
    }else{
        chatbot(n-1);
        speak(n);
    }
}
void chatbot1(int n){
    if(n==0) speak1(0);
    else{
        speak1(n);
        chatbot1(n-1);
    }
}


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n";
    chatbot(n-1);
    for (int i = 0; i < n; i++) { cout << "____"; }
    cout << "\"재귀함수가 뭔가요?\"\n";
    for (int i = 0; i < n; i++) { cout << "____"; }
    cout << "\"재귀함수는 자기 자신을 호출하는 함수라네\"\n";
    chatbot1(n);
}

// 파이썬에서처럼 "-" * 2 이런식으로 표현 불가
// for문으로 대체함
// 