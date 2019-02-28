#include <iostream>
#include <string>

using namespace std;

int a=0,b=0,c=0,m=0;

int fun1(int x1, int x2){
    int x=0;
    for(int i=x1;i<=x2;++i){
        x+=(a*i*i+b*i+c);
    }
    return (x/(x2-x1+1));
}

int fun2(int x1,int x2){
    int x=0;
    for(int i=x1;i<=x2;++i){
        int t=1;
        for(int i=0;i<x;++i) t*=m;
        x+=t;
    }
    return(x/(x2-x1+1));
}

int main(){
    cin>>a>>b>>c;
    cin>>m;
    int s,y;
    cin>>s>>y;

    cout<<fun1(s,y)<<"\n"<<fun2(s,y)<<endl;

    return 0;
}