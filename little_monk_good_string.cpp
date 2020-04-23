#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char c;
    cin >> s;
    int res = 0,count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        c = s[i];
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count++;
        }
        else
        {
            count = 0;
        }
        res = max(res,count);
    }
    cout << res << endl;
    return 0;
}
