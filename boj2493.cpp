// N개의 탑의 높이 주어짐
#include <bits/stdc++.h>
using namespace std;
int pos = 0;
int dat[500001];

void push(int a){
    dat[pos++] = a;
}

int main(void){
    ios::sync_with_stdio();
    cin.tie();
    int n;
    cin >> n;
    int ptr;
    vector<int> vec;
    vector<int>::iterator it = vec.begin();
    ptr = n-1;
    while(n--){
        int a;
        cin >> a;
        push(a);
    }
    pos--;
    while(pos>=0){
        if(dat[pos] < dat[ptr]){
            pos--;
            vec.push_back(ptr+1);
            ptr = pos -1;
        }
        else{
            ptr--;
            // cout << pos << "\n";
            if(ptr <= 0){
                pos--;
                ptr = pos -1;
                vec.push_back(0);
            }
        } 
    }
    reverse(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++) cout << vec.at(i) << " ";
}
// 시간초과...