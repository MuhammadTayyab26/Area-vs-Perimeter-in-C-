#include<iostream.h>
#include<conio.h>
int main()
{
int a,l,b,p;
clrscr();
cout<<:"enter the length : ";
cin>>l;
cout<<"enter the breath : ";
cin>>b;
a=l*b;
p=2*(l+b);
if(a>p)
{
cour<<"area is greater then perimeter "<<endl;
}
else
{
cout<<"perimeter is greater then area "<<endl;
}
getch();
return 0;
}