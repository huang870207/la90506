#include<stdio.h>
#include<stdlib.h>
#include <string>
#include <iostream>
#include <vector>
#include<iomanip>

using namespace std;
int main(){ 
	int x,y,z;
	int total=0,count=0;
	cin>>x>>y>>z;
	total=x*20+y*25;
	while(1){
		if(x-3>=0 && y-2>=0){
			x=x-3;
			y=y-2;
			count++;
		}
		else break;
	}
	total=total+(z-count)*30;
	cout<<total<<endl;
}  
