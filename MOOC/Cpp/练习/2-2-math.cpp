#include <iostream>
#include <cmath>

int
main(){
    double c;
    std::cin>>c;
    std::cout<<(sin(c*c)/(1-cos(c)))<<std::endl;

    return 0;
}
