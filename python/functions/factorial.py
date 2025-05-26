def fact(n):
    f=1
    for i in range(1,n+1):
        f*=i
    return f
#main
print(fact(6))