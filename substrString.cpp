#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int start = 0, end = s.length();
    for (int i = start; i < end; i++)
    {
        for (int j = i; j < end; j++)
        {
            cout << s.substr(i, j + 1) << " ";
        }
    }

    return 0;
}
