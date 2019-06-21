#include<stdio.h>
#include<stdlib.h>
#include <string>
#include <iostream>
#include <vector>
#include<iomanip>

using namespace std;
int main(){ 
	int n,i;
	while(cin>>n)
	{
		for(i=1;i<=n;i++){
			if(n%i==0){
				if(i==n)
					cout<<i<<endl;
				else
					cout<<i<<" ";
			}
		}
	}
}
