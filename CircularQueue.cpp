#include<iostream>
#include<cstring>
using namespace std;
template<typename t>
class Queue{
	t *arr;
	int f;
	int r;
	int ms;
	int cs;
public:
	Queue(int ds=5){
		f=0;
		cs=0;
		ms=ds;
		r=ms-1;
		arr=new t[ds];
	}
	bool isFull(){
		return ms==cs;
	}
	bool isEmpty(){
		return cs==0;
	}
	void push(int d){
		if(!isFull()){
			r=(r+1)%ms;
			arr[r]=d;
			cs++;
		}
	}
	void pop(){
		if(!isEmpty()){
			f=(f+1)%ms;
			cs--;
		}
	}
	int top(){
		return arr[f];
	}
	
};
int main(){
	Queue<int> q;
//	Queue(5);
	q.push(3);
	q.push(5);
	q.push(6);
	q.push(7);
	q.pop();
	q.push(9);
	while(!q.isEmpty()){
		cout<<q.top()<<" ";
		q.pop();
	}
	return 0;
}
