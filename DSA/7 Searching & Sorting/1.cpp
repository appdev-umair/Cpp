// Program to search a value in an array using sequential search

#include <iostream>
using namespace std;

class seq_search{

    private:
    int xyz[5];

    public:
    void input(void);
    void search(int);
};

int main(){

    seq_search obj;
    int val;
    system("cls");
    obj.input();
    cout << "Enter a value to search: ";
    cin >> val;
    obj.search(val);
    return 0;
}

void seq_search::input(){
    cout << "Enter 5 values" << endl;
    for(int i = 0; i <= 4; i++){
        cin >> xyz[i];
    }
}

void seq_search::search(int n){

    int i, loc = -1;
    i = 0;
    while(i <= 4){
        if(n == xyz[i]){
            loc = i + 1;
            cout << "Value found at location = " << loc;
            break;
        }
        i++;
    }
    if(loc == -1){
        cout << "Value not found";
    }
}