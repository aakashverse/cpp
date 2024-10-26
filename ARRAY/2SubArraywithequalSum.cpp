#include<iostream>
#include<vector>
#include<algorithm>
    using namespace std;

 bool divide( vector<int>arr)
 {
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
        }
        
        int sum2=0;
        for(int i=0;i<arr.size();i++)
        {
            sum2+=arr[i];
            sum=sum-arr[i];
             
            if(sum2==sum)
            return 1;
        }
        
     return 0;   

 }

 int main(){

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the elements in the array: ";
    for(int i=0; i<=n-1; i++)
    cin>>v[i];
    cout<<divide(v);

}