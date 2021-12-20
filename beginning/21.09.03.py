# 파이썬 자료구조와 알고리즘 5-6단원

# 클래스에 object 인수를 넣자
class symbol(object):
    def __init__(self, value):
        self.value = value
    
    def __eq__(self, other): # 객체 비교
        if isinstance(self, other.__class__):
            return self.value == other.value
        else:
            return NotImplemented

    def __hash__(self): # 해시 가능하게 -> set에서 써먹을 수 있음
        return hash(self.value)

import math
class point(object):
    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y
    
    
    def distance_from_origin(self):
        return math.hypot(self.x, self.y)
    
    def __eq__(self, other):
        return self.x == other.x and self.y == other.y
    
    def __repr__(self):
        return "point ({0.x!r},{0.y!r})".format(self)
    
    def __str__(self):
        return "({0.x!r},{0.y!r})".format(self)

class C:
    def __init__(self,name):
        self.name = name
    @property
    def name(self):
        return self.name
    @name.setter
    def name(self, new_name):
        self.name = "{0} >> {1}".format(self.name, new_name)

from threading import Thread, Lock
import threading

def worker(mutex, data, thread_safe):
    if thread_safe:
        mutex.acquire()
    try:
        print("스레드 {0}: {1}\n".format(threading.get_ident(),data))
    finally:
        if thread_safe:
            mutex.release()

if __name__ == "__main__":
    threads = []
    thread_safe = False
    mutex = Lock()
    for i in range(20):
        t = Thread(target= worker, args =(mutex, i, thread_safe))
        t.start()
        threads.append(t)
    for t in threads:
        t.join()
    # x = symbol("py")
    # y = symbol("py")

    # symbols = set()
    # symbols.add(x)
    # symbols.add(y)

    # print(x is y)
    # print(x == y)
    # print(len(symbols))



# 해시가능하지 않다 == 가변 객체

# @classmethod <-> @staticmethod
# @staticmethod :클래스에서 직접 접근가능, self 필요없이 접근가능
# @classmethod : self대신 cls 사용 
# 둘의 차이는 static은 부모 클래스의 속성값을 가져오고 class는 현재 클래스 속성을 가져옴

# 읽기 전용은 리스트 대신 튜플을 사용하자
# 반복문에서 항목이 많은 리스트나 튜플 대신 제너레이터를 사용해서 순회하자
# 문자열 + 쓰지 말고, 리스트에 append하고 join하자.