#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int star = n;
    for (int i = 1; i <= n; i++)
    {
        int p = n;
        for (int j = 1; j <= n; j++)
        {

            if (j == star)
            {

                p--;
                cout << "*";
                continue;
            }
            cout << p;
            p--;
        }
        star--;
        cout << endl;
    }
    return 0;
}
