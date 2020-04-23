//Simple sum of two arrays into a new array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr1[n];
    int arr2[n];
    for(int i = 0; i < n;i++)
    {
        cin >> arr1[i];
    }
    for(int i = 0; i < n;i++)
    {
        cin >> arr2[i];
    }
    int arr[n];
    for(int i = 0;i < n;i++)
    {
        arr[i] = arr1[i] + arr2[i];
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
