# 33번 거꾸로 출력하기
# data = list(map(str,input().split()))
# string = []
# for i in range(len(data)):
#     string.append(data[len(data)-1-i])
# for i in range(len(string)):
#     print(string[i], end= ' ')

# 34번 sort 구현하기
# data = list(map(str,input().split()))

# if(data == sorted(data)): # data.sort()는 return 값으로 none을 반환
#     print("yes")
# else: 
#     print("No")

# 35번 factory 함수 사용하기
# def one(n):
#     def two(val):
#         ans = val ** n
#         return ans      
#     return two

# a = one(2) # a = two(val), return 값 val **2
# b = one(3)
# c = one(4)
# print(a(10)) # a(10) = two(10) = 10 **2
# print(b(10))
# print(c(10))
# 처음 보는 구조여서 알아놓아야 겠다.

# 36번 구구단 출력
# n = int(input())
# for i in range(1,10):
#     print(n*i , end=' ')

# 37번 count 사용하기 
# data = list(map(str,input().split()))
# count = 0
# for i in range(len(data)-1):
#     if(data.count(data[i]) > data.count(data[i+1])):
#         count = i
# print("{0}(이)가 총 {1}표로 반장이 되었습니다.".format(data[count], data.count(data[count])))
# 리스트 카운트에 대해 알아봐야겠다
# 딕셔너리 방법
# data = list(map(str, input().split()))
# # set을 이용하여 중복을 제거함
# temp_data = set(data)
# # 중복제거 한 값을 key로, key값을 이용한 value를 카운트해서 dictionary에 저장함
# count_dic = {}
# for i in temp_data:
#     count_dic[i] = data.count(i)

#38번 호준이의 아르바이트 점수 입력받아서 1위-3위 학생들 몇명인지
# data = list(map(int,input().split()))
# count = 3 # 초기값
# count = 3
# #3개는 무조건 구매, 배열 정렬 후 1~3위 중 중복되는 숫자까지 포함

# data_sorted = sorted(list(data))

# print(data_sorted)
# for i in range(len(data)-1, 0, -1):
# 	if data_sorted[-3] == data[i]:
# 		count += 1
# print(count)

# # 39번 오타 수정하기 q->e
# data = input()
# print(data.replace("q", "e"))

# 40번 놀이동산에 가자, 제한 무게 넘으면 총 몇명 탈 수 있는지
weight_limit = int(input())
num = int(input())
weight_list = []
weight = 0
count =0 

for i in range(num):
    weight_list.append(int(input()))

weight_list.sort()

for i in range(num):
    weight += weight_list[i]
    if(weight_limit > weight):
        count = i + 1

print(count)
