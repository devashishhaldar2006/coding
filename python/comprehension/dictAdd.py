myDict={}
myList=[1,2,3,4,5,6]
myDict={x:x**3 for x in myList if x%2==0}
print(myDict)
   
myDict={1:1,2:2,3:3,4:4}
mynewDict={x:x**3 for (x,x) in myDict.items()}
print(mynewDict)   