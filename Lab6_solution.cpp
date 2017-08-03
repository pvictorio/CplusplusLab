#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// function prototypes
int power(int x, int y = 1.0);
void print(string, int);

int main()
{
    int x = 3;
    x = power(x, 3);
    //cout << "Value of power(3,x) is " << x << endl;
    print("Value of x after step 1 is ", x);
    x = power(x, 2);
    print("Value of x after step 2 is ", x);
    x = power(x);
    print("Value of x after step 3 is ", x);
    x = power(x, 101);
    print("Value of x after step 4 is ", x);
    x = power(3, -5);
    print("Value of x after step 5 is ", x);
    x = 10;
    x = power(x);
    print("Value of x after step 6 is ", x);
    
    return 0;
}

int power(int x ,int y)
{
    int result;
    if (y <= 100)
    {
        result = pow(x , y);
    }
    else
    {
         result = -1;
    }
    return result;
}

void print(string s, int x)
{
    cout << s << " is " << x << endl;
}
