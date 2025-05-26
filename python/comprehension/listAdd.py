myList=[]
for x in range(1,10):
    myList.append(x**3)
print(myList) 

myList=[]
myList=[x**3 for x in range(1,10)]
print(myList)   

myList=[]
myList=[x**3 for x in range(1,10) if x%2==0]
print(myList)   