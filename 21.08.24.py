# 11번 for를 이용한 기본 활용
# s = 0
# for i in range(101):
#     s += i
# print(s)

# 12번 게임 캐릭터 클래스 만들기

# class Wizard():
#     def __init__(self, health, mana, armor):
#         self.health = health
#         self.mana = mana
#         self.armor = armor
        
#     def attack(self):
#         print("파이어볼")

# X = Wizard(health = 545, mana = 210, armor = 10)
# print(X.health, X.mana, X.armor)
# X.attack()

# 13번 몇번째 행성인가요
# def planet(num):
#     lists = ['수성','금성','지구','화성','목성','토성','천왕성', '해왕성' ]
#     if (num >8 or num <0):
#         return print("그런 행성은 없습니다")
#     else:
#         return print(lists[num-1])

# number = int(input("몇번째 행성??"))
# planet(number)

# 14번 3의배수인가요?
# n = int(input("랜덤숫자?"))
# if(n % 3 == 0):
#     print("짝")
# else:
#     print(n)

# 15번 자기소개
# name = str(input("이름 입력하세요"))
# print("안녕하세요 저는 {0}입니다.".format(name))

# 16번 로꾸까
# sentence = input("문장입력\n")
# print(sentence[::-1]) # start stop step
# # 이외에도 reversed/ list로 string을 넣은다음에 pop method 활용해서 string에 넣기

# def reverse(s):
#     str = ""
#     for i in s:
#         str = i + str
#     return str

# 문제 17 놀이기구 키 제한
# n = int(input("키 주세요"))
# if(n>=150):
#     print("YES")
# else:
#     print("NO")

# 문제 18 평균점수, 소수점은 모두 버립니다.
# a,b,c = map(int,input().split())
# print("{0}".format(int((a+b+c)/3)))
# data = map(int,input().split()), sum함수

#문제 19 제곱
# a,b = map(int,input().split())
# print(a**b)
# # data[0] ** data[1]

#문제 20 몫과 나머지
# data = list(map(int,input().split()))
# quo = data[0] // data[1]
# rem = data[0] % data[1]
# print(quo, rem)

# 문제 21 set
# set()이렇게 표현해도 된다.

# 문제 22 6의 배수확인
# i % 6 ==0

# 문제 23 print(10/2) -> 5.0 

# 문제 24 대문자 바꾸기
# name = input('이름입력')
# print(name.upper())

# 문제 25 원의 넓이
# r = int(input("반지름 주세요"))
# print(r*r*3.14)

# 문제 26 행성문제2
# list_korea = ['수성','금성','지구','화성','목성','토성','천왕성', '해왕성']
# list_english = ['Mercury', 'Venus', 'Earth', 'Mars', 'Jupiter', 'Saturn', 'Uranus', 'Neptune']

# planet = input("행성입력")
# for i in range(8):
#     if(list_korea[i] == planet):
#         print(list_english[i])
# 딕셔너리로 할 수 잇음 -> 바로 print

#문제 27 dictionary 만들기
# data_name = map(str,input().split())
# data_score = map(str,input().split())
# dic = dict(zip(data_name, data_score))
# print(dic)
# zip 방식으로 설정

# 문제 28 2-gram
# sen = str(input('2-gram 입력'))
# length = len(sen)
# for i in range(length-1):
#     print("{0},{1}".format(sen[i],sen[i+1]))

# 문제 29 대문자만 지나가세요
# char = str(input('알파벳 입력'))
# if(char == char.upper()):
#     print('yes')
# else:
#     print('No')
# char.isupper() -> true면 yes

# 문제 30 문자열 속 문자 찾기
# sen = str(input('문장 입력'))
# letter = str(input('문자    입력'))

# if(letter in sen):
#     print(sen.rfind(letter))
# else:
#     print('nothing')

# data.find(word) 이렇게 해도 됨
# find vs index :https://ssungkang.tistory.com/entry/%EB%AC%B8%EC%9E%90%EC%97%B4-%ED%95%A8%EC%88%98-find%EC%99%80-index

# 문제 31 파이썬 자료형의 복잡도 -> 파이썬 알고리즘 인터뷰 통해 알아보기
# 문제 32 문자열 만들기, 문자를 입력받으면 단어의 갯수를 출력
data = list(map(str,input().split()))
print(len(data))


