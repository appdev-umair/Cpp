#include <iostream>
using namespace std;

class Data{
    private:
    int data;
    public:
    Data(){
        data = 0;
    }
    void showData(){
        cout << "Data: " << data << endl;
    }
    void operator ++(){
        data++;
    }
};

int main(){
    Data d;
    d.showData();
    ++d;
    d.showData();
    ++d;
    d.showData();
    return 0;

}