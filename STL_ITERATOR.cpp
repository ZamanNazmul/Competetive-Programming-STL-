// STL ITRRATOR

#include<bits/stdc++.h>
using namespace std; 
int main()
{

    vector<int> v = {1,2,3,4,5};

    for(int i=0; i<v.size(); i++)
    {
        cout<< v[i] <<" ";  // printing using array
    }
     cout<<endl;  



    // it's a normal printing method by  index 
    vector<int> :: iterator it = v.begin();
       cout<<(*it)<<endl;
    cout<<(*(it+1))<<endl; // print only one value at a time 
  




    // to print all the value of vector by uisng iterator
    // without index

    for(it=v.begin(); it != v.end(); ++it)
    {
        cout<<(*it)<<" ";
        
    }
    cout<<endl; 





    // difference between i++,i+1

        // There is not difference between in  vector
    //i+1== it move next location  // this is not use for maps/grap
    //i++ ==- its move next iterator


 
    // how to use vector of pair in iterator


    vector<pair <int,int> > v_p= {{1,2},{2,3},{3,4}};

     vector < pair <int,int > >  :: iterator it1 ;

     cout<<"way no 1: ";
          for(auto it1 : v_p) {
          cout <<it1.first <<" " << it1.second << endl;
          }





    // way_1: 

    cout<<"way_2 : ";
     for(it1 = v_p.begin(); it1 != v_p.end(); it1++)
     {
         cout<< (*it1).first <<" "<< (*it1).second <<endl;
     }

    
    //way _3:
    
    cout<<"way_3 : ";
     for(it1 = v_p.begin(); it1 != v_p.end(); it1++)
     {
       cout << (it1->first) << " " << (it1->second) <<endl;
     }


} 
