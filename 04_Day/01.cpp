// Assignment -> Define a Book class with a constructor to initialise its properties (title, author, year), and a method displayInfo.
#include <iostream>
using namespace std;
class Book
{
public:
    string title;
    string author;
    int year;
    Book(string t, string a, int y)
    {
        title = t;
        author = a;
        year = y;
    }

    void displayInfo(){
        cout<<"Book title is : "<<title<<endl;
        cout<<"Book author is : "<<author<<endl;
        cout<<"Book published in "<<year;
    }
};
int main()
{
    Book b("C++", "Aditya" , 2024);
    b.displayInfo();
    return 0;
}