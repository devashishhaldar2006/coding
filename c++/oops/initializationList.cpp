#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
    
public:
    // Constructor with initialization list
    // This constructor uses an initialization list to directly
    // initialize the member variables x and y.
    // The syntax is: Point(int a, int b) : x(a), y(b) {
    // This is more efficient than setting the member variables
    // in the constructor body, as it avoids unnecessary
    // copies of the member variables.
    Point(int a, int b) : x(a), y(b) {
        cout << "Point constructed with x=" << x << ", y=" << y << endl;
    }
    
    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    Point p1(10, 20);
    p1.display();
    return 0;
}
