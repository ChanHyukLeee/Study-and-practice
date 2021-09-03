# https://leetcode.com/problems/valid-palindrome/
# palindrome = 회문
# 1st answer : list
# from collections import deque
# import collections

# class Solution:
#     def isPalindrome(self, s: str) -> bool:
#         strs = []
#         for char in s:
#             if char.isalnum(): # 영문자 숫자 여부 판별
#                 strs.append(char.lower())

#         while len(strs) > 1:
#             if strs.pop(0) != strs.pop(): # pop은 제거하면서 return 값 반환
#                 return False
#         # if list is pass then return True
#         return True
 
 #2nd answer : deque
 # 데크로 선언하면 리스트 풀이대비 더 빨라진다.
 # 단 데크는 index 접근이 불가 -> 리스트가 빠름
 # 시작점, 끝점 활용하는 문제에서 월등한 실력을 보이는듯
# class Solution:
#     def isPalindrome(self, s: str) -> bool:
#         strs: deque = collections.deque()

#         for char in s:
#             if char.isalnum():
#                 strs.append(char.lower())
        
#         while len(strs)>1:
#             if strs.popleft() != strs.pop():
#                 return False
#         return True

# 3rd answer : 슬라이싱, 문자열 뒤집기
# import re
# class Solution:
#     def isPalindrome(self, s: str) -> bool:
#         s = s.lower()
#         s = re.sub('[^a-z0-9]', '', s) # 정규표현식
#         return (s == s[::-1]) 

# https://leetcode.com/problems/reverse-string/
# 1st answer : swap using two pointer
# class Solution:
#     def reverseString(self, s: List[str]) -> None:
#         """
#         Do not return anything, modify s in-place instead.
#         """
#     left, right = 0, len(s) - 1
#     while left < right:
#         s[left], s[right] = s[right], s[left]
#         left+=1
#         right-=1
# 2nd answer : s.reverse()
# 3rd answer: s = s[::-1]

# https://leetcode.com/problems/reorder-data-in-log-files
# 로그 파일 재정렬
# logs = ["dig1 8 1 5 1", "let1 art can", "dig2 3 6", "let2 own kit dig", "let3 art zero"]
# 문자 > 숫자, 숫자는 입력순서대로, 
# def reorderLogFiles(self, logs: list[str]) -> list[str]:
#     letters, digits = [],[]
#     for log in logs:
#         if log.split()[1].isdigit(): # 숫자면
#             digits.append(log) #digit에 넣기
#         else : #문자면
#             letters.append(log) # letter에 넣기
        
#     letters.sort(key=lambda x: (x.split()[1:], x.split()[0]))
#     # key를 쓰면 조건에 맞게 sort 가능
#     return letters + digits # list끼리 더하면 차례대로 이어진다.

# https://leetcode.com/problems/most-common-word/
# 흔하게 등장하는 단어 찾기
# 1st answer: 리스트 컴프리헨션 counter 객체사용
# import re, collections
# def mostCommonWord(self, paragraph: str, banned: list[str]) -> str:
#     words = [word for word in re.sub(r'[^\w]', ' ', paragraph)
#         .lower().split()
#             if word not in banned]
    
#     counts = collections.Counter(words)
#     return counts.most_common(1)[0][0]

# https://leetcode.com/problems/group-anagrams/
# 1st answer: 정렬하여 딕셔너리에 추가
import collections
def groupAnagrams(self, strs: list[str]) -> list[list(str)]:
    anagrams = collections.defaultdict(list)
    for word in strs:
        anagrams[''.join(sorted(word))].append(word)
    return anagrams.values()
