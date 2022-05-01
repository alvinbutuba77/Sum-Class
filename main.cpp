// using class to find sum of two numbers
#include <iostream>
using namespace std;

class sum
{ //declarations
private:
    int a, b, ans;

public:
    void input();
    void calculate();
    void output();

};
//member function definitions
void sum::input()
{
    cout <<"enter first number: ";
    cin >> a;

    cout <<"enter second number: ";
    cin >> b;

}

void sum::calculate()
{
    ans = a + b;
}

void sum::output()
{
    cout <<"the sum is: " << ans;
}


int main()
{
   sum p; //object
   p.input();
   p.calculate();
   p.output();

   return 0;
}
