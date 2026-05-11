class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class MinStack:
    def __init__(self):
        self.stack = []
        self.min = None

    def push(self, val: int) -> None:
        if (not self.stack):
            self.stack.append(ListNode(val))
            self.min = val
        else:
            self.stack.append(ListNode(val, self.min))
            if val<self.min:
                self.min = val


    def pop(self) -> None:
        if self.top() == self.min:
            self.min = self.stack[-1].next
        self.stack.pop()
        

    def top(self) -> int:
        return self.stack[-1].val
        

    def getMin(self) -> int:
        return self.min
 