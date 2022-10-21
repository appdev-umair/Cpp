#include <iostream>
using namespace std;
class Data
{
private:
    int num;
public:
    void in(){
        cout << "Enter a number: ";
        cin >> num;
    }
    void out(){
        cout << "You enterd: " << num << endl;
    }
};


int main(){
    Data d;
    d.in();
    d.out();
    return 0;
}