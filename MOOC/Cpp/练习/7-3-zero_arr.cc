#include <iostream>

using namespace std;

void zero_arr(int* p, int n){
    for(int i=0;i<n;i++){
        p[i]=0;
    }
}

void print_arr(int* p,int n){
    for(int i=0;i<n;i++){
        if(i==0) cout<<p[i];
        else cout<<" "<<p[i];
    }
    cout<<endl;
}

int main()
{
    int a[100];
    int c,i=0;
    while(cin>>c){
        if(c == -1){break;}
        a[i++]=c;
    }   
    cin>>c;

    zero_arr(a,c);
    print_arr(a,i);

    return 0;
}