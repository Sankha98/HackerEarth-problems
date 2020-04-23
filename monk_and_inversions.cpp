/*Monk loves to preform different operations on arrays, and so being the principal of Hackerearth School, he assigned a task to his new student Mishki. Mishki will be provided with an integer array A of size N and an integer K , where she needs to rotate the array in the right direction by K steps and then print the resultant array. As she is new to the school, please help her to complete the task.

Input:
The first line will consists of one integer T denoting the number of test cases.
For each test case:
1) The first line consists of two integers N and K, N being the number of elements in the array and K denotes the number of steps of rotation.
2) The next line consists of N space separated integers , denoting the elements of the array A.
Output:
Print the required array.
I/P:                                
1
5 2
1 2 3 4 5
O/P:
4 5 1 2 3
    */
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int arr[20][20];
int main()
{
    int t,c,x,y,i,j;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        c = 0;
        for(i = 0;i < n;++i)
        {
            for(j = 0;j < n;++j)
            {
                cin >> arr[i][j];
            }
        }
        for(i = 0;i < n;++i)
        {
            for(j = 0;j < n;++j)
            {
                for (x = i;x < n;++x)
                {
                    for (y = j;y < n;++y)
                    {
                        if(arr[x][y] < arr[i][j])
                        {
                            c++;
                        }
                    }
                    
                }
                

            }
        }
        cout << c << endl;
    }
    return 0;

}
