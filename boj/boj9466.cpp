#include <bits/stdc++.h>
using namespace std;

int n;
int arr[100002];
bool vis[100002]; // 방문 여부
bool done[100002]; // 성공 여부
int cnt;

// 사이클에 도달하지 않는 node에 도착하면 사이클이 아닌 원소

void BFS(int cur){
    vis[cur] = true;
    int next = arr[cur];
    if(!vis[next]){ // 방문 x
        BFS(next);
    }else if(!done[next]){ // 방문했는데 사이클이 아닌 경우
        
        for(int i = next; i!=cur; i=arr[i]){
            cnt++;            
        }
        cnt++; // 자기 자신
    }else{
        return;
    }
    done[cur] = true;
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T;
  cin >> T;
  while(T--){
    int n;
    cnt = 0;
    cin >> n;
    fill(arr+1, arr+n+1,0);
    fill(vis+1, vis+n+1,0);
    fill(done+1, done+n+1,0);

    for(int i=1; i<=n; i++)
      cin >> arr[i];

    for(int i=1; i<=n; i++){
        if(!vis[i]) BFS(i);
    }
    
    cout << n - cnt << "\n";
  }
}

// 만약 모든 학생에 대해 계속 BFS를 진행한다면  시간복잡도가 o(N^2)가 되어 시간초과가 발생한다.
// 따라서 이미 사이클에 포함된 학생은 BFS를 진행하지않아 시간복잡도를 o(N)으로 감소시켜야 한다.
// 그 방법으로 vis[] 배열에 방문한 학생을 1로 넣어야한다.
// 그리고 done[]배열에 들어간 완성된 학생을 넣었다.


// 그래프를 그린다고 생각
// 만약 사이클이 아닌점에서 출발하면 어느 시점에 사이클에 진입해서
// 다시 초기 사이클값으로 돌아온다.

//o(N^2) 풀이
bool iscycle(int idx){
    int cur = idx;
    for(int i=0; i<=n; i++){
        cur = arr[cur];
        if(cur= idx) return true;
    }
    return false;
}
//이걸 메인에서 1부터 n까지 확인