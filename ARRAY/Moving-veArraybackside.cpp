#include<bits/stdc++.h>
#include<vector>
using namespace std;

// int seperate_neg(vector<int>&v)
// {
//     sort(v.begin(0),v.end(6));
// }


int main()
{
    int arr[7]={1,-1,2,-6,-4,3,-5};
    vector<int>v;
    
    
     for(int i=0;i<7;i++)
    { 
        v.push_back(arr[i]);
    }

    sort(v.rbegin(),v.rend(),less<int>());

    for(int i=0;i<7;i++)
    {
    cout<<v[i]<<" ";
    }
}
//     int temp[7];
//     int j=0;
   
//         for(int i=0;i<7;i++)
//         {
//             //copy all positive no in temp array
//             if(arr[i]>=0)
//             {
//             temp[j]=arr[i];
//             j++;
//             }
//         }


//             //copy all negative no in temp
//             for(int i=0;i<7;i++)
//            {
//             if(arr[i]<0)
//             {
//             temp[j]=arr[i];
//             j++;
//             }

//            }

//             //copying positive no to temp
//             for(int i=0;i<7;i++)
//             {
//                 arr[i]=temp[i];
//                 j++;

//             }

//              for(int i=0;i<7;i++)
//             {
//               cout<<arr[i]<<" ";
//             }

// }
