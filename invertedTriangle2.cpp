#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        int p = i;
        for (int j = i; j > 0; j--)
        {
            cout << p;
        }
        cout << endl;
    }
    return 0;
}
