#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {

    int n;
    int jz[5][5];
    cin>>n;
    if (n<1 || n>5) {
        cout << "matrix order error"<<endl;
        return 0;
    }

    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            cin>>jz[i][j];
        }
    }

    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            cout<<jz[j][i];
            j==(n-1)?(cout<<endl):(cout<<' ');
        }
    }

    return 0;
}
