#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 65; i < 65 + n; i++)
    {
        for (int j = 0; j <= i - 65; j++)
        {
            cout << char(i + j);
        }
        cout << endl;
    }
    return 0;
}
