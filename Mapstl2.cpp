#include<bits/stdc++.h>
using namespace std;
int main()
{
    // In map we can't take input we just store value 
    // output must be sorted in normal map
    // IN map we find the key and value 
    

    // IN this code the key is the element like : 1,2,3,4,5,6,7
    // and the value is count how many time thoose element are there in the map
    // this is the basic use of map
    map<int,int>m;
    vector<int>v{1,2,2,3,3,3,4,5,6,7,7};

    // 1 2 3 4 5 6 7 are the key 
    // 1 = 1 time,2 = 2 time,3 = 3 time and 7 = 2 time mean the value of map
    for(int i = 0 ; i<v.size(); i++)
    {
        m[v[i]]++;

        // that means every elemet of of v how many time store in map 
        // v[i] -> al the element of vector are store like a key 
        //and ++ -> how many time the value of map are stored
    }


    for(auto it : m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    // Normany we used * for auto variable name or print it but if you used auto then no need to use * before it
    // key value is constant this doesn't change but value can be change by using iterator






    cout<<"2nd approch start form here please take a input first for this example: "<<endl;

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