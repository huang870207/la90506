#include<stdio.h>
#include<stdlib.h>
#include <string>
#include <iostream>
#include <vector>
#include<iomanip>

using namespace std;
int main(){ 
	int n,m;
	int i,j;
	while(cin>>n>>m)
	{
		int x[20][20];
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				cin>>x[i][j];
		int y[20][20];
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				cin>>y[i][j];
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				x[i][j]*=y[i][j];
		for(i=0;i<n;i++){
			for(j=0;j<m;j++)
			{
				cout<<x[i][j];
				if(j<m-1)
					cout<<" ";
			}
			cout<<endl;
		}	
	}
} 
