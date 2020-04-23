//Rotate the array right by d elements
#include<bits/stdc++.h>
using namespace std;
int arr[100001];
int main()
{
    int t,i;
    cin >> t;
    while(t--)
    {
        int n,k;
        //int arr[n];
        cin >> n >> k;
        for(i = 0;i < n;i++)
        {
            cin >> arr[i];
        } 
        while (k >= n)
        {
            k = k - n;
        }
        for(i = n - k;i < n;i++)
        {
            cout << arr[i] << " ";
        }
        for (i = 0; i < n - k; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
