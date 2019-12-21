#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
int main()
{
    fast_io;
    int T,r,c,k,ans;
    cin >> T;
    while(T--)
    {
        ans=0;
        cin >> r >> c >> k;
        for(int i=1;i<=8;i++)
        {
            for(int j=1;j<=8;j++)
            {
                if(max(abs(i-r),abs(j-c))<=k)
                    ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}