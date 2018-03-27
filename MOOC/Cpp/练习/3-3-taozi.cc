#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int n=0,taozi=1;
    cin>>n;
    for (size_t i = 0; i < n-1; i++) {
        taozi=(taozi+1)*2;
    }

    cout<<taozi<<endl;
    return 0;
}
