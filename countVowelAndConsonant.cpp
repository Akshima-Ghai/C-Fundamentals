#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int vcount = 0, ccount = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U')
        {
            vcount++;
        }
        else if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
        {
            ccount++;
        }
    }
    cout << "Number of Vowels in the String are " << vcount << endl;
    cout << "Number of COnsonants in the String are " << ccount << endl;
    return 0;
}
