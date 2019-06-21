#include<stdio.h>
#include<stdlib.h>
#include <string>
#include <iostream>
#include <vector>
#include<iomanip>

using namespace std;
int main(){ 
	int k,n,i;
	int count=1,num=1;
	cin>>k;
	for(i=0;i<k;i++){
		cin>>n;
		while(1){
			if((num%=n)!=0){
			count++;
			num=num*10+1; 
			}
			else break;
		}	cout<<count<<endl;
		num=count=1;
	}
}
