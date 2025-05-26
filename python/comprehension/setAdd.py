mySet=set()#empty set
myList=[1,6,2,12,17,13,18]

for i in myList:
    mySet.add(i*5)
print(mySet)


mySet=set()
myList=[1,6,2,12,17,13,18]
mySet={x*5 for x in myList if x%2==0}
print(mySet)    