#expected input = [2,4,3,5]
#expected output = [2,3,4,5]
def swap(newList):
    # temp = 4 
    temp = newList[1]
    # 4 = 3  
    newList[1] = newList[2]
    # 3 = 4 
    newList[2] = temp

    return newList

newList = [2,4,3,5]
print(swap(newList))

