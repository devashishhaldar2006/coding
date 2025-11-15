#include<iostream>
using namespace std;
// Q1. Create a class ‘date’ that contains three members namely date, month and year. Create 2 objects of this class with different dates and now compare the two. If the dates are equal then display message as "Equal" otherwise "Unequal". Use Getters & Setters. *Note : The function should be a member function of this class.
class Date{
private:
    int date;
    int month;
    int year;
public:
    void setDate(int date){
        this->date=date;
    }
    void setMonth(int month){
        this->month=month;
    }
    void setYear(int year){
        this->year=year;
    }
    int getDate(){
        return date;
    }
    int getMonth(){
        return month;
    }
    int getYear(){
        return year;
    }
};

int main(){
    Date d1;
    d1.setDate(10);
    d1.setMonth(2);
    d1.setYear(2023);
    Date d2;
    d2.setDate(10);
    d2.setMonth(2);
    d2.setYear(2022);
    cout<<endl;
    if(d1.getDate()==d2.getDate() && d1.getMonth()==d2.getMonth() && d1.getYear()==d2.getYear()){
        cout<<"Dates are equal";
    }
    else{
        cout<<"Dates are not equal";
    }


}