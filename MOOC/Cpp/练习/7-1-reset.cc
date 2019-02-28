#include <iostream>
#include <cmath>
using namespace std;

void reset(int *a, int *b)
{
    int n = *a+*b+1;
    *a= n/2;
    *b=*a;
}

int main()
{
    int a=0,b=0;
    cin>>a>>b;
    reset(&a,&b);

    cout<<a<<" "<<b<<endl;

    return 0;
}