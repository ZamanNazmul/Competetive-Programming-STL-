#include<bits/stdc++.h>
using namespace std;
int main()
{  
    map<string,int>ma;
    int n;
    cin>>n;
    for(int i = 0  ; i<n; i++)
    {
        string s;
        cin>>s;
        ma[s]++;
    }

    for(auto  p : ma)
    {
        cout<<p.first<<" ";
        cout<<p.second<<" "<<endl;
    }
}