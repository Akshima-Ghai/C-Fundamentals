#include <iostream>
using namespace std;
int main()
{
    string str = "geeksforgeeks";
    int res = str.find("eek");
    if (res == string::npos)
    {
        cout << "Not Present";
    }
    else
    {
        cout << "First Occurence is at index " << res;
    }
}