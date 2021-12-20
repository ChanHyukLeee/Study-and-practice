//gcc -o 실행파일명 소스파일들
// makefile 참조

#include <stdio.h>
#include "sum.h"
int main(){
    printf("hello");
    printf("%d", sum(2,3));
    // if (argc>0){
    //     for (int i=0; i<argc; i++){
    //         printf("op[%d] : %s\n", i, argv[i]);
    //     }

    // }
}
// gcc 컴파일 시 다양한 옵션이 존재
// https://jangpd007.tistory.com/220
// 리눅스에 돌아가는 프로그램을 만드는 게 gcc
// 1. gcc linker.c sum.c -> a.exe
// 2. gcc test linker.c sum.c -> test.exe or test.out 생김
// 3. gcc -c main.c sum.c -> 각각의 objective file 생성 

// 헤더 중복 방지 방법 ->

// 1. 헤더 파일 내에 
// #ifndef __SUM_H__
// #define __SUM_H_
// 헤더 내용
// #endif
// 칩이름으로 활용 -> ex) ifdef RTL2021 ifdef ~~

// 2. #pragma once : visual studio compiler, 요즘 컴파일러 