#include<bits/stdc++.h>
using namespace std;

int maxsumsubarray(int arr[])
{
    int maxsum=INT_MIN;
    int currsum=0;

    for(int i=0;i<6;i++)
    {
        currsum+=arr[i];

        if(currsum>maxsum)
        maxsum=currsum;

        if(currsum<0)
        currsum=0;

    }
    return maxsum;
}



int main()
{
    int arr[]={-5,4,6,-3,4,-1};
    cout<<maxsumsubarray(arr)<<endl;
}