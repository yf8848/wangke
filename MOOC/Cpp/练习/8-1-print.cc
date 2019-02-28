#include <iostream>

using namespace std;


void print_arr(int *p,int n){

    for(int i=0;i<n;++i){
        if(i==0) cout<<*(p+i);
        else cout<<" "<<*(p+i);
    }
    cout<<endl;
}


int main(){
    int m,i;
    int a[1000];
    cin>>m;
    for(i=1;i<=m;i++){
        a[i-1]=i;
    }

    print_arr(a,i-1);

    return 0;
}