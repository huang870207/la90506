#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <iostream>
#include <vector>
using namespace std;
 main(){ 	//�p��}�C���Ҧ��������ߤ�M
int x;
int sum=0;

    vector<int> v(6) ;
    for(int i=0;i<6;i++){
        cin>>x;
        v[i]=x*x*x;
    }
    for(int i=0;i<6;i++){
    	sum+=v[i];
	}
	cout<<sum<<endl;
   


}
