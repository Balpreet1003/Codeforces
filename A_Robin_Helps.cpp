#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int c=0,ans=0;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=k)c+=a[i];
            else if(a[i]==0 && c!=0) {
                c--;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
   
    return 0;
}