#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
    
public:
    // Constructor with initialization list
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
