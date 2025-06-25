#include<bits/stdc++.h>
using namespace std;


//LC-137 one unique number, all other are occuring 3 times except one  //
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;

        // Loop over all 32 bits
        for (int i = 0; i < 32; i++) {
            int bitSum = 0;

            for (int num : nums) {
                // Count how many numbers have the i-th bit set
                bitSum += (num >> i) & 1;
            }

            // If the bit count mod 3 is not zero, that bit is part of the unique number
            if (bitSum % 3 != 0) {
                result |= (1 << i);
            }
        }

        return result;
    }
};


//Find the two unique numbers in linear time & constant space
//Also print the smaller one first followed by the next greater number

int main(){
    vector<int>arr={1,2,3,2,1,4,5,6,4,7,5,7,3,8}; 
    int n=arr.size();
    int res=0; //take xor of all numbers

    for(int i=0;i<n;i++){
        res^=arr[i]; //res=3^6=5(101)
    }
    int temp=res;

    //find all numbers having set bit at 0th posn from right
    int pos=0;
    while((temp&1)!=1){ //while last bit !=1 pos++;
        pos++;
        temp=temp>>1;
    }
    //The first bit in xor is at posn 'pos'
    int mask=(1<<pos);

    int x=0,y=0; //two unq num
    for(int i=0;i<n;i++){
        if((mask&arr[i])>0)
        x^=arr[i];
    }

    y=res^x;
    
    cout<<"The 2 unq numbers are: "<<min(x,y)<<" & "<<max(x,y)<<endl;
}