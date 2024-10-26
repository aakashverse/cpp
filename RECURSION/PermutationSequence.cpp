#include<bits/stdc++.h>
using namespace std;

// METHOD-1-->RECURSIVE APPROACH O(N!)
/*void permut(int arr[], int index, vector<int>temp,vector<vector<int>>&ans, vector<bool>visited) 
    {
        if (visited.size() == temp.size()) 
        {
            ans.push_back(temp); 
            return;
        }

        for (int i = 0; i < visited.size(); i++) 
        {
            if (visited[i] == 0) 
            {
                visited[i] = 1;
                temp.push_back(arr[i]);
                permut(arr,index+1,temp,ans,visited);
                visited[i] = 0;
                temp.pop_back();
            }
        }
    }

    string getPermutation(int arr[],int n, int k)
    {
        // int arr[n];
        // for (int i = 0; i < n; i++)
        // arr[i] = i + 1;

        vector<vector<int>>ans;
        vector<int>temp;
        vector<bool>visited(n, 0);
        permut(arr, 0, temp, ans, visited);

        string result="";
        for(int num:ans[k-1]){
            result+=to_string(num);
        }
        return result;
    }*/
 

// METHOD-2-->MATHEMATICAL APPROACH O(N*N)
string getPermutation(int n, int k){
        vector<int>numbers;
        int fact=1;
        for(int i=1;i<n;i++){
            fact*=i;
            numbers.push_back(i);
        }
        numbers.push_back(n);
        k=k-1; // considering 0 based indexing
        string ans="";
        while(true){
            ans+=to_string(numbers[k/fact]);
            numbers.erase(numbers.begin()+k/fact); // deleting the used one
            if(numbers.size()==0){
                break;
            }
            k=k%fact;
            fact=fact/numbers.size();
        }
       return ans; 
    }