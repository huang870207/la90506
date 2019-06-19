#include<stdio.h>
#include<stdlib.h>
#include <string>
#include <iostream>
#include <vector>

using namespace std;
int main(){ //²q¼Æ¦r
	string s;
	while(cin>>s)
	{
		while(1)
		{
			string temp;
			cin>>temp;
			if(temp=="0000")
				break;
			int a=0;
			int b=0;
			int i,j;
			for(i=0;i<4;i++)
			{
				if(s[i]==temp[i])
					a++;
				for(j=0;j<4;j++)
					if(s[i]==temp[j])
					b++;
				
			}
			cout<<a<<"A";
			cout<<b-a<<"B";
			cout<<endl;
		}
	}
} 
