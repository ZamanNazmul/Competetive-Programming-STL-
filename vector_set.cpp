     // this is the way to initialize set
    // by defaut set are store values incresing order 
    // set contain distinct value
    // we cant store same value again in set 
    // for printing set value by using iterator ,bcz in set there is no indx that why we use iterator for print set value
    // set store distinct value and  unorderset_set doesnt need to be distinct we just need to check it exact string is available or not  
    // multiset allow to store multiple value in the multiset that means duplicate allowed like a,a  then output will be aa but in  unorderset / set it doestn allowed


#include<bits/stdc++.h>
using namespace std;
int main()
{

    

    cout<<"user define value of set "<<endl;
    set<int>s; 
    s.insert(1);
    s.insert(6);
    s.insert(2);


    for(auto it = s.begin() ; it != s.end() ; it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;


    cout<<"For checking the set value  distinct or not by adding same value in the set "<<endl;
    // you can check the set are distinct or not then insert same value again 
    set<int>st; 
    st.insert(1);
    st.insert(6);
    st.insert(2);
    st.insert(2); // this value are not insert in the set so,the previous set output show same value 

    for(auto &d : st)
    {
        cout<<d<<" ";
    }
    cout<<endl;



    //if you want to show the set value use just set<int ,greater<int> > s;";

    // This code are for erase value from set 
    cout<<"In this way we can erase set value : "<<"This time i erase 2 from the set"<<endl; 
    set<int > s1;
    set<int> :: iterator it1;
    s1.insert(1);
    s1.insert(6);
    s1.insert(2);

    for(it1  = s1.begin () ; it1 != s1.end() ; it1++)
    {
        if(*it1 == 2)
        s1.erase(it1);
    }
    for(it1 = s1.begin() ; it1 != s1.end() ; it1++)
    {
        cout<<*it1<<" ";
    }
    cout<<endl;

    // By this function we can directly earse any value from set
    //s.erase(2);



    // we can know the set size by using 
    //int n = s.size();
    //cout<<n<<endl;

    // If you want to clear the set value use 
    //s.clear()


    //This code use for input ,output set and find the distinct set value
    set<string>s2;
    int n;
    cin>>n;

    for(int i = 0 ;  i<n; i++)
    {
        string str;
        cin>>str;
        s2.insert(str);        
    }
    cout<<endl;
    for(auto value : s2)
    cout<<value<<endl;




}