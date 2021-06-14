#include <iostream>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0, count, temp = 0;
    int j = 0;
    while (j < n)
    {
        count = 0; sum=0;
        for (int i = j; i < n; i++)
        {

            sum += arr[i];
            if (sum <= t)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if (count > temp)
        {
            temp = count;
        }
        j++;
    }

    cout << temp ;
    return 0;
}
