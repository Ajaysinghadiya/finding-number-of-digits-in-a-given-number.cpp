#include<iostream>//header 
using namespace std;//standard library

int NumberDigits(int n)//defining a function NumberDigits named
{
    
    if(n/10==0)//base condition for recursion
    {
        return 1;
    }

    int ans=NumberDigits(n/10)+1;//recursion process
    return ans;
}

int main()//execution begins here
{
    int n;//declaring a variable
    cout<<"enter a number to find its digits"<<endl;//printing a line
    cin>>n;//input
    int m=NumberDigits(n);//calling the funnction
    cout<<m<<endl;//printing the output
    return 0;
}
