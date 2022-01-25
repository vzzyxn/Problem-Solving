# Compare the Triplets algorithm

def compareTriplets(a,b):
    count_a=0
    count_b=0
# [0]
    if a[0] > b[0]:
        count_a+=1
    elif a[0] < b[0]:
        count_b+=1
    else:
        count_a+=0
        count_b+=0
# [1]
    if a[1] > b[1]:
        count_a+=1
    elif a[1] < b[1]:
        count_b+=1
    else:
        count_a+=0
        count_b+=0
# [2]
    if a[2] > b[2]:
        count_a+=1
    elif a[2] < b[2]:
        count_b+=1
    else:
        count_a+=0
        count_b+=0
    print(f"A = {count_a}, B = {count_b}")
    return count_a,count_b

#drive
compareTriplets(a=[17,28,30],b=[99,16,8])
