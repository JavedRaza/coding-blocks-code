#include<iostream>
#include<cmath>
using namespace std;
bool check(int mat [][9],int n,int i,int j,int num){
	for(int x=0;x<n;x++){
		if(mat[x][j]==num||mat[i][x]==num){
			return false;
		}
	}
	int sr=sqrt(n);
	int ix=(i/sr)*sr;
	int yj=(j/sr)*sr;
	for(int p=ix;p<ix+sr;p++){
		for(int q=yj;q<yj+sr;q++){
			if(mat[p][q]==num){
				return false;
			}
		}
	}
  return true;
}
bool solve(int mat[][9],int n,int i,int j){
	if(i==n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
			{
			cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}
		return true;
	}
	if(j==n){
		solve(mat,n,i+1,0);
	}
	if(mat[i][j]!=0){
		return solve(mat,n,i,j+1);
	}
	for(int num=1;num<=n;num++){
		if(check(mat,n,i,j,num)){
			mat[i][j]=num;
	 bool canplace=solve(mat,n,i,j+1);
	 if(canplace==true){
	 	return true;
           	 }
         }
	}
	mat[i][j]=0;
	return false;
}

int main(){
	
	 int mat[9][9]={{5,3,0,0,7,0,0,0,0},
	               { 6,0,0,1,9,5,0,0,0},
				   { 0,9,8,0,0,0,0,6,0},
				   { 8,0,0,0,6,0,0,0,3},
				   { 4,0,0,8,0,3,0,0,1},
				   { 7,0,0,0,2,0,0,0,6},
				   { 0,6,0,0,0,0,2,8,0},
				   { 0,0,0,4,1,9,0,0,5},
				   { 0,0,0,0,8,0,0,7,9},};
	int n=9;
	solve(mat,n,0,0);
	return 0;
}
