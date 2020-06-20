// Sum of digits in the number 2^1000

#include<iostream> 
using namespace std;
int main(){ 
int n;
int len=1,x=0,k=1,i=0,sum=0,a[1000];
cout<<"Enter power of 2 ";
cin>>n;
a[0]=1;
while(k<=n){
x=0;
i=0;
while(x<len){
a[x]=2*a[x];
a[x]=a[x]+i;
i=a[x]/10;
a[x]=a[x]%10;
x++;
}
k++;
while(i!=0)
{
a[len]=i;
i=i/10;
len++;
}

}

for(int c=x;c>=0;c--){
cout<<a[c];
sum=sum+a[c];}
cout<<endl;
cout<<sum<<endl;
return 0;
}
