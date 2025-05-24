myList=[3,3,23,23,23,43,4,35,4]
myList2=[3,3,4,35,4]
myList.append(45)
print(myList)
myList.insert(2,54)
print(myList)
myList.extend(myList2)
print(myList)
print(myList.pop(3))
myList.clear()#removes all elements
print(myList)

myList=[3,3,23,23,23,43,4,35,4]
del myList#removes structure
# print(myList)

myList=[3,3,23,23,23,43,4,35,4]
myList[5]=78
print(myList)

l1=[3,7,5]
myList[3:6]=l1
print(myList)

myList.sort()
print(myList)

myList.sort(reverse=True)
print(myList)

print(max(myList))
print(min(myList))
print(sum(myList))