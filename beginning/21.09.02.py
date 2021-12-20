# 파이썬 자료구조와 알고리즘
# 최대공약수
def finding_gcd(a, b):
    while (b != 0):
        result =b
        a,b = b, a%b
    return result

def find_fibonacci_iter(n):
    if n<2:
        return n
    a,b = 0, 1
    for i in range(n):
        a, b = b, a+b
    return a

# 문자열
# " ".join(lists) -> 리스트문자열을 단일 문자열로
# string.ljust(50, '-') -> 50개 만큼 - 채워놈
# 문자열 unpacking : local variable을 format형식으로 사용가능
# hero = "버피", number =999
# "{number}": "{hero}".format(**locals())
# 이외에도 split(), strip()

# 문자열 반전하기
def reverse_string(a):
    return a[::-1]
    # or a= a[-1] + reverse_string(a[:-1])

# 단어만 반전
def reverse_word(string1):
    new_string, string_list = [], []
    string_list= string1.split(" ")
    for i in range(len(string_list)):
        new_string.append(string_list.pop())
    return  " ".join(new_string)

#문자열 압축
def str_compression(s):
    count, last = 1, ""
    list_aux = []
    for i, c in enumerate(s): # set을 unpack
        if last == c:
            count += 1
        else:
            if i!=0:
                list_aux.append(str(count))
            list_aux.append(c)
            count = 1
            last = c
    list_aux.append(str(count))
    return "".join(list_aux)

def perm(s):
    s_list = []
    if(len(s)<2):
        return s
    for i, c in enumerate(s):
        for cc in perm(s[:i] + s[i+1:]):
            s_list.append(c+cc)
    return s_list

import collections

def find_top_N_recurring_words(seq, N):
    dcounter = collections.Counter()
    for word in seq.split():
        dcounter[word] += 1
    return dcounter.most_common(N)

def is_anagram(s1, s2):
    dcounter = collections.Counter()
    for c in s1:
        dcounter[c] += 1
    for c in s2:
        dcounter[c] -= 1
    if c == {}:
        return print("True")
    else:
        return print("False")

def find_dice_probabilities(S, n_faces=6):
    if (S>2*n_faces or S<2):
        return None
    cdict = collections.Counter()
    ddict = collections.defaultdict(list)
    for dice1 in range(1, n_faces+1):
        for dice2 in range(1, n_faces+1):
            t = [dice1, dice2]
            cdict[dice1 + dice2] += 1
            ddict[dice1 + dice2].append(t)
    return ddict[S]

import string
def delete_duplicate_char(str1):
    cdict= {key:0 for key in string.ascii_lowercase}
    for c in str1:
        cdict[c] += 1
    for a,b in cdict.items():
        if(b >= 2):
            str1 =str1.replace(a, "")
    return str1


if __name__ == "__main__":
    print(delete_duplicate_char("google"))