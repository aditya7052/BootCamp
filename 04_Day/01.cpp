// Assignment -> Define a Book class with a constructor to initialise its properties (title, author, year), and a method displayInfo.
#include <iostream>
using namespace std;
class Book
{
// public:
private:
    string title;
    string author;
    int year;

    void getTitle(string t){
        title=t;
    }
    string setTitle(){
        return title;
    }

    void getAuthor(string a){
        author=a;
    }
    string setAuthor(){
        return author;
    }

    void getYear(int y){
        year=y;
    }
    int setYear(){
        return year;
    }



public:
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