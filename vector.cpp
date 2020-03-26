 #include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> a(5,10);
    vector<int> b{3,4,5,6,7,8};
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<",";
	}
    cout<<endl;
	for(auto it=b.begin();it!=b.end();it++){
		cout<<(*it)<<",";
	}
    cout<<endl;
	for(int x:a){
		cout<<x<<",";
	}
    vector<int> c;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        c.push_back(num);
    }
    for(int i=0;i<c.size();i++){
		cout<<c[i]<<",";
	}
    
	return 0;
}