#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    static int totalStudents;  // Static data member
    static string schoolName;  // Static data member
    
public:
    // Constructor
    Student(string n, int roll) {
        name = n;
        rollNo = roll;
        totalStudents++;  // Increment count for each object created
        cout << "Student created: " << name << endl;
    }
    
    // Destructor
    ~Student() {
        totalStudents--;  // Decrement count when object is destroyed
        cout << "Student destroyed: " << name << endl;
    }
    
    // Static member function
    static int getTotalStudents() {
        return totalStudents;
    }
    
    // Static member function
    static void setSchoolName(string school) {
        schoolName = school;
    }
    
    // Static member function
    static string getSchoolName() {
        return schoolName;
    }
    
    // Regular member function
    void display() {
        cout << "Name: " << name << ", Roll: " << rollNo << endl;
        cout << "School: " << schoolName << endl;
    }
    
    // Static member function to display statistics
    static void displayStats() {
        cout << "Total Students: " << totalStudents << endl;
        cout << "School Name: " << schoolName << endl;
        // Note: Cannot access non-static members here
        // cout << name;  // This would cause compilation error
    }
};

// Static member initialization (must be done outside class)
int Student::totalStudents = 0;
string Student::schoolName = "Default School";

int main(){
    
}
