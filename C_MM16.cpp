#include<stdio.h>
#include<stdlib.h>
#include <string>
#include <iostream>
#include <vector>
#include<iomanip>

using namespace std;
int main(){ //�P�_�y�ЬO�_�b�餺 
	int x,y;
	while(cin>>x>>y)
	{
		if(x*x+y*y<=10000)
			cout<<"inside"<<endl;
		else
			cout<<"outside"<<endl;
	}
} 
