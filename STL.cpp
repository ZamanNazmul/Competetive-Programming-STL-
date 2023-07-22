#include<bits/stdc++.h>
using namespace std;

void print(vector<int> data)
{
    cout<<"Total number of elements : "<<data.size()<<endl;
    for(int datam: data)
    cout<<datam<<" ";
    cout<<endl;
}  

int main()
{
// vector<int>data={1,2,3,4,5};
// vector<int>data2=data;
//     print(data2);



// vector<int> data={1,2,3};
// data.push_back(0);
// data.push_back(0);
// data.push_back(5);
//    print(data); 
 

//insert at first
// vector<int> data={1,2,3};
// data.insert(data.begin(),7);
//    print(data);

vector<int> data = {1,2,3,4};
// data.insert(data.end(),2);
//data.insert(data.begin()+2,22222);

//data.erase(data.begin());
//data.erase(data.begin()+2);
//cout<< data[1]<<endl;
//cout<< data.front();
//data.clear();
 //cout<<data.front()<<endl;
// cout<<data.back()<<endl;
// cout<<data[1];

 //cout<<binary_search(7);
 //data.pop_back();  
 //data.push_back(7);
 //data.resize(10);
 int* pos = data.data();
 
    cout << "\nThe first element is " << *pos;

print(data);


 //wants to add any palace from first

// vector<int> data={1,2,3};
// data.insert(data.begin()+2,7);
//    print(data);



//insert form last and any position from last
// vector<int> data={1,2,3};

// data.insert(data.end(),7);

// data.insert(data.end()-1,0);
//    print(data);




//// read data
//espacific any pposition

// vector<int> data={1,2,3};
// cout<<data[2];


// wants to know first and last elements
// vector<int> data={1,2,3};
// cout<<data[2];
// cout<<data.front();
// cout<<data.back();


// wants to know the size of data
// vector<int> data={1,2,3,4};
// int len=data.size();
//    print(data);


// convert vector in array  data
// vector<int> data={1,2,3};
// int *d=data.data();
// cout<<d[3];



// update data or change data 
// vector<int> data={1,2,3};
// data[2]=100;
// print(data);


// swap vector
// vector<int> data={1,2,3};
// vector<int> data2={5,5,5};

// cout<<"before swap"<<endl;
// print(data);
// print(data2);

// data.swap(data2);

// cout<<"after swap "<<endl;
// print(data);
// print(data2);



// delete from last indx
// vector<int> data={1,2,3};
// data.pop_back();
// print(data);



//delete all data from vector
// vector<int> data={1,2,3};
// data.clear();
// print(data);



//delete data at any poisson,this code form delete first
// vector<int> data={1,2,3};
// data.erase(data.begin()+2);
// print(data);  

//this line also delete last elment end -1; 
// vector<int> data={1,2,3};
// data.erase(data.end()-1);
// print(data);



// //taking input form user

//  vector <int>v;
//  int n;
//  cin>>n;

//  for(int i=0;i<n;i++)
//  {
//      int x;
//      cin>>x;

//      v.push_back(x);
//  }
//  print(x);

// 





}
