#include <iostream>
using namespace std;

int linearSearch(int a[], int n)
{
    int i;
    for (i = 0; i < 6; i++)
    {
        if (a[i] == n)
        {
            cout << "Element is found at position " << i;
            break;
        }
    }
    if (i == 6)
    {
        cout << "Element is not present in the array";
    }
}

int main()
{
    int arr[] = {1, 3, 5, 2, 4, 7};
    int num;
    cin >> num;
    linearSearch(arr, num);
    return 0;
}
