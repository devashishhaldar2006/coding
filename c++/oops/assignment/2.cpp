#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    int rollNumber;
    string name;
    string dept;
    string course;
    int yearJoined;
    Student(int rollNumber,string name,string dept,string course,int yearJoined){
        this->rollNumber=rollNumber;
        this->name=name;
        this->dept=dept;
        this->course=course;
        this->yearJoined=yearJoined;
    }
    bool checkDept(Student student1,Student student2){
        if(student1.dept==student2.dept){ 
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    //class variables declaration
    Student s1(101,"deva","bio","hindi",2023);
    Student s2(101,"deva","bi","hindi",2023);
    cout<<s1.checkDept(s1,s2);

    
}