#include<bits/stdc++.h>
using namespace std;

int largestdistance(vector<int>arr,int pos){
    int n=arr.size();
    priority_queue<pair<int,int>>pq;  // (height,index)

    for(int i=0;i<n;i++){
        pq.push(make_pair(arr[i],i));  // n*(logn)
    }
    
    //[keep 1 frog at the same pos & move 2nd frog for max distance if they were found to be at boundary of the array]

    if(pos == 0){  //frogg starting from zero posn
        return (pq.top().second-pos+1);       
    }

    else if(pos == n-1){  //frog starting from last index 
        int currHeight = pq.top().first,index=0;       

        while(currHeight > pq.top().first){
            index = pq.top().second;          
            pq.pop();                       // O(logn)
        }
      
        return pos-index+1;

    }
    
    else{   //frog starting from any random index

        int left=pos,right=pos;
        int indexl=0,indexr=0;
        int i=pos,j=pos;
        // frog is moving right --> left
        while(arr[i]<=arr[i-1]){            // O(n)
            indexl=i;
            i--;
        }
        
        // frog is moving left --> right
        while(arr[j]<=arr[j+1]){           // O(n)
            indexr=j; 
            j++;
        }

        return (j-i+1);
    }
}


int main(){
    vector<int>arr={1,1};
    int pos=1;   // starting posn of frogg 

    cout<<"Max distance: "<<largestdistance(arr,pos)<<endl;

    //overall T.C = O(n*logn) + O(logn) + O(1) + O(n) + O(n) = O(n*logn)
}