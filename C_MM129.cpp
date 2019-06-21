#include<stdio.h>
#include<stdlib.h>
#include <string>
#include <iostream>
#include <vector>
#include<iomanip>

using namespace std;
int main(){ 
	int n,change,total;
	while(cin>>n && n!=0){
		total=n;
		while(n>5){
			change=n/6;
			total+=change;
			n=n%6+change;
		}
		cout<<total<<" "<<n<<endl;
	}
}
