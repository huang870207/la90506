#include<stdio.h>
#include<stdlib.h>
#include <string>
#include <iostream>
#include <vector>
#include<iomanip>

using namespace std;
int main(){ 
	float high,base,area;
	cin>>high>>base;
	area=(base*high)/2.0;
	cout<<fixed<<setprecision(1)<<(float)area<<endl;
} 
