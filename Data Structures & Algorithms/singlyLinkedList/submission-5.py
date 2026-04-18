class LinkedList:
    # O(1)
    def __init__(self):
        self.index = 0
        self.List = [] 

    # O(1)
    def get(self, index: int) -> int:
        if self.List == []: return -1 
        if index >= len(self.List): return -1 
        return self.List[index]
    # O(n)
    def insertHead(self, val: int) -> None:
        new_list = []
        new_list.append(val)
        
        for i in range(len(self.List)):    
            new_list.append(self.List[i])
        self.List = new_list

    # O(1)
    def insertTail(self, val: int) -> None:
       self.List.append(val)

    # O(1)
    def remove(self, index: int) -> bool:
        if index >= len(self.List): return False 
        if self.List == []: return False
        self.List.pop(index)
        return True

    # O(1)
    def getValues(self) -> List[int]:
        return self.List
