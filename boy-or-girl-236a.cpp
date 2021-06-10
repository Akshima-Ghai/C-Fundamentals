#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    int count = 0;
    cin >> s;
    int l = s.size();
    sort(s.begin(), s.end());
    for (int i = 0; i < l; i++)
    {
        if (s[i] != s[i + 1])
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
}
