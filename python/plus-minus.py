def pm(arr):
    p,n,z=0,0,0 
    for i in arr:
        if i<0:
            n+= 1
        elif i>0:
            p+=1
        else:
            z+=1
    p1 = p /len(arr)
    n1 = n /len(arr)
    z1 = z / len(arr)
    print(float(p1))
    print(float("{:.7f}".format(n1)))
    print(float("{:.7f}".format(z1)))
    return arr

arr = [-4,3,-9,0,4,1]
pm(arr)


#output 
 # 0.500000
 # 0.333333
 # 0.166667 
