"""
<string> char 연속된 집합 : 포인터개념 + 배열

char str[20];

str[0] = 'h';

str[1] = 'i';

str[2] = '\0';  #NULL → 더 이상 없다. 항상 넣어주기( 잠재적 버그 가능성) 혹은 str[2]=0x00 or 0

printf("%s", str);

 ↔ char str[20] = 'hi' 랑 같음

char str1 = 'h'; char str2 = 'i'; char str3 = '\0'; → printf("%c%c%c", str1, str2, str3);

둘다 6바이트이지만 배열은 위치(물리적)가 붙어있고, 밑에는 그러지 않을 수 있다.

<배열>

string과 마찬가지다. 

#define MAX 1000

int array[MAX]

for(int i = 0 ; i < MAX ; i++){

array[i] = i

}

int a = array : a는 array의 메모리 주소

<포인터>

1. 메모리에 써 있는 값은 1100101010 이렇게 나와있다.
2. 이 값이 cpu 명령어일지 변수일지 포인터일지 float일지는 컴퓨터가 알지 못하고 설계자만이 제공할 수 있다.
3. 암튼 포인터는 메모리 값을 담아두는 그릇이다. 

    int a : 0x123에 10을 저장

    → 포인터도 메모리 공간 0x200 주소에  값을 0x123으로 차지, 이름표는 `int*` pa다. 

    pa = &a; (표현)

4. `*pa = 4;`

    이 표현은  0x123번지로 가, 거기에 4를 넣어. (`a= 4`)

5. int a =3;

    int *a; 

    pa = &a

    —> a, *pa=3, &a, pa = 주소값, &pa : pa의 주소값

<이중포인터>

int ** ppa;

ppa = &pa;

*ppa : pa의 값

**ppa: a의 값

&ppa: ppa의 주소

<`포인터 자료형의 의미`> ! 중요

int : 4바이트고 메모리에 정수가 들어와

int * : `8바이트`, int형태의 주소값을 늘거야 

↔ char * : , float * :, double *:  short * : 다 `8바이트`!!!!!!

메모리 값이니깐 8바이트

RAM 은 random access 가능, 각 주소마다 1대1 매칭

32bit computer는 line이 32개, 최대 읽어올수 있는 숫자가 (2의 32승 정도,) 4기가다.

그 이상 뽑아봤자 컴퓨터가 동시에 들어갈 수 가 없다. 그래서 메모리 주소는 즉 포인터는 4바이트로 할당된다.

64는 그래서 8바이트다.

<함수>
1. 함수의 저장방법

    명령어가 컴퓨터 메모리에 저장

    시작주소를 함수명을 통해서 접근한다. → 함수명은 똑같으면 안된다.

2. 자료type 함수명(int a, int b){}

     자료 type : 결과값의 type이 뭔지

    void : 반환값없다 

    int float 등 

3. 호출

    int a = 1;

    int b = 2;

    int result = sum(a, b);

    - 특정공간에 함수에 필요한 인수값 복사 : a, b 값 메모리 복사
    - 함수에 넘겨줌
    - return 값 제공하면 다시 main으로 복사해서 넘겨줌

4. 번외

    main 앞 : int sum(a,b);

    main 뒤 : sum 함수 정의

    —> 사실 헤더파일에 정의

    main도 함수다.

    다른 함수를 stack에 저장한다.

    stack에 꺼내서 사용

"""