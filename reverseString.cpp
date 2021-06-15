#include <iostream>
using namespace std;
int main()
{
    string s = "python";
    char a[7];
    int j = 0;
    for (int i = 5; i >= 0; i--)
    {
        a[j] = s[i];
        j++;
    }
    cout << a;

    return 0;
}
