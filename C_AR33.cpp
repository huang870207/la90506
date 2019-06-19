#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <iostream>
#include <vector>
using namespace std;
 main(){		//Âà¸m¯x°}
	int n,m,i,j;
	while(cin>>n>>m){
		if(n==0||m==0)
			break;
		else
		{
			int a[n][m];
			int b[m][n];
			for(i=0;i<n;i++){
				for(j=0;j<m;j++){
					cin>>a[i][j];
					b[j][i]=a[i][j];
				}
			}
			for(i=0;i<m;i++){
				for(j=0;j<n;j++){
					if(j!=0)
						cout<<" "<<b[i][j];
					else
						cout<<b[i][j]; 
				}
				cout<<endl;
			}
			
		}
	} 


}
