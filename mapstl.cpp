#include<bits/stdc++.h>
using namespace std;
int main()
{     // All value of map are stored by pair type
     // cin/print both are o(log(n)) complexity 
    //store sorting order /how many type of value in there 
   // map is a container which store value in sorted order like set and also store the ferquency of the valeue
  // map also define which value is store and also how many time the value in store value .EX= a how many time is there in map we can find this by map
 // map also store unique value if any value insert 
 
    map<int,string>m; // diclear map
    m[1] = "Nazmul";// all those way to define varible value in map
    m[2] = "Zaman"; //o(log(n)) complexity 
    m[3] = "Shael";
    m.insert({4,"Dihan"}); // another way to insert


    // For print a single value of MAP
    cout<<m[1]<<endl;
    //At operation in MP for print a single value of MAP
    cout<<m.at(1)<<endl;
    cout<<"Top output is the single value of a map by using at operator"<<endl;
    



    cout<<"Print multiple value of a map"<<endl;
    map<int,string> :: iterator it; // iterator decleared command
    for(it = m.begin(); it != m.end(); it++) 
    {
        cout<<(*it).first<<" "<<(*it).second<<endl; // printing map key and value both
    } cout<<endl;



  
    cout<<"another way to print map,we use this way always"<<endl; 
    for(auto &pr : m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }

    // print the size of map
    cout<<m.size()<<endl;

    // Print the MAX size 
    cout<<m.max_size()<<endl;

    // Clear the Map value : remove al the value of map
    // m.clear();


    







    








}