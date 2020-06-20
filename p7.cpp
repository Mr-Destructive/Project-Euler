//  10001 st prime

#include<iostream>
using namespace std;
int main(){
long x=1;
int c=0;	
do{
long i=x/2;
long j=0;

do{

if(x%i==0){
break;}
j=j+1;
i=i-1;
}while(i>=2);
if(j==((x/2)-1)){
c++;
}
x++;
}while(c<=10000);
cout<<x-1;
}
