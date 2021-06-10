#include <bits/stdc++.h>
using namespace std;
int main()
{
    int upper = 0, lower = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            upper++;
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
            lower++;
        }
    }
    if (upper > lower)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s;
    return 0;
}
