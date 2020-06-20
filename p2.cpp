//Sum of EVEN FIBONACCI numbers upto 4M

#include<iostream>
using namespace std;
int main()
{
int i;
int f1 =0;
int f2=1;
int f3;
int sum=0;

do{
f3=f1+f2;
f1=f2;
f2=f3;
if(f3%2==0)
{sum=sum+f3;}

}while(f3<4000000);
cout<<sum<<endl;
}
