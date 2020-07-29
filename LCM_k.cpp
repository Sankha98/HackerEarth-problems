/*
We need to find LCM(a1,a2,a3,a4,a5,......)%m , we will handle k later
Now LCM(LCM(a1,a2)%m,a3)%m is not equal to LCM(a1,a2,a3)%m because of the mod 
So we need to find LCM(a1,a2,a3,......)  and then mod it 
Now We need to find LCM(a1,a2,a3,.....)
1.FInd the prime factor of a1,a2,....
2. Take all the different prime factor in highest power 
3. Multiply them
Now We have handled overflow .But wait dont we need to find LCM(a1^k ,a2^k , a3^k ,....)
Well that is basically making the (Different prime factors with highest power)^k
So we can say LCM(a1^k , a2^k , a3^k , ....)= (LCM(a1,a2,a3,a4,......))^k  , 
and this can be done like above and making it to the power k 
So we have handled mod , overflow and ^k  Case wonderfully .
IS this done?
Well actually no . even if we do exactly like above it will lead to TLE
How to avoid TLE?
first of all use Modular Exponential to Calculate (something)^something %m
Second: when you calculate prime factor instead of looking for which prime number divides it precalculate them in sieve function .Below lp[i] is the last prime number which divided i 
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define mod 1000000007
#define MAX 1000001

ll prime[1000009];
ll arr[300009];

void sieve()
{
	prime[0] = prime[1] = 1;
	for (ll i = 2;i < MAX;i++)
	{
		if(prime[i] == 0)
		{
			for (ll j = i * 2; j < MAX; j += i)
			{
				if(prime[j] == 0)
				{
					prime[j] = i;
				}
			}
			prime[i] = i;
		}
	}
}

ll power(ll x,ll y,ll m)//gives (x^y)%m
{
	ll ans=1;
	while (y > 0)
	{
		if(y & 1)
		{
			ans=(ans*x)%m;
		}
		y=y/2;
		x=(x*x)%m;
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	//ios_base::sync_with_stdio(false);cin.tie(NULL);
	sieve();
	int t;
	cin >> t;
	while (t--)
	{
		map < ll,ll > mp;
		ll n,m,k;
		cin >> n >> m >> k;
		//ll arr[n];
		for (ll i = 0; i < n; i++)
		{
			cin >> arr[i];
			ll num = arr[i];
			map < ll,ll > mp1;
			//calculate prime no
			while(num > 1)
			{
				ll value = prime[num];
				mp1[value]++;
				num /= value;
			}
			//find max prime no
			for(auto it : mp1)
			{
				mp[it.first] = max(mp[it.first],it.second);
			}
		}
		ll result = 1;
		for(auto it : mp)
		{
			result = (result * power(it.first,it.second * k,m)) % m;
		}
		cout << result << endl;
	}	
	return 0;
} 