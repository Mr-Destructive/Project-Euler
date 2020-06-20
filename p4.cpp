//Largest Palindrome 3 digit product 

#include<iostream> 
#include<vector>
using namespace std;
int reverse(int n){
int rev=0,rem;
while(n!=0){
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
return rev;
}


int main(){ 
int c,r,i,n;
int j=999;
int b=0,m,k;
int a[3000];
for(i=999;i>=100;i--){
for(j=999;j>=100;j--){
c=i*j;
r=reverse(c);

if(c==r){
a[b]=c;
b++;
}

}}

//sorting and print last element
for(k=0;k<b;k++){
for(n=0;n<b;n++){
if(a[n]>a[n+1])
{m=a[n];
a[n]=a[n+1];
a[n+1]=m;}
}}
cout<<a[n];
return 0; 
}
