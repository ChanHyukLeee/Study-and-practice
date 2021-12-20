//https://www.youtube.com/watch?v=6lhVHP8bkPA&list=PLtqbFd2VIQv4O6D6l9HcD732hdrnYb6CY&index=3
#include <iostream>
//다양한 STL과 함수인자
void func1(vector<int> v){
    v[10] = 7;
} 
void main(void){
    vector<int> v(100);
    func1(v);
    std::cout v[10];
}
// v[10]은 0
// 복사본을 func1에 대입
// 그래서 밑의 두 함수에서 시간복잡도 차이가 존재
bool cmp1(vector<int> v1,vector<int> v2, int idx ){
    return v1[idx] > v2[idx];
}
// cmp1은 O(n) : 복사하는데 시간 소비

bool cmp2(vector<int>& v1,vector<int>& v2, int idx ){
    return v1[idx] > v2[idx];
}
// cmp2은 O(1) : 복사x 

// 표준입출력
// scanf, printf에선 string 처리 x
// 만약 scanf를 쓴다면
int funct(void){
    char a[10];
    scanf("%s", a);
    string s(a); // string s = a
    printf("%s", s.c_str())
}
// 공백 문자열을 받을 때
// 보통 공백 문자열을 받으면 scanf든 cin이든 공백 전까지만 받음
// 그래서 
string s;
getline(cin, s);
cout << s; // 단 c++ string

// 혹은
char a[10];
scanf("%[^\n]", a);

// c++ stream과 c stream을 동기화 끝내는 법
// cin cout만 사용하는 경우
ios::sync_with_stdio(0);
ios::sync_with_stdio(false); 

// cin 명령을 수행하기 전에 cout버퍼를 비우지 않도록 하는 코드
cin.tie(0);
cin.tie(nullptr);

// 코테에서 endl 쓰지 말것
// 중간 중간 버퍼를 비울 필요 없음