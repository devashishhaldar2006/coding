myDict={'empId':123,"empName":'deva',"empSalary":12300}
print(myDict)

print(myDict["empId"])
print(myDict.keys())#in form of list
print(myDict.values())#in form of list
print(myDict.items())#in form of list
print(len(myDict))


myDict['age']=54
print(myDict)

myDict.update({'join-date':8})
print(myDict)
print(myDict.pop('empName'))
# print(myDict.clear())


# del myDict
# print(myDict)#error