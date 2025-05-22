#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define db double

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll m,n,q;
        cin>>n>>m>>q;
        ll x1,x2;
        cin>>x1>>x2;
        ll a;
        cin>>a;
       // exact pos
        if(x1==a || x2==a){ cout<<0<<endl; continue;}
        //mid 
        if(a<max(x1,x2) && a>min(x1,x2)){
            cout<<((abs((a-min(x1,x2))-(max(x1,x2)-a)))/2)+min(a-min(x1,x2),max(x1,x2)-a)<<endl;
        }
        else if(a>x1 && a>x2){
            cout<<(n-max(x1,x2))<<endl;
        }
        else cout<<min(x1,x2)-1<<endl;
    }
    return 0;
}