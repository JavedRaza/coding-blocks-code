#include<iostream>
#include<stack>
using namespace std;
void transfer(stack<int>&s1,stack<int>&s2,int n){
	for(int i=0;i<n;i++){
		s1.push(s2.top());
		s2.pop();
	}
}
  void reverse(stack<int> &s){
  	stack <int> s1;
  	int size=s.size();
  	for(int i=0;i<size;i++){
  		int n=s.top();
  		s.pop();
  		transfer(s1,s,size-1-i);
  		s.push(n);
  		transfer(s,s1,size-1-i);
  	}
  /*	while(s.empty()==false){
  	        s1.push(s.top());
  	        s.pop();
       }
       s.push(n);
       	while(s1.empty()==false){
  	        s.push(s1.top());
  	        s1.pop();
       }
  }*/
  }
int main(){
	stack<int> s1,s2;
	for(int i=1;i<6;i++){
        s1.push(i);
	}
	cout<<endl;
    reverse(s1);
    while(s1.empty()==false){
    	cout<<s1.top()<<" ";
    	s1.pop();
	}
	return 0;
}

