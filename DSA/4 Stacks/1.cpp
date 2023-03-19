// Program to push and pop items in a stack


#include <iostream>
#include <conio.h>

using namespace std;

class stack{

    private:
    int top;
    int stk[5];

    public:
    stack(void){
        top = -1;
    }
    void push(int);
    void pop(void);
    void display(void);
};

int main(){
    stack st;
    int n, opt, loop = 1;
    while(loop){
        system("cls");
        cout << "1-Pushing stack" << endl;
        cout << "2-Poping stack" << endl;
        cout << "3-Display stack" << endl;
        cout << "4-Exit" << endl;
        cout << "Enter your option [1-4]";
        cin >> opt;
        switch (opt)
        {
        case 1:
            cout << "Enter value to inset: ";
            cin >> n;
            st.push(n);
            break;
        case 2:
            st.pop();
            break;
        case 3:
            cout << "Values in stack" << endl;
            st.display();
            break;
        case 4:
            loop = 0;
            break;
        default:
            cout << "Invalid option";
        }
    }
    return 0;
}

void stack::push(int x){
    if(top == 4){
        cout << "Stack overflow";
        getch();
        return;
    }
    top = top + 1;
    stk[top] = x;
}

void stack::pop(void){
    int val;
    if(top == -1){
        cout << "Stack is empty";
        getch();
        return;
    }
    val = stk[top];
    stk[top] = NULL;
    top = top - 1;
    cout << "Value " << val << " is removed " << endl;
    getch();
}

void stack::display(void){
    if(top == -1){
        cout << "Stack is empty";
        getch();
        return;
    }
    for(int x = top; x >= 0; x--)
    cout << stk[x] << endl;
    getch();
}