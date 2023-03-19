// Program to add two numbers

#include <iostream>
using namespace std;

class add{
    private:
    int a, b, s;
    public:
    void input(){
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
    }

    void print(){
        s = a + b;
        cout << "Sum = " << s;
    }
};

int main(){

    add obj;
    system("cls");
    obj.input();
    obj.print();

    return 0;
}