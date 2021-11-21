#algorithm to find the staircase
def hasH(x):
    x = 6
    i = 0 
    while(i<x):
        i = i + 1
        print(str(i * '#').rjust(x))

x = int(input().strip())
hasH(x)


# sample input  = 6 , height = 6, base = 6

# sample output 
            # 
           ##
          ###
         ####
        #####
       ######

































