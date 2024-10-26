#include<bits/stdc++.h>
using namespace std;

/*Your task is to determine the minimum number of elements that need to be removed from the array A such that the bitwise OR of the remaining elements is 2^x-1 for some integer 𝑥(𝑥≥0).
Note that the bitwise OR of an empty array is considered to be 0.*/

int min_removals(vector<int>&A,int n) 
{
    //int n = A.size();
    int target = 0;

    for (int i=1;i<=30;i++)  //3o tak isliye because 32 bit integer consider kar rhe h isse sare case cover ho jayega
    {
        target = (1 << i) - 1;  // 2^i - 1
        int current_OR = 0,count = 0;

        for (int j=0;j<n;j++) 
        {
            current_OR |= A[j];  //taking bitwise OR of array elements
            count++; //with counting them to finally remove 

            if (current_OR == target)
            return n - count;  // elements to remove
        }
    }

    return n;  // If no valid subset found, remove all elements
}

int main() 
{
        int n;
        cin >>n;

        vector<int>A(n);
        for (int i=0; i<n; i++) 
        {
            cin >>A[i];
        }
        cout<<"no. of elements to be removed is: "<<min_removals(A,n)<< endl;
}

