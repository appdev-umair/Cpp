// Program to find the factorial of a given number using loop statement

#include <iostream>
using namespace std;

class factorial{

    public:
    int Fact(int n){
        int f = 1;
        if(n == 0){
            return f;
        }
        else{
            for(; n > 1; n--){
                f = f * n;
            }
        }
        return f;
    }
};

int main(){

    factorial obj;
    system("cls");
    int val, res;
    cout << "Enter value to find factorial: ";
    cin >> val;
    res = obj.Fact(val);
    cout << "Factorial of " << val << " is " << res;
    
    return 0;
}

