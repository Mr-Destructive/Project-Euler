//Sum of mulyiples of 3 and 5

#include<iostream>
using namespace std;
int main()
{
int i,j;
int sum =0;
for(i=1;i<1000;i++){
	if(i%3==0||i%5==0)
	{sum=sum+i;}
}
cout<<sum;
}
