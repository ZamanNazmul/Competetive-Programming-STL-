/*In this section we will learn many operations in DEQUE
Deque Declaration 
push_back()
push_front()
pop_back()
how to print deque 
front()
back()
pop_front()
pop_back()
size()
clear()
empty()


*/


#include<bits/stdc++.h>
using namespace std;
int main()
{

    deque<int>dq; // deque declaration 
    dq.push_back(1); // insert value into deque 
    dq.push_back(2);
    dq.push_back(3);
    
    for(int i = 0 ; i<dq.size(); i++)
    {
        cout<<dq[i]<<" "; // print all value of deque 
        //cout<<dq.at(i)<<" "; 
    }

    dq.push_front(4); // add value in the front of deque 
    
    cout<<dq.front()<<endl; 
    //print the first value
    
    cout<<dq.back()<<endl; 
    //print the last value 

    //Delete the first value from Deque
    dq.pop_front();

    //Delete the last value from deque
    dq.pop_back(); 

    // clear the deque 
    dq.clear(); 

    // Check is deque empty or not
    if(dq.empty()) cout<<"Empty"<<endl;
    else cout<<"Not Empty"<<endl;

    deque<int>:: iterator it =dq.begin();





}