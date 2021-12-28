// 한줄로 된 간단한 에디터 구현 영어 소문자만

#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  list<char> L;
  string str;
  char act1, act2;
  int n;
  cin >> str;
  for (auto c :str) L.push_back(c); // 연결리스트에 저장
  cin >> n;
  list<char>::iterator cur = L.end();
  while(n--){
    cin >> act1;
    if(act1 == 'P'){
      cin >> act2;
      L.insert(cur,act2);
      //cur++; 이게 문제였네
    }
    else if(act1== 'L') {
      if(cur != L.begin()) cur--;

    }else if(act1== 'D') {
      if(cur != L.end()) cur++;

    }else{
      if(cur != L.begin()){      
        cur--;
        cur = L.erase(cur);}
    }
  }
  for (auto c : L) cout << c;
}

// erase 함수는 단독으로 사용 불가
// https://en.cppreference.com/w/cpp/container/list/erase