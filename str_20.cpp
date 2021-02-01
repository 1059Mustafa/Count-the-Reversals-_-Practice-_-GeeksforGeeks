#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    int l=str.size();
	   
	    int i=0,rev=0;
	    stack<char> s;
	    for(i=0;i<l;i++)
	    {
	        if(str[i]=='{') s.push(str[i]);
	        else{
	            if(s.empty()){
	                s.push('{');
	                rev++;
	                        }
	            else{
	                s.pop();
	                }
	            }
	    }
	   
	   if(!s.empty())
	       rev=(s.size()%2==1)?-1:(rev+s.size()/2);
	   cout<<rev<<endl;
	    }
	return 0;
}
