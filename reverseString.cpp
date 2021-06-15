// #include <iostream>
// using namespace std;
// int main()
// {
//     string s = "python";
//     char a[7];
//     int j = 0;
//     for (int i = 5; i >= 0; i--)
//     {
//         a[j] = s[i];
//         j++;
//     }
//     a[j] = '\0';
//     cout << a;

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    string s = "python";
    char t;
    int j = 5;
    for (int i = 0; i < j; i++)
    {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
        j--;
    }
    cout << s;
    return 0;
}
