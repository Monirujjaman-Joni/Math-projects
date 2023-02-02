#include<iostream>
#include<conio.h>
using namespace std ;

int fact (int n)
{
    //base case
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);

    }
}

int main()
{
    int m;
    cout << "Enter a number : ";
    cin >> m;
    int result = m;
    if(m>=0)
    {
        int factorial = fact (m);
        cout << endl << endl << m << " ! = " << factorial;

    }
    else
    {
        cout << "Invalid input" ;
    }


    getch();
}
