 //Class
 #include <bits/stdc++.h>
 using namespace std;

 class Class {

 public:

 string classname;

 void printname()
 {
 cout<< "Classname is: " << classname;
 }
 };

 int main()
 {

 Class obj1;

 obj1.classname = "ClassForClass";

 obj1.printname();

 return 0;

 }

 //Structure
 #include <iostream>
 using namespace std;

struct Point {
int x,y;
};

int main()
{
struct Point arr[10];

arr[0].x = 10;
arr[0].y = 20;

cout<<arr[0].x<<", "<<arr[0].y;

return 0;
}

//Union
#include <iostream>
using namespace std;

union test {
int x,y;
};

int main()
{
union test t;

t.x=2;

cout<< "After making x=2:" <<endl <<"x = " << t.x << ", y = " << t.y << endl;

return 0;
}

//Enumeration
#include<iostream>
using namespace std;

enum week { Mon, Tue, Wed, Thur, Fri, Sat, Sun };

int main()
{
enum week day;

day=Wed;

cout<<day;

return 0;
}

//Typedef
#include<iostream>
using namespace std;

typedef unsigned char BYTE;

int main()
{
BYTE b1, b2;
b1='c';
cout<<" "<<b1;
return 0;
}