# 41번 소수 판별 
def prime_number(num):
    count = 0
    if(num>0):
        for i in range(2,num):
            if(num % i == 0):
                count +=1
    else:
        return print('wrong number')
    if(count > 0 or num ==1):
        return print("No")
    else:
        return print("Yes")

def prime_list(n):
    # 위키백과
    # 에라토스테네스의 체 초기화: n개 요소에 True 설정(소수로 간주)
    sieve = [True] * n

    # n의 최대 약수가 sqrt(n) 이하이므로 i=sqrt(n)까지 검사
    m = int(n ** 0.5)
    for i in range(2, m + 1):
        if sieve[i] == True:           # i가 소수인 경우
            for j in range(i+i, n, i): # i이후 i의 배수들을 False 판정
                sieve[j] = False

    # 소수 목록 산출
    return [i for i in range(2, n) if sieve[i] == True]

#42번 2021년 a월 b일은 무슨요일?
def predict_dayoftheweek(a,b):
    dayoftheweek = ['SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT']
    loc = 5
    days = 0
    if (a==1 or 2):
        days = 31 * (a-1) + b -1
    else:
        days = 31 * (a-1) + b -3 - 1*(((a-1) //2) -1) -1
    loc = loc + days % 7
    if(loc > 6):
        loc = loc - 7
    return dayoftheweek[loc]
# import datetime 쓰면 빠르다 return day[datetime.date(2020, a, b).weekday()]

# 문제 44번 각 자리수의 합 , 양의 정수의 각 자리수의 합을구하는 프로그램
def sum_of_number(num):
    count = 0
    while (num>=1):
        count += num % 10
        num = num // 10
    return count
    # integer를 list(map)으로 받아서 푸는 방법도 있음 

# 문제 45번 time 함수 사용하기
# import time
# t = time.time() # 1970년부터 초단위로 흐른 시간
# t = (t // (3600 * 24 * 365)) + 1970
# print(int(t))

# 문제 46번 str 자료형의 응용
def sum_of_all():
    s = ''
    for i in range(101):
        s += str(i)
    result = 0
    for i in s:
        result += int(i)
    return result

# 47번 set 자료형의 응용 (답지에선 set을 활용해서 중복 제거)
def real_number_of_reservation(people):
    new_set = []
    for i in range(len(people)):
        if(people[i] not in new_set):
            new_set.append(people[i])
    return len(new_set)

# 48번 대소문자 바꿔서 출력하기
def change_characterSize(string):
    lists = list(string)
    for i in range(len(lists)):
        if (lists[i].isupper()):
            lists[i] = lists[i].lower()
        else:
            lists[i] = lists[i].upper()
    new_string = ""
    new_string = "".join(lists)
    return new_string

# 49번 최댓값 구하기
def max_of_numbers(numbers):
    numbers.sort()
    return numbers.pop()

# 50번 버블 정렬 구현하기
def bubble(n, data):
    temp = 0
    for i in range(n-1):
        for j in range(n-i-1):
            if data[j] > data[j+1]:
                temp = data[j]
                data[j] = data[j+1]
                data[j+1] = temp
    for i in range(n):
        print(data[i], end=" ")
    

if __name__ == "__main__":
    # people = [
    #      ('이호준', '01050442903'),
    #      ('이호상', '01051442904'),
    #      ('이준호', '01050342904'),
    #      ('이호준', '01050442903'),
    #      ('이준', '01050412904'),
    #      ('이호', '01050443904'),
    #      ('이호준', '01050442903'),
    #      ]
    n = int(input())
    data = list(map(int, input().split()))
    bubble(n,data)