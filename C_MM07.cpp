#include<stdio.h>
#include<stdlib.h>
#include <string>
#include <iostream>
#include <vector>
#include<iomanip>

using namespace std;
int main(){ //計算平方與立方 
	int num;
	cin>>num;
	int square,cube;
	square=num*num;
	cube=num*num*num;
	cout<<num<<" "<<square<<" "<<cube<<endl;
} 
