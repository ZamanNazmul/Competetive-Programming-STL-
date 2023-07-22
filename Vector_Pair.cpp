#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,string> p;
    // p = make_pair(2,"abc");
    p ={2,"abcd"};
    
    pair<int,string> &p1 = p;
    cout<<p.first<<" "<<p.second<<endl;
    // update pair first int value 2 from 3
    p1.first = 3; 

    //again print pair both value i mean this time print update value 
    cout<<p.first<< " "<<p.second<<endl;


    // pair of array 
    pair<int, int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array [2] = {3,4};

    swap(p_array[0] ,p_array[2]);
    for(int i  = 0 ; i<3; i++)
    {
        cout<<p_array[i].first<<p_array[i].second<<endl;
    }



    // this code for taking input value in pair if you 
    //want to take multiple value of pair you can use loop 
    pair<int ,string> p2;
    cin>>p2.first;
    cout<<p2.first<<endl;


    // vector of pair 
    vector<pair<int,string> > v;
    v.push_back({2,"ab"});
     v.push_back({3,"cd"});
      v.push_back({4,"ef"});

     for(int i = 0; i<v.size() ; i++)
     {
        cout<<v[i].first<<" "<<v[i].second<<endl;
     }




}  