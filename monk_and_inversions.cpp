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
