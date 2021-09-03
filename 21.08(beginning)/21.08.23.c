// # include <stdio.h>
// // # include <string.h>
// char strcpy(char *dest, const char *src);
// size_t strlen(const char *s);
// int strcmp(const char *s1, const char *s2);

// int main(){
//     char str[20] = "abc\n";
//     char str_c[20] = "abc\n";
//     printf("%d", strcmp(str, str_c));

//     // printf("str_c : %s", str_c);
//     // strcpy(str_c, str); // 문자열 카피
//     // printf("str_c : %s", str_c);
// }

// char strcpy(char *dest, const char *src){
//     // while(*src){
//     //     *dest++ = *src++;
//     // }

//     for (int i = 0; i < strlen(src); i++){
//         dest[i] = src[i];
//     }
//     return dest;
// }

// size_t strlen(const char *s){
//     size_t count = 0;
//     if(s != NULL){
//         for(int i=0; ;i++){
//             if(*(s+1)==0){
//                 break;
//             }else{
//                 count++;
//             }
//         }
//     }else{
//         return -1;
//     }
//     return count;
// }

// int strcmp(const char *s1, const char *s2){
//     int sub =0;
//     int s1len = strlen(s1);
//     int s2len = strlen(s2);
//     int len = 0;

//     if(s1len >= s2len){
//         len = s1len;
//     }else{
//         len = s2len;
//     }

//     for (int i =0; i < len; i++){
//         if(*(s1+i) == 0){
//             return 0 - *(s2+i);
//         }else if (*(s2+i)==0){
//             return *(s1+1) - 0;
//         }

//         sub = *(s1 + i) - *(s2+i);
//         if(sub != 0){
//             return sub;
//         }
//     }
//     return sub;
// }

// 프로그래머스 문제
// #include <stdio.h>
// #include <stdbool.h>
// #include <stdlib.h>
// long long solution(int price, int money, int count);
// int main(){
//     int price, money, count;
//     long long sol;
//     printf("price 입력하세요");
//     scanf("%d", &price);
//     printf("money 입력하세요");
//     scanf("%d", &money);
//     printf("count 입력하세요");
//     scanf("%d", &count);
    
//     sol = solution(price, money, count);
//     printf("result : %11d", sol);
//     return 1;
// }
// long long solution(int price, int money, int count) {
//     long long answer = -1;
//     int actual_price = 0; // long long 으로 해야 정답이었음
//     for (int i =1; i<=count; i++){
//         actual_price += price*i;
//     }
//     if(actual_price >= money){
//         answer = actual_price - money;
//     }else{
//         answer = 0;
//     }
    
//     return answer;
// }

// 구조체 공부
// # include <stdio.h>
// # include <string.h>

// struct student{
//     int s_id;
//     char name[20];
// };
// typedef struct student std;
// void std_func(std * st);
// int main(){
//     std st1;
//     std_func(&st1);
//     printf("s_id: %d\n", st1.s_id);
//     printf("name : %s\n", st1.name);
//     return 1;
// }
// void std_func(std * st){
//     st -> s_id = 10;
//     strcpy(st->name, "lee hyuk");
//     printf("s_id: %d\n", st->s_id);
//     printf("name : %s\n", st -> name);
// }

// malloc 공부
# include <stdio.h>
# include <stdlib.h>

int main(){
    int * h_num;
    h_num = malloc(sizeof(int));
    *h_num = 4;
}