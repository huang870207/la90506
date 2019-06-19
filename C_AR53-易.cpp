#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){ //學生成績排序
 	
 	int n;
 	int i;
 	cin>>n;
 	int grade[n];
 	for(i=0;i<n;i++)
 		cin>>grade[i];
 	sort(grade,grade+n);
 	
 	for(i=0;i<n;i++)
 		cout<<grade[i]<<endl;
} 
