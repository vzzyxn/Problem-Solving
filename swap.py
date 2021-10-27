def swap(newList):

    temp = newList[1]
    newList[1] = newList[2]
    newList[2] = temp

    return newList

newList = [2,4,3,5]
print(swap(newList))

