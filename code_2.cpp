#include <iostream>
#include <conio.h>
using namespace std;
int subNum(int a, int b);//Function prototype
int main()
{
    int result,num1,num2;
    cout<<"Enter two numbers to subtract\n";
    cin>>num1>>num2;//read input from the user
    result=subNum(num1,num2);//call the function
     cout<<"subtraction of given two numbers: "<<result;
     getch();
    return 0;
}
int subNum(int x, int y)//function definition
{
    int c=x-y;
    return (c);
}