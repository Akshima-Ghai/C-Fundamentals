#include <iostream>
using namespace std;

int valid(string name)
{
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (!(name[i] >= 65 && name[i] <= 90) &&
            !(name[i] >= 97 && name[i] <= 127) &&
            !(name[i] >= 48 && name[i] <= 57))
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    string s;
    getline(cin, s);
    if (valid(s))
    {
        cout << "Valid String";
    }
    else
    {
        cout << "Invalid String";
    }

    return 0;
}
