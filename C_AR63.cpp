#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <iostream>
#include <vector>

using namespace std;
int main(){ //¯x°}¬Û¥[ 
	int m,n,t,i,j,k;
	int a[100][100];
	int b[100][100];
	int c[100][100];
	cin>>m>>n;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	cin>>n>>t;
	for(i=0;i<n;i++)
		for(j=0;j<t;j++)
			cin>>b[i][j];
	for(i=0;i<m;i++)
		for(j=0;j<t;j++)
			a[i][j]+=b[i][j]; 
	for(i=0;i<m;i++)
	{
		for(j=0;j<t;j++)
		{
			if(j>0)
				cout<<" ";
			cout<<a[i][j];
		}
		cout<<endl;
	}
} 
