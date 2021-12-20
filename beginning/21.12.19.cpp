// arr의 합이 100인 서로다른 두 위치의 원소가 존재하면 1아니면 0
// arr은 0이상 100 이하 , N은 1000이하
# include <iostream>
int func2(int arr[], int N){
    for (int i=0; i<N; i++){
        for(int j = i+1; j<N; j++){
            if(arr[i]+arr[j] == 100){
                return 1;
            }
        }
    }
    return 0;
}

// N이 제곱수이면 1을 반환 아니면 0을 반환
int func3(int N){
    for (int i = 1; i <N; i++){
        if(N/i == i){
            return 1;
        }
    }return 0;
}
// or
int func3(int N){
    for (int i = 1; (i * i)<=N; i++){
        if((i*i)==N){
            return 1;
        }
    }return 0;
}

// N 이하 수 중 가장 큰 2의 거듭제곱수 를 반환하는 함수

int func4(int N){
    int i =1;
    while(2*i <= N){
        i *=2;
    }
    return i;
}
// 512MB가 1.2억개의 int
// int 자료형 크기 넘으면 longlong
// integer overflow 조심해야함

// float은 유효숫자 6자리
// double은 유효숫자 15자리;
// 0.1+0.1+0.1 == 0.3이 에러나올 수 있음
// double에 longlong범위의 정수를 함부로 담으면 안됨

// 실수비교시
int main(void){
    double a = 0.1+ 0.1+0.1;
    double b = 0.3;
    if (a==b) std::cout<<"same1\n";
    if (abs(a-b)< 1e-12) std::cout<<"same2\n";
}