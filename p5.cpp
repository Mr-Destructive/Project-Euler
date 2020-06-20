//Smallest number divisible by all numbers btwn 1 to 20

#include<iostream>
using namespace std;
int main(){
int i,k;
long long j;
int c=0;
for(j=11;j<=30000000000;j++){
for(i=1;i<=20;i++){
if(j%i==0){c++;}
else{c=0;}}
if(c==20){
cout<<j;
break;}
}
return 0;
}
