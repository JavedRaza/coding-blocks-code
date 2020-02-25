#include<iostream>
#include<deque>
#include<unordered_map>
using namespace std;
void check(int *arr,int n,int k){
	deque<int> q;
	int i;
	for(i=0;i<k;i++){
		while(!q.empty() and arr[i]>=arr[q.back()]){
			q.pop_back();
		}
		q.push_back(i);
	}
	for(;i<n;i++){
			cout<<arr[q.front()]<<" ";
		while(!q.empty() and q.front()<=i-k)
			q.pop_front();
			while(!q.empty() and arr[i]>=arr[q.back()]){
				q.pop_back();
		}
		q.push_back(i);
	}
	cout<<arr[q.front()]<<" ";
}
int main(){
	int arr[]={2,4,3,6,5,8,1,2,4,5,6,7,8,0};
	int n=sizeof(arr)/sizeof(int);
	int k=3;
	check(arr,n,k);
	return 0;
}
