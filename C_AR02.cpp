#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <iostream>
#include <vector>
using namespace std;
 main(){		//¤@ºû°}¦C¤ÏÂà II
int x;

    vector<int> v(6) ;
    for(int i=0;i<6;i++){
        cin>>x;
        v[i]=x;
    }
    for(int i=5;i>=0;i--){
        cout<<v[i]<<" ";
    }



}
