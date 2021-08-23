# # 문제 1 리스트 삭제
# nums = [100, 200, 300, 400, 500]
# nums.pop()
# nums.pop() # 맨 마지막 요소를 돌려주고 그 요소는 삭제
# print(nums)

'''
# len(nums)
# del nums[2]
# nums.append(3)
# nums.sort(), nums.reverse()
# nums.index(200) : 200이 있는 위치값 반환
# nums.insert(0,50): 0자리에 50넣어라
# nums.remove() :  첫번째 자리 제거
# nums.count(100) : 100이 몇개 있는 지 세기
'''

# 문제 2 리스트의 내장함수
# l = [200,100,300]
# l.insert(2, 10000)
# print(l)

# 문제 3 변수 타입
# l = [100, 200, 300]
# print(type(l))  # 당연히 class list

# 문제 4 변수 a를 print(type(a))
# 놀랍게도 파이썬에는 char가 없네..

# 문제 5 for문
# a = 10
# b = 2
# for i in range(1, 5, 2):
#     a += i

# print(a+b)

#문제 6 
# 0은 false, 1은 true

# 문제 7
# 당연히 keyword는 변수이름으로 못 쓴다.

#문제 8 딕셔너리 키 중복
# d = {'height':180, 'weight':78, 'temperature':36, 'eyesight':1}
# print(d['weight'])

#문제 9 sep, end를 활용한 출력방법
# year = '2019'
# month = '04'
# day = '26'
# hour = '11'
# minute = '34'
# second = '27'

# print(year, month, day, sep='/', end=" ")
# print(hour, minute, second, sep=':')

# 문제 10 별 찍기
cnt = int(input("Tree's height : "))

for i in range(1,cnt+1):
    print(" " * int((cnt-i)) + "*" * int((2*i) - 1))

# 내가 콤마를 써가지고 공백이 늘어났음...
# 공백 없게 하려면 +로 하거나, 아니면 print문 나눠서 end='' 하거나 