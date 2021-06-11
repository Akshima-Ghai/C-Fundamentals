#include <iostream>
using namespace std;

int reverseBinarySearch(int arr[], int n, int ele)
{
    int start = 0, end = n - 1, res;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == ele)
        {
            res = mid;
            end = mid - 1;
        }
        else if (arr[mid] < ele)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ele;
    cin >> ele;
    cout << reverseBinarySearch(arr, n, ele);
    return 0;
}
