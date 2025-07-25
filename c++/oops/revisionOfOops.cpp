#include<iostream>
#include<string>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float marks;
    Student(string name,int rno,float marks){
        this->marks=marks;
        this->name=name;
        this->rno=rno;
    }
};
// void change(Student s){//pass by value
//     s.name="gahgav";
// }
void change(Student &s){//pass by reference
    s.name="gahgav";
}
// void change(Student &s){//pass by reference
//     s.name="gahgav";
// }
void change(Student* s){//pass by reference
    s->name="gahgav";
}
int main(){
//    Student s("raghav",76,92.6);
   Student* s=new Student("raghav",76,92.6);
//    s.name="Raghav Garg";
//    s.no=78;
//    s.marks=92.6;
    change(s);
    // cout<<s.name;    
    cout<<s->name;    
}