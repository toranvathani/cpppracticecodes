//if else if
#include<iostream>
using namespace std;

int main()
{
int i=20;

if(i==10)
cout<<"i is 10";

else if(i==15)
cout<<"i is 15";

else if(i==20)
cout<<"i is 20";

else
cout<<"i is not present";

return 0;
}

//switch
#include <iostream>
using namespace std;

int main()
{
    char x = 'A';

    switch (x) {
    case 'A':
        cout << "Choice is A";
        break;
    case 'B':
        cout << "Choice is B";
        break;
    case 'C':
        cout << "Choice is C";
        break;
    default:
        cout << "Choice other than A, B and C";
        break;
    }
    return 0;
}

//break
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i < 10; i++) {

        if (i == 5)
            break;
        cout << i << " ";
    }
    return 0;
}

//do-while
#include <iostream>
using namespace std;

int main()
{
    int i = 2;

    do {
        cout << "Hello World\n";

        i++;

    } while (i < 1);

    return 0;
}