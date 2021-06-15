#include <iostream>
using namespace std;
int main()
{
    string s1 = "Painter", s2 = "Painting";
    int i, j;
    for (i = 0, j = 0; s1[i] != '\0' && s2[i] != '\0'; i++, j++)
    {

        if (s1[i] == s2[i])
        {
            cout << "Equal";
            break;
        }
        else if (s1[i] > s2[i])
        {
            cout << "Greater";
            break;
        }
        else
        {
            cout << "Smaller";
            break;
        }
    }
    return 0;
}
