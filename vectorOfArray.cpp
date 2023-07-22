
#include<bits/stdc++.h>
using namespace std;
// nested pair is the vector of pair 
//a vector have e size also a ith index and set the pair value in vecrtor thats call vecrtor of pair
// also insert multiple value in the vector 

void printvec(vector<int> &v )
{
    cout<<" vector of part size : "<< v.size()<<endl;

    for(int i = 0 ; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";  
    }

}

int main()
{
    int N;
    cin>>N;

    vector<int>v[N];

    for(int i = 0; i<N ; i++)
    {
        int n;
        cin>>n;

        for(int j = 0 ; j<n; j++)
        {
            int x;
            cin>>x;

            v[i].push_back(x);
        }
    }

    for(int i = 0 ; i<N; i++)
    {
      printvec(v[i]); 

    }


}