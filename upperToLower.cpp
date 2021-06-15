#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    cout << "Converting Upper to Lower Case" << endl;
    for (int i = 0; s[i] != '\0'; i++)
    {
        s[i] += 32;
    }
    cout << s;
    return 0;
}
