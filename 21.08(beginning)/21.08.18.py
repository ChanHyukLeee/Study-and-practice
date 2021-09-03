# # 숫자 받기 문제 파이썬
cnt = int(input("숫자를 입력하세여"))
a, b = map(int, input().split())
lista = list()

# # 숫자받기2
a, b, c = map(int, input().split())
print((a+b) % c)
print(((a%c) + (b%c))%c) 
print((a*b) % c)
print(((a%c) * (b%c))%c)

# # 세자리수 * 세자리수 구현
a = int(input("첫번째"))
b = int(input("두번째"))

b_100 = int(b / 100)
b_10 =int(b / 10) - (10 * b_100)
b_1 = b % 10

ans_3 = a * b_1
ans_4 = a * b_10
ans_5 = a * b_100
ans_6 = ans_3 + (10 * ans_4) + (100 * ans_5)
print(ans_3, ans_4, ans_5, ans_6 , sep="\n" )

# #45분 일찍 알람시계 설정하기
hr, minu = map(int, input().split())
if (minu >= 45):
    minu = minu - 45
elif(hr>0):
    hr = hr -1
    minu = minu + 15
else:
    hr = 23
    minu = minu + 15
print(hr, minu, sep = " " )

# x보다 작은수
N, X = map(int, input("").split())
lists = list(map(int, input("").split()))
for index in lists:
    if(index < X):
        print(index, end=" ")