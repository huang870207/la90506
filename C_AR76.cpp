#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <iostream>
#include <vector>

using namespace std;
int main(){ // 提款機程式
	int data[6][3]=
	{
	{123,456,9000},
	{456,789,5000},  
    {789,888,6000},  
    {336,558,10000},  
    {775,666,12000},  
    {566,221,7000}
	};
	int times;
	cin>>times;
	int id, pw;  //帳號 密碼
	int i,j;
    for(i=0;i<times;i++)  
    {  
        int flag=0;  
        cin>>id>>pw;  
        for(j=0;j<6;j++)  
        {  
            if(id==data[j][0]&&pw==data[j][1])
                cout << data[j][2] << endl;   
            else  
                flag++;  
        }  
        if(flag==6)  //如果六筆都沒有此帳號
        {  
            cout << "error" << endl;  
        }  
    }  
      
}  
	
	

