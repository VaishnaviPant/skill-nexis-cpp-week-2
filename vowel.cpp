#include <iostream>
using namespace std;

int main()
{
    string text;
    int count = 0;

    cout << "Enter a string: ";
    cin >> text;

    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == 'a' || text[i] == 'e' ||
            text[i] == 'i' || text[i] == 'o' ||
            text[i] == 'u')
        {
            count++;
        }
    }

    cout << "Number of vowels = " << count;

    return 0;
}