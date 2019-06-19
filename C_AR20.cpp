#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <iostream>
#include <vector>
using namespace std;
 main(){		//檢查數值是否有重複
	int n;  
    cin>>n; 

    vector<int> num(n) ;
    vector<int> count(10000);  
    int flag=0;  
    for(int i=0;i<10000;i++)  
        count[i]=0;  
    for(int i=0;i<n;i++)
	{  
        cin>>num[i];  
        if(count[num[i]]==0)  
            count[num[i]]++;    
    }  
    for(int i=0;i<10000;i++)  
    {  
        if(count[i]==1)   
            flag++; 
	} 
	
    if(flag==n)  
    {  
        cout<<"1"<<endl;  
    }  
    else  
    {  
        cout<<"0"<<endl;  
    }
}
