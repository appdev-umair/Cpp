#include <iostream>

using namespace std;

class Circle{
    private:
    float radius;
    public:
    void setRadius(float Radius) { radius = Radius;}
    void area(){
        cout << "The area of the circle is " << 3.14 * radius * radius << endl;
    }
    void circumference(){
        cout << "The circumference of the circle is " << 2*3.14 * radius << endl;
    }

};

int main(){
    Circle c;
    c.setRadius(5);
    c.area();
    c.circumference();
    return 0;
}