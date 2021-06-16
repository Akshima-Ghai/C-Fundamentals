#include <iostream>
using namespace std;
int main()
{
    string s1 = "decimal", s2 = "medicall";
    int arr[25] = {0};
    int i;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        arr[s1[i] - 97] += 1;
    }
    for (i = 0; s2[i] != '\0'; i++)
    {
        arr[s2[i] - 97] -= 1;
        if (arr[s2[i] - 97] < 0)
        {
            cout << "Not a anagram";
            break;
        }
    }
    if (s2[i] == '\0')
    {
        cout << "Given String is an anagram";
    }

    return 0;
}
