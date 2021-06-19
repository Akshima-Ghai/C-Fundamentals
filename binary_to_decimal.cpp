#include <iostream>
using namespace std;
int main()
{
    //binary
    string n;
    cin >> n;
    int ans = 0;
    int base = 1;
    int num = n.length() - 1;
    for (int i = num; i >= 0; i--)
    {
        ans += (n[i] * base);
        base = base * 2;
    }
    cout << ans;
    return 0;
}
