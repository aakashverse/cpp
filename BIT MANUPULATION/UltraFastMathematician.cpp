#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	// int t;
	// cin>>t;

	// while(t--){
		int num1,num2;
        cout<<"Enter numbers: ";
		cin>>num1>>num2;
        
		bool isNegative = ((num1<0) ^ (num2<0));

		string str1 = to_string(abs(num1));
		string str2 = to_string(abs(num2));
        
        string str3="";

		for(int i=0;i<str1.size();i++){
			int digit1 = str1[i]-'0';
			int digit2 = str2[i]-'0';
			str3 += to_string(digit1 ^ digit2);
		}

		if(isNegative)
		str3 = "-"+ str3;

		cout<<str3<<endl;
		
    //}

	return 0;
}