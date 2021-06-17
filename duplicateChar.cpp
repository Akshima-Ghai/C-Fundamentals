#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.size();
    int arr[26] = {0};
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (s[i] == s[j])
            {
                arr[s[i] - 'a']++;
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 1)
        {
            cout << arr[i] << endl;
        }
    }
    return 0;
}
