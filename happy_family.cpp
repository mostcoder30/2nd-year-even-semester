#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,f,ans = 0,odd=0;
    cin>>n>>f;
    int m[f+1];

    for(int i =0 ; i < f ; i++)
    {
        cin>>m[i];
    }
    for(int i = 0; i< f;i++)
    {
        // if(m[i]%2==0)
        // {
        //     ans += m[i]/2;
        // }else
        // {
            ans+= m[i]/2;
            if(m[i]%2==1)
            odd +=1;
        //}
    }
    // if(odd%2==0)
    // {
    //     cout<<"unhappy family"<<endl;
    // }else
    {
        cout<<"happy family"<<endl;
        cout<<"members: "<<(ans*2+odd%2)<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}