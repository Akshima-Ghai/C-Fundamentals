#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int word = 1;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' && s[i - 1] != ' ')
        {
            word++;
        }
    }
    cout << "Number of Words are " << word;
    return 0;
}
