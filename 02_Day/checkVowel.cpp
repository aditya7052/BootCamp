// check vowel or consonant -> take char as user input
#include <iostream>
using namespace std;

void checkVowel(char alpha)
{
    if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u' || alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U')
    {
        cout << alpha << " is vowel." << endl;
    }
    else
    {
        cout << alpha << " is consonant.";
    }
}

int main()
{
    char ch;
    cin >> ch;
    checkVowel(ch);
    return 0;
}