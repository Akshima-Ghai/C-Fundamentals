#include <iostream>
using namespace std;
int main()
{
    string str = "gfg";
    // way 1 for traversing
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i];
    }
    cout << endl;

    // way 2 for traversing
    for (char x : str)
    {
        cout << x;
    }
    cout << endl;

    // way 3 for traversing
    for (auto it = str.begin(); it != str.end(); it++)
    {
        cout << (*it);
    }
    return 0;
}