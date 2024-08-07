#include <iostream>
using namespace std;

int main()
{
    int a, b, c,sum;
    int *p1 = &a, *p2 = &b, *p3 = &c;
    *p1 = 5, *p2 = 10, *p3 = 20;
    cout << "a : " << *p1 << endl;
    cout << "b : " << *p2 << endl;
    cout << "c : " << *p3 << endl;
    sum = *p1 + *p2 + *p3;
    cout<<"Sum : "<<sum;

    return 0;
}