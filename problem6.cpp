#include<iostream>
using namespace std;
int main(){
int i,j,x,y;
int sum=0,sumy=0,diff;
 for(i=1;i<=100;i++){
 sum=sum+(i*i);
 
 }
 cout<<sum<<endl;
for(i=1;i<=100;i++){
sumy=sumy+i;
}
int sumn=sumy*sumy;
cout<<sumn<<endl;
diff=sumn-sum;
cout<<diff;
}
