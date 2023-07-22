#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v = {1,2,3,4,5,6};

    // way no 1 
    for(int i = 0 ; i<v.size() ; i++) 
    {
        cout<<v[i]<< " ";
    }
    cout<<endl;

    // initiallize iterator in this way
    vector<int> :: iterator it ;

    // 2nd way
    for(it = v.begin(); it != v.end() ; it++)
    {
        cout<<*it<<" ";
     
    }cout<<endl;

    //3rd way        
    for(int &value : v)
    {
    cout<<value<<" ";
    } cout<<endl;


    // auto a = 1; 
    // cout<<a<<endl;

    //  we dont use itearator line its very long line  we used auto bcz its works like itetrator 


    //auto means  auto == vector<int> :: iterator it ;
    for( auto it = v.begin(); it != v.end() ; it++)
    {
        cout<<*it<<" ";
     
    }cout<<endl;

    for(auto &value : v)
    {
    cout<<value<<" ";
    } cout<<endl;



        //we used alwyes auto loop ,not normal loo[]




}