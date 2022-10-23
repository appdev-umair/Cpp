#include <iostream>

using namespace std;

class Result
{
private:
    string rollNo, name;
    int marks[3];
public:
    void input(){
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll No: ";
        cin >> rollNo;
        cout << "Enter marks of English: ";
        cin >> marks[0];
        cout << "Enter marks of Math: ";
        cin >> marks[1];
        cout << "Enter marks of Geography: ";
        cin >> marks[2];
    }
    void output(){
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks of English: " << marks[0] << endl;
        cout << "Marks of Math: " << marks[1] << endl;
        cout << "Marks of Geography: " << marks[2] << endl;
    }
    int total(){
        return marks[0] + marks[1] + marks[2];
    }
    float average(){
        return (marks[0] + marks[1] + marks[2]) / 3;
    }
};

int main(){
    Result result;
    result.input();
    cout << "Result: " << endl;
    result.output();
    cout << "Total marks: " << result.total() << endl;
    cout << "Average marks: " << result.average() << endl;
    return 0;
}