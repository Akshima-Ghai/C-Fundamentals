#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int ele)
{
    int start = 0, end = n - 1, first;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == ele)
        {
            first = mid;
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
    return first;
}

int lastOccurence(int arr[], int n, int ele)
{
    int start = 0, end = n - 1, last;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == ele)
        {
            last = mid;
            start = mid + 1;
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
    return last;
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
    int first = firstOccurence(arr, n, ele);
    int last = lastOccurence(arr, n, ele);
    cout << last - first + 1;
    return 0;
}
