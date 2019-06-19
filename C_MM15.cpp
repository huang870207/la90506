#include<stdio.h>
#include<stdlib.h>
#include <string>
#include <iostream>
#include <vector>
#include<iomanip>

using namespace std;
int main(){ //判斷座標是否在正方形內 
	int x,y;
	while(cin>>x>>y)
	{
		if(x>=0 && x<=100 && y>=0 && y<=100)
			cout<<"inside"<<endl;
		else 
			cout<<"outside"<<endl;
	}
	
} 
