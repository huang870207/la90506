#include<stdio.h>
#include<stdlib.h>
#include <string>
#include <iostream>
#include <vector>
#include<iomanip>

using namespace std;
int main(){ 
	int n;  
    cin>>n;  
    for(int i=0;i<n;i++)  
    {  
        char e;
        cin>>e;  
        cout<<char(e+2)<<endl;  
    }  
} 
