#include<stdio.h>
#include<stdlib.h>
#include <string>
#include <iostream>
#include <vector>
#include<iomanip>

using namespace std;
int main(){ //Äá¤óÂàµØµø 
	double C,F;
	while(cin>>C)
	{
		F=(9*C)/5+32;
		cout<<fixed<<setprecision(1)<<F<<endl;
	}
} 
