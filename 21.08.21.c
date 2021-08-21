// # include <stdio.h>
// int main(){

//     int a;
//     int * pa;
//     int arr[5];

//     pa = &a;
//     *pa = 0x77;

//     arr[3] = 0x55;
//     *(arr + 3) = 0x77; // 둘이 같다.

//     return 1;

// }
// // 0x77 -> rax, a의 주소
// // 0x55 -> rbp, arr의 주소의 3번째 칸
// // 스택 시작 주소를 기점으로 얼마를 빼서 그곳에 값을 저장하는 형태로 사용

// # include <stdio.h>

// int swap(int * pa);
// int main(){

//     int a[10] = {0};
//     printf("a[3] = %d\n", a[3]);
//     swap(a);
//     printf("a[3] = %d\n", a[3]);

//     return 1;
// }

// int swap(int * pa){

//     *(pa + 3) = 99;
//     return 1;
// }

// // 5명 퀴즈 점수의 평균 및 평균 미만 학생 수 구하기
// # include <stdio.h>
// # define SIZE 5
// int main(){
//     int score[SIZE];
//     int sum = 0;
//     float avg = 0;
//     int count = 0;

//     printf("점수입력 5명\n");
//     for (int i =0 ; i < SIZE; i++){
//         printf("%d 의 점수를 불러주세요\n", i+1);
//         scanf("%d", &score[i]);
//         sum += score[i];
//     }

//     avg = sum / SIZE;
//     for(int i=0; i<SIZE; i++){
//         if (score[i] < avg){
//             count += 1;
//         }
//         printf("%d %d %5.1lf\n");
//     }

//     return 1;    

// }

// 포인터 가지고 놀기
#include <stdio.h>
void swap(int*a, int* b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
// int main(){
//     int a = 3;
//     int b = 4;

//     printf("a = %d, b= %d\n", a, b);
//     swap(&a, &b);
//     printf("a = %d, b= %d\n", a, b);
//     return 1;
// }
int main(){
    char str[100] = "hello world\n";
    char *pstr = str;
    while(*pstr++){
        putchar(*pstr); // \n 다음에 0
    }
} // result : ello world