#include<iostream>
using namespace std;
void addition(int a,int b)
{
    int sum = 0;
    cout<<"Result :"<<(a+b);
    return ;
}
void subtration(int a,int b)
{
    int sum = 0;
    cout<<"Result :"<<(a-b);
    return ;
}
void multiplication(int a,int b)
{
    int sum = 0;
    cout<<"Result :"<<(a*b);
    return ;
}
void divide(int a,int b)
{
    int sum = 0;
    cout<<"Result :"<<(a/b);
    return ;
}
int main()
{
  int a , b;
  cout<<"\t\t\t\t\t\t->Simple Calculator <-\n\n";
  int ch;
  cout<<"Here you can Perform These Opration : \n1. For(+) \n2.For(-) \n3.For(*)\n4.For(/) : \n";
  cout<<"Enter the given choice only : ";
  cin>>ch;
  if(ch==4){
    cout<<endl;
    cout<<"Enter first number always greater than second number :"<<endl;
  }
  cout<<"Enter the First number :";
  cin>>a;
  cout<<"Enter the second number :";
  cin>>b;
  cout<<"\n";
  switch(ch)
  {
    case 1 : addition(a,b);
    break;
    case 2 : subtration(a,b);
    break;
    case 3 : multiplication(a,b);
    break;
    case 4 : divide(a,b);
    break;
    default : cout<<"Enter the given choice :";
  } 
  return 0;
}