#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    char c;
    while (cin>>c) {
        /* code */
        if (c=='a' || c=='z' || c=='A' || c == 'Z' ) {
            if (c=='a'||c=='A') {
                cout<<char(c+('z'-'a'))<<c<<char(c+1)<<endl;
            }else{
                cout<<char(c-1)<<c<<char(c-('z'-'a'))<<endl;
            }
        }else if ((c>'a' && c<'z')||(c>'A'&&c<'Z')) {
            cout<<char(c-1)<<c<<char(c+1)<<endl;
        }
    }
    return 0;
}
