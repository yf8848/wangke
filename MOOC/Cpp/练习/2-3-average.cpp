#include <iostream>
#include <cmath>

int
main(){
    int a,b,c;
    std::cin>>a>>b>>c;
    int sum=a+b+c;
    std::cout<<sum<<"\n"<<sum/3.0<<"\n"<<int(sum/3.0+0.5)<<std::endl;

    return 0;
}
