//LARGEST PRIME FACTOR of 600851475143


#include<iostream>
using namespace std;
int main(){
unsigned long long int a = 600851475143;
int c=0;
long long int x;
long long int i;
long long int j;
long long int b=a/2;
for(b=a/2;b>=2;b--){
do{if(a%b!=0){b--;}}while(a%b!=0);

x=b;
cout<<x<<endl;
long j=0;
long i=x/2;
for(i=x/2;i>=2;i--){
if(x%i!=0){  	
j++;
}}
if(j==((x/2)-1)){
c++;
break;}
}

cout<<"the largest prime is "<<x<<endl;

}
