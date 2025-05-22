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
        int n,m;
        cin>>n>>m;
        int maxi=0,x;
        for(int i=0;i<n;i++){
            cin>>x;
            maxi=max(maxi,x);
        }
        for(int i=0;i<m;i++){
            char ch;
            int a,b;
            cin>>ch>>a>>b;
            if(maxi<=b && maxi>=a){
                if(ch=='+')maxi++;
                else maxi--;
            }
            cout<<maxi<<" ";
        }cout<<endl;
    }
    return 0;
}