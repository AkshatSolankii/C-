#include<iostream.h>
#include<conio.h>

class calc
{
   float a,b,c;
   public:

  void result()
  {
   cout<<"Enter 1st Number: "<<endl;
   cin>>a;
   cout<<"Enter 2nd Number: "<<endl;
   cin>>b;
 }
  add()
 {
 return a+b;
 }
  sub()
 {
 return a-b;
 }
  mul()
 {
 return a*b;
 }
  div()
 {
 return a/b;
 }
 avg()
 {
 c=a+b;
 return c/2;
 }
};

int main()
{
 int choice;
 calc d;
 cout<<"Enter 1 for Addition"<<endl;
 cout<<"Enter 2 for Subtraction"<<endl;
 cout<<"Enter 3 for Multiplication"<<endl;
 cout<<"Enter 4 for Division"<<endl;
 cout<<"Enter 5 For Average"<<endl;
 cout<<"Enter your choice: "<<endl;
 cin>>choice;

 switch (choice)
 {
   case 1:
   d.result();
   cout<<"Result is: "<<d.add() <<endl;
   break;

   case 2:
   d.result();
   cout<<"Result is: "<<d.sub() <<endl;
   break;

   case 3:
   d.result();
   cout<<"Result is: "<<d.mul() <<endl;
   break;

   case 4:
   d.result();
   cout<<"Result is: "<<d.div() <<endl;
   break;

   case 5:
   d.result();
   cout<<"Result is: "<<d.avg() <<endl;
   break;
   }
   if (choice>5)
   cout<<"Wrong choice,Please Enter valid input"<<endl;

   getch();
   clrscr();
   return 0;
 }















