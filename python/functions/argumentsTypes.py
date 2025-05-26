#positional argument
def pos(a,b):
    sum=a+b
    return sum
print(pos(3,4))

#keyword argument
def keyword(a,b):
    sum=a-b
    return sum
print(keyword(b=3,a=4))

#default argument
def keyword(a,b=7):
    sum=a-b
    return sum
print(keyword(4))

#variable length argument
def keyword(*nums):
    total=sum(nums)
    return total
print(keyword(1,1,3,1,31))