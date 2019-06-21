#include<stdio.h>
#include<stdlib.h>
#include <string>
#include <iostream>
#include <vector>
#include<iomanip>
#include<math.h>

using namespace std;
int main(){ 
	int i,ans;
	while(cin>>i){
		ans=pow(2,i);
		if(i>31)
			cout<<"Value of more than 31"<<endl;
		else
			cout<<ans<<endl;
	}
}
