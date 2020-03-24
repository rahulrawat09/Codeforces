#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

#define ll long long
//#define bint int1024_t
#define ld long double
#define vect vector<ll>
#define pll pair<ll,ll>
#define S second
#define F first
#define unmap unordered_map
#define pb push_back
#define pi 3.1415926536
#define mod int(998244353)
#define mp make_pair
#define testcases ll t; cin>>t; while(t--)

using namespace std;
//using namespace boost::multiprecision;
//using namespace __gnu_pbds;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,d;
    cin>>n>>d;
    vector<pll> v(n);
    for(int i=0;i<n;i++) cin>>v[i].F>>v[i].S;
    sort(v.begin(),v.end());

    ll i=0,j=0,ans=0,curr=0;

    while(j<v.size())
    {
        curr+=v[j].S;
        while(v[j].F-v[i].F>=d)
        {
            curr-=v[i].S;
            i++;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans;
    return 0;
}       
