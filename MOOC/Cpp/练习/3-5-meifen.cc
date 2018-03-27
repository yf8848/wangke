#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int i,j,k,l,m=0,f=0;

    cin>>m;
    if (m<0 || m>99) {
        cout<<"the money is invalid!"<<endl;
        return 0;
    }

    for ( i = 0; i <= m/25; i++)
        for ( j = 0; j <= m/10; j++)
            for ( k = 0; k <= m/5; k++)
                for ( l = 0; l <= m/1; l++) {
                    if (i*25 + j*10+k*5+l*1 == m) {
                        f++;
                    }
                }



    cout << f << endl;
    return 0;
}
