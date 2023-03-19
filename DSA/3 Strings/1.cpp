// Program that computes the length of a string

#include <iostream>
using namespace std;

class Strlen{

    public:
    int len(char str[]){
        int c;
        for(c = 0; str[c] != '\0'; c++);
        return c;
    }
};

int main(){

    Strlen obj;
    system("cls");
    char s[80];
    cout << "Enter string: ";
    cin >> s;
    cout << "Length of string is = " << obj.len(s);
    return 0;
}