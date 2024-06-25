//Function
#include<iostream>
using namespace std;

int max(int x, int y)
{
if (x>y)
return x;
else
return y;
}

int main()
{
int a=10, b=20;

int m=max(a,b);

cout<<"m is "<<m;

return 0;
}

//Array
#include <iostream>
using namespace std;
int main()
{
int arr[5];
arr[0]=5;
arr[2]=-10;

arr[3/2]=2;
arr[3]=arr[0];

cout<< arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3];

return 0;
}

//Pointers
#include <iostream>
using namespace std;

void pointers()
{
int var = 20;

int* ptr;

ptr=&var;

cout<<"Value at ptr = " << ptr << "\n";
cout << "Value at var = " << var << "\n";
cout << "Value at *ptr = " << *ptr << "\n";
}

int main() { pointers();
}

//Reference
#include<iostream>
using namespace std;

int main()
{
int x=10;

int& ref =x;

ref=20;
cout<<"x=" <<x<<endl;

x=30;
cout<<"ref = " << ref << enl;

return 0;
}