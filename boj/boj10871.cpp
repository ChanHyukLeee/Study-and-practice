// 10871번
// 정수 N개로 이루어진 수열 A와 정수 X가 주어짐 
// A에서 X보다 작은 수 출력

#include<iostream>
int main(void){
    int N, X;
    int arr[10005];
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cin >> N >> X;
    for (int i = 0; i<N; i++){
        std::cin >> arr[i];
    }
    for (int i = 0; i<N; i++){
        if (arr[i] < X){
            std::cout << arr[i] << " ";
        }  
    }
}


// 맞은 사람 코드
while(N--){
    scanf("%d", &c);
    if(c<X) printf("%d ", c)
}