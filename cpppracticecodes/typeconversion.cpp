//Implicit
#include<iostream>
using namespace std;

int main()
{
int x = 10;
char y ='a';

x=x+y;

float z = x + 1.0;

cout << "x = " << x << endl
     << "y = " << y << endl
     << "z = " << z << endl;

     return 0;
}

//Explicit
#include<iostream>
using namespace std;

int main()
{
double x=1.2;

int sum= (int)x + 1;

cout<< "Sum =" <<sum;

return 0;
}