// Program that inserts and removes data items to and from a simple queue

#include <iostream>
#include <conio.h>

using namespace std;

class queue{

    private:
    int B, F;
    int QU[10];

    public:
    queue(void){
        B = -1;
        F = -1;
    }

    void insert(int);
    void remove(void);
    void display(void);
};
int main(){

    queue obj;
    int n, opt, loop = 1;
    while(loop){
        system("cls");
        cout << "1-Insert value into queue" << endl;
        cout << "2-Remove value from queue" << endl;
        cout << "3-Display values of queue" << endl;
        cout << "4-Exit" << endl;
        cout << "Enter your option [1-4]: ";
        cin >> opt;
        switch (opt)
        {
        case 1:
            cout << "Enter value to insert: ";
            cin >> n;
            obj.insert(n);
            break;
        case 2:
            obj.remove();
            break;
        case 3:
            cout << "Values in queue\n";
            obj.display();
            break;
        default:
            cout << "Invalid Option";
        }
    }

    return 0;
}

void queue::insert(int x){
    if(B >= 9){
        cout << "Queue overflow";
        getch();
        return;
    }
    else{
        B = B + 1;
        QU[B] = x;
    }
    if(F == -1){
        F = 0;
    }
}

void queue::remove(){
    if(F == -1){
        cout << "Queue is empty";
        getch();
        return;
    }
    cout << "Value " << QU[F] << " is removed" << endl;
    getch();
    QU[F] = NULL;
    F = F + 1;
    if(F > B){
        F = B = -1;
    }
}

void queue::display(void){
    if(F == -1){
        cout << "Queue is empty";
        getch();
        return;
    }
    for(int i = F; i <= B; i++){
        cout << QU[i] << endl;
    }
    getch();
}