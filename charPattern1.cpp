#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 'A'; j < n + 'A'; j++)
        {
            cout << char(j);
        }
        cout << endl;
    }
    return 0;
}
