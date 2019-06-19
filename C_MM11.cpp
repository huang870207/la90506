#include<stdio.h>
#include<stdlib.h>
#include <string>
#include <iostream>
#include <vector>
#include<iomanip>

using namespace std;
int main(){ //ÁÊ²¼­pºâ
	int money,a10,a5,a1;
	while(cin>>money)
	{
		a10=money/10;
		a5=money%10/5;
		a1=money%10%5/1;
		cout<<"NT10="<<a10<<endl;
		cout<<"NT5="<<a5<<endl;
		cout<<"NT1="<<a1<<endl;
	}
} 
