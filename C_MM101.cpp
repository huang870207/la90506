#include<stdio.h>
#include<stdlib.h>
#include <string>
#include <iostream>
#include <vector>
#include<iomanip>

using namespace std;
int main(){ 
	int n,total,leave=0;
	cin>>n;
	total=n;
	while(n/3){
		leave=n%3;
		n=n/3;
		total+=n;
		n+=leave;
	}
	cout<<total<<endl;
} 
