#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class student {
    public:
        string name;
        int score;
        student(string name, int score){
            this->name = name;
            this->score = score;
        }
    bool operator <(student &other){
        return this-> score < other.score;
    }
};

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    vector<student> v;
    cin >> n;
    for(int i=0; i<n;i++){
        string name;
        int score;
        cin >> name >> score;
        v.push_back(student(name, score));
    }
    sort(v.begin(), v.end());
    for(int i=0; i<n;i++) cout << v[i].name<< " ";
}