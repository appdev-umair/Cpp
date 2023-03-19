// This program computes the sum of array

#include <iostream>
using namespace std;

class sum{
    private:
    int xyz[5], s;

    public:
    sum(){
        s = 0;
    }

    void input(){
        cout << "Enter 5 values & press Enter after typing each value\n";
        for(int i = 0; i <= 4; i++){
            cin >> xyz[i];
        }
    }

    void compute_sum(){
        for(int i = 0; i <= 4; i++){
            s = s + xyz[i];
        }
        cout << "Sum = " << s;
    }
};

int main(){
    sum obj;
    system("cls");
    obj.input();
    obj.compute_sum();
    return 0;
}