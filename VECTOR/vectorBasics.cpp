#include<iostream>
#include<vector>
using namespace std;

int main(){
//     //Create vector & declare
//     vector<int>v;
//     //vector initialization
//     vector<int>v1(4,7);
//     //size & capacity
//     cout<<"size of v is: "<<v.size()<<endl;
//     cout<<"capacity of v is: "<<v.capacity()<<endl;
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//  cout<<"size of v is: "<<v.size()<<endl;
//  cout<<"capacity of v is: "<<v.capacity()<<endl;
//  //update value
//  v[1]=5;
//   cout<<"size of v1 is: "<<v1.size()<<endl;
//     cout<<"capacity of v1 is: "<<v1.capacity()<<endl;
    //Delete a value from a vector
    vector<int>vnew;
    vnew.push_back(1);
    vnew.push_back(7);
    vnew.push_back(2);
    vnew.push_back(4);
    vnew.push_back(96);
    vnew.pop_back();
    vnew.erase(vnew.begin()+2);
    cout<<"size of vnew is: "<<vnew.size()<<endl;
     cout<<"capacity of vnew is: "<<vnew.capacity()<<endl;
     for(int i=0; i<vnew.size(); i++)
        cout<<vnew[i]<<" "<<" ";
        vnew.insert(vnew.begin()+0,9);
        cout<<endl;
       
       vnew[2]=10;
 for(int i=0; i<vnew.size(); i++)
        cout<<vnew[i]<<" ";
cout<<endl;
    //     vnew.clear();//remove the element in the array
    //    cout<<"size of vnew is: "<<vnew.size()<<endl;
    //  cout<<"capacity of vnew is: "<<vnew.capacity()<<endl;
    cout<<vnew[0]<<endl;
    cout<<vnew.front()<<endl;
     cout<<vnew[vnew.size()-1]<<endl;
     cout<<vnew.back()<<endl;

vector<int>a;
//copy value of above vector to another
a=vnew;
cout<<a.size()<<endl;
for(auto it=a.begin(); it!=a.end(); it++ )
cout<<*it<<" ";
cout<<endl;
//OR you can also do the same with the following way
for(int i=0; i<a.size(); i++)
cout<<a[i]<<" ";

//SORT
 vector<int>ans;
    ans.push_back(1);
    ans.push_back(7);  
    ans.push_back(2);
    ans.push_back(4);
    ans.push_back(96);

// sort(ans.begin(),ans.end());
// for(int i=0; i<ans.size(); i++)
// cout<<ans[i]<<" ";

cout<<(ans.begin(),ans.end(),96)<<endl;

}
