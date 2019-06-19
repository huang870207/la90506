#include<stdio.h>
#include<stdlib.h>
#include <string>
#include <iostream>
#include <vector>
#include<iomanip>

using namespace std;
int main(){ //計算兩整數間所有整數和 
	int t;
	int start,end;
	while(cin>>start>>end)
	{	
		int sum=0;
		if(start>end)
		{
			t=start;
			start=end;
			end=t;
		}
		for(int i=start;i<=end;i++)
			sum=sum+i;
		cout<<sum<<endl;
	}
} 
