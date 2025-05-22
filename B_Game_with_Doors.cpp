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
        int s1,e1,s2,e2;
        cin>>s1>>e1>>s2>>e2;
        if(e1<s2 || s1>e2)cout<<1<<endl;
        else if(s1==s2 && e1==e2)cout<<e1-s1<<endl;
        else if(s1==s2 || e1==e2)cout<<min(e1,e2)-max(s1,s2)+1<<endl;
        else cout<<min(e1,e2)-max(s1,s2)+2<<endl;
    }
    return 0;
}