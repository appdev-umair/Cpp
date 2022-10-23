#include <iostream>

using namespace std;

class Marks{
    private:
    int m1, m2, m3;
    public:
    void in(){
        cout << "Enter marks of subject 1: ";
        cin >> m1;
        cout << "Enter marks of subject 2: ";
        cin >> m2;
        cout << "Enter marks of subject 3: ";
        cin >> m3;
    }

    int sum(){
        return m1 + m2 + m3;
    }

    float average(){
        return (m1 + m2 + m3) / 3.0;
    }

};

int main(){

    Marks st1;
    st1.in();
    cout << st1.sum() << endl;
    cout << st1.average() << endl;
}