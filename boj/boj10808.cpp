// 

#include <iostream>
#include <algorithm>
using namespace std;
int arr[26];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin >> s;
  for (int i = 0; i<=s.size(); i++){
      arr[s[i] - 97]++; // 아스키 코드 이용
      // arr[s[i]- 'a']로 대체
  }
  for (int i=0; i<26; i++){
    cout << arr[i] << ' ';
  }
}
// 다른 풀이
for(char a = 'a'; a <='z'; a++){
    int cnt = 0;
    for (auto c: s)
        if(a==c) cnt ++;
    cout << cnt << " "
}