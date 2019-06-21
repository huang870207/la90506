#include<stdio.h>
#include<stdlib.h>
#include <string>
#include <iostream>
#include <vector>
#include<iomanip>

using namespace std;
int main(){ 
	int n,i;
	long long ans=1;
	while(cin>>n)
	{
		for(i=1;i<=n;i++)
			ans=ans*i;
		cout<<ans<<endl;
		ans=1;
	}
} 
