t=int(input())
for i in range(t):
    n=int(input())
    if(n<=2):
        print(1)
    else:
        i=1 
        while(not(1<<i <= n< 1<<i+1)):
            i+=1 
        print(max(n+1-(1<<i),(1<<i)-(1<<(i-1))))