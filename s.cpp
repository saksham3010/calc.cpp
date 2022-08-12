#include<iostream>
using namespace std;


int main()
{
    int choice,num1,num2,sum,product,sub;
    float divide;
    cout<<"enter your choice"<<endl;
    cout<<"enter 1 to  addition "<<endl;
    cout<<"enter 2 to subraction"<<endl;
    cout<<"enter 3 to multiplication"<<endl;
    cout<<"enter 4 to division"<<endl;
    {


 cin >> choice;
 if(choice==1)
 {
    cout<<"enter first number"<<endl;
    cin >> num1;
    cout<<"enter second number"<<endl;
    cin >> num2;
    sum = num1 + num2;
    cout<<"sum of two numbers"<<sum;
 }

else if (choice==2)
  {
 
  cout<<"enter first number"<<endl;
    cin >> num1;
    cout<<"enter second number"<<endl;
    cin >> num2;
    sum = num1 - num2;
    cout<<" subraction of two numbers"<<sub;
 }
 else if( choice==3)
 {
    cout<<"enter first number"<<endl;
    cin >> num1;
    cout<<"enter second number"<<endl;
    cin >> num2;
    sum=num1*num2;
    cout<<"  multiplication of two numbers"<<product;
 }
 else if (choice==4)
 {
    cout<<"enter first number"<<endl;
    cin >> num1;
    cout<<"enter second number"<<endl;
    cin >> num2;
    sum=num1*num2;
    cout<<"  divide of two numbers"<<divide;
 }
 else{
 cout<<"sorry you entered th ewrong number"<<endl;
 }
 return 0;
 }
}
 
 


 
