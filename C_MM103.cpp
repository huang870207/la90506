#include<stdio.h>
#include<stdlib.h>
#include <string>
#include <iostream>
#include <vector>
#include<iomanip>

using namespace std;
int main(){ 
	int n,a=1,b=1,temp,i;
	cin>>n;
	for(i=2;i<=n;i++)
	{
		temp=a;a=b;b=a+temp;
	}
	cout<<a<<endl;
} 
