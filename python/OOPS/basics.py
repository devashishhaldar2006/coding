class Student:
    def __init__(self,rno,name,age):#constructor is called automatically(used to initialize)
        self.rno=rno
        self.name=name#initialization of the attributes
        self.age=age
    def display(self):#you have to call this method
        print("roll no:",self.rno)
        print("name:",self.name)
        print("age:",self.age)
        
objStd1=Student(12,"deva",17)
objStd2=Student(10,"lalit",19)
objStd3=Student(13,"khargosh",45)

objStd1.display()
objStd2.display()
objStd3.display()