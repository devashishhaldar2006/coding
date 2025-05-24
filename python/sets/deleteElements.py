mySet={2,4,242,32,5}
print(mySet)
mySet.remove(4)#if there is no 32 in set u will get a error
print(mySet)


mySet.discard(32)#if there is no 32 in set u wont get a error
print(mySet)


print(mySet.pop())

mySet.clear()
print(mySet)

del mySet#structure deleted
print(mySet)#error