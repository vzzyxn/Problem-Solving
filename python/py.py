#Plus - Min
#        Algorithm 
# 1 >>> 2 + 3 + 4 + 5 = 14
# 2 >>> 1 + 3 + 4 + 5 = 13 
# 3 >>> 1 + 2 + 4 + 5 = 12 
# 4 >>> 1 + 2 + 3 + 5 = 11
# 4 >>> 1 + 2 + 3 + 4 = 10

def mMs(arr):
    a = arr[1] + arr[2] + arr[3] + arr[4] 
    b = arr[0] + arr[2] + arr[3] + arr[4] 
    c = arr[0] + arr[1] + arr[3] + arr[4]
    d = arr[0] + arr[1] + arr[2] + arr[4] 
    e = arr[0] + arr[1] + arr[2] + arr[3]

    x = min(a,b,c,d,e) 
    y = max(a,b,c,d,e)
    print(x,y)
    return a,b,c,d,e 

arr = [1,2,3,4,5]
mMs(arr)


#output = 10 14 










