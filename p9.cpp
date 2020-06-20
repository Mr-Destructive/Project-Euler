//SPECIAL PYTHAGOREAN TRIPLET a+b+c=100

#include<iostream> 
using namespace std;
int main(){ 
int i,j,k;
for(i=2;i<1000;i++){
for(j=2;j<1000;j++){
for(k=2;k<1000;k++){
if((i*i)+(j*j)==(k*k)){
if((i+j+k==1000)&&(i<j<k)){
cout<<i*j*k<<endl;
cout<<i<<" "<<j<<" "<<k<<endl;}}}}}

return 0; 
}
