#include <bits/stdc++.h>
using namespace std;

int n,k, ans;
int dist[100002];
int dx[2] = {1,-1};

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> k;

  deque<int> Q;
  Q.push_back(n);
  dist[n] = 1;
  bool flag = false;

  while(!flag){
    int cur = Q.front();
    Q.pop_front();

    if(cur == k){
      flag = true;
      ans = dist[cur] - 1;
      break;
    }

    if(cur * 2 <= 100000 && !dist[cur * 2]){
      dist[cur*2] = dist[cur];
      Q.push_front(cur*2);
    } 
  
    if(cur+1<=100000 && !dist[cur+1]){
        dist[cur+1] = dist[cur]+1;
        Q.push_back(cur+1);
    }

    if(cur -1 >=0 && !dist[cur-1]){
        dist[cur-1] = dist[cur]+1;
        Q.push_back(cur-1);
    }
  }
  cout<< ans;
}

//https://jdselectron.tistory.com/58 참고
// .메모리 초과 발생 -> 우선순위 큐를 사용해야 한다고 함
// 인접행렬을 사용하면 n*n*int(4b) 
// 그리고 우선순위큐를 사용하면 빨리 끝낼수있음\
// 순간이동은 덱의 앞에 넣고
// 걷는 이동은 뒤에 넣는다
// 그리고 뽑을때는 앞에서 부터 뽑는다

// 기존의 방식에선 100000 1이 너무 느려서 나오지 않았는데
// 이 방법으로는  바로 cur-1로 들어가서 빠르게 나온다.