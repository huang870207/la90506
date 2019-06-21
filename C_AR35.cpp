#include<stdio.h>
#include<stdlib.h>
#include <string>
#include <iostream>
#include <vector>
#include<iomanip>

using namespace std;
int main(){ 
	string s[12]={
	"rat","ox","tiger","rabbit","dragon","snake","horse","sheep","monkey","rooster","dog","pig"
	};
	int n;
	int i;
	while(cin>>n){
		i=(n-2008);
		i%=12;
		if(i<0)
			i+=12;
		cout<<s[i]<<endl;
	}
} 
