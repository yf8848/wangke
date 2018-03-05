#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int
main(){
    string c;
    cin>>c;
    transform(c.begin(),c.end(),c.begin(),::toupper);
    std::cout<<c<<std::endl;

    return 0;
}