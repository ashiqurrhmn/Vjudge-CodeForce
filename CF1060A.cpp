#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, e=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='8')
            e++;
    }
    if(e>=n/11)
        cout<<n/11<<endl;
    else if(e<n/11)
        cout<<e<<endl;
    else
        cout<<0<<endl;

    return 0;
}
