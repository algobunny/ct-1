// Name = Amarjeet Kumar
// Roll no. = 2010990952
// Set no. = 3
// Q2
#include <bits/stdc++.h>
using namespace std;
bool orCheck(int *arr, int n, int target, int i, int j)
{
    for (int k = i; k < n - 1; k++)
    {
        for (int l = j + 1; l < n; l++)
        {
            if ((arr[k] + arr[l]) == target)
            {
                return true;
            }
        }
    }
    return false;
}
void pairSum(int *arr, int n, int target)
{
    bool k = false, check = false;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[i] + arr[j]) == target)
            {
                check = true;
                cout << "Pair found "
                     << "(" << arr[i] << "," << arr[j] << ")" << endl;
                if (orCheck(arr, n, target, i, j))
                {
                    cout << "or" << endl;
                }
            }
        }
    }
    if (!check)
    {
        cout << "Pair not found";
    }
}
int main()
{
    int n;
    // input the size of array
    cout << "input the size of array:" << endl;
    cin >> n;
    int arr[n], target;
    // input the target
    cout << "input the target:" << endl;
    cin >> target;
    // input the array's elements
    cout << "input the array's elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    pairSum(arr, n, target);
}