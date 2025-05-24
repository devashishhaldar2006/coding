a=10
b=5
print("the sum of",a,"and",b,"is",a+b)
#we can use format specifer but it is old fashioned way
print("the sum of %d and %d is %d"%(a,b,a+b))
#.format method     {}=placeholders
print("the sum of {} and {} is {}".format(a,b,a+b))
#f strings
print(f"the sum of {a} and {b} is {a+b}")