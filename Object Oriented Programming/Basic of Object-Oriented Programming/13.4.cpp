#include <iostream>

using namespace std;

class Book{
    private:
    int bookId, pages, price;
    public:
    void get(){
        cout << "Book ID: ";
        cin >> bookId;
        cout << "Pages: ";
        cin >> pages;
        cout << "Price: ";
        cin >> price;
    }
    void showData(){
        cout << "Book ID: " << bookId << endl;
        cout << "Pages: " << pages << endl;
        cout << "Price: " << price << endl;
    }
    void set(int bookId, int pages, int price){
        this->bookId = bookId;
        this->pages = pages;
        this->price = price;
    }
    int getPrice(){
        return price;   
    }
};

int main(){
    Book book1, book2;
    book1.get();
    book2.set(2, 199, 2999);
    cout << "Most expensive book is: " << endl;
    if(book1.getPrice() > book2.getPrice()){
        book1.showData();
    }
    else{
        book2.showData();
    }

}