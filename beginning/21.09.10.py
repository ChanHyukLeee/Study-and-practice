# stack 구현
class Stack(object):
    def __init__(self):
        self.items = []

    def isEmpty(self):
        return not bool(self.items)

    def push(self, value):
        self.items.append(value)
    
    def pop(self):
        value = self.items.pop()
        if value is not None:
            return value
        else:
            print("stack is empty")
    
    def size(self):
        return len(self.items)
    
    def peek(self):
        if self.items:
            return self.items[-1]
        else:
            print("stack is empty")
    
    def __repr__(self):
        return repr(self.items)

class Node(object):
    def __init__(self, value= None, pointer = None):
        self.value = value
        self.pointer = pointer

class Stack1(object):
    def __init__(self):
        self.head = None
        self.count = 0
    
    def isEmpty(self):
        return not bool(self.head)
    
    def push(self, item):
        self.head = Node(item, self.head)
        self.count += 1
    
    def pop(self):
        if self.count >0 and self.head:
            node = self.head
            self.head = node.pointer
            self.count -= 1
            return node.value
        else:
            print("stack is empty")
    
    def peek(self):
        if self.count >0 and self.head:
            return self.head.value
        else:
            print("stack is empty")
    
    def size(self):
        return self.count
    
    def _printList(self):
        node = self.head
        while node:
            print(node.value, end = '')
            node = node.pointer
        print()

class Queue(object):
    def __init__(self):
        self.items=[]
    
    def isEmpty(self):
        return not bool(self.items)
    
    def enqueue(self, item):
        self.items.insert(0, item)
    
    def dequeue(self):
        value = self.items.pop()
        if value is not None:
            return value
        else:
            print("queue is empty")
    
    def size(self):
        return len(self.items)

    def peek(self):
        if self.items:
            return self.items[-1]
        else:
            print("queue is empty")
        
    def __repr__(self):
        return repr(self.items)

class Queue_from_two_stack(object):
    def __init__(self):
        self.in_stack=[]
        self.out_stack = []
    
    def _transfer(self):
        while self.in_stack:
            return self.out_stack.append(self.in_stack.pop())

    def isEmpty(self):
        return not (bool(self.in_stack) or bool(self.out_stack))
    
    def enqueue(self, item):
        return self.in_stack.append(item)
    
    def dequeue(self):
        value = self.items.pop()
        if value is not None:
            return value
        else:
            print("queue is empty")
    
    def size(self):
        return len(self.items)

    def peek(self):
        if not self.out_stack:
            self._transfer()
        if self.out_stack:
            return self.out_stack[-1]
        else:
            print("No queue")
        
    def __repr__(self):
        if not self.out_stack:
            self._transfer()
        if self.out_stack:
            return repr(self.out_stack)
        else:
            print("No queue")


if __name__ == "__main__":
    stack = Stack1()
    for i in range(10):
        stack.push(i)
    stack._printList()
    print("스택 크기 : {0}".format(stack.size()))
    print("peek : {0}".format(stack.peek()))
    print("pop : {0}".format(stack.pop()))
    print("peek : {0}".format(stack.peek()))
    print("empty? : {0}".format(stack.isEmpty()))
    stack._printList()
