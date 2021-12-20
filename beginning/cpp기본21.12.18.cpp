#include <iostream>
// using namespace header1; 
// 위에 문장을 사용하면 header1 함수만 호출
// 아니면 밑에 처럼 std:: 표시
// std:: 를 권장(충돌 가능성)

int main()
{
    std::cout << "Hello, World!" << std::endl;

    std::cout << "argc: " << argc << std::endl;
    return 0;
}
// std는 c++ 표준 라이브러리의 모든 함수 객체 등이 정의된 이름공간(namespace)
// 어디 소속인지 지정 
// header가 다르면 호출되는게 다름

// 기본 문법
int main(){
    int i;
    char c;
    double b;
    float f;
    int arr[10];
    int *parr = arr;
    int *pi = &i;
    int sum = 0;
    for(i=0; i<10; i++){
        std::cout << i<< std::endl;
        sum += i;
    }

    std::cout << "합은 : " << sum << std:: endl;

    while(i<=10){
        sum += i;
        i++;
    }

    int user_input;
    std::cin >> user_input;
    if (i == user_input){
        std::cout << "correct" << std::endl;
    } else{
        std::cout << "fail" << std::endl;
    }
    

    switch (user_input){
        case 1:
        std::cout << "1" << std::endl;
        break;

        default:
        std::cout << "2" << std::endl;
        break;
    }
    
    return 0;
}