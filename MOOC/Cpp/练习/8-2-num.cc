#include <iostream>
using namespace std;

int main()
{
    char *num[] = {"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twlve"};
    int idx;
    cin>>idx;
    cout<<num[idx-1]<<endl;

    return 0;
}