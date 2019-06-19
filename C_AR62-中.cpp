#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <iostream>
#include <vector>

using namespace std;
int main(){ //¯x°}¬Û­¼
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
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
		}
	for(i=0;i<m;i++)
	{
		for(j=0;j<t;j++)
		{
			if(j>0)
				cout<<" ";
			cout<<c[i][j];
		}
		cout<<endl;
	}
} 
