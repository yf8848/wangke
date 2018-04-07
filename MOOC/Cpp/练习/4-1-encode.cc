#include <iostream>
#include <string>

using namespace std;


int main(int argc, char const *argv[]) {

    string str_src;
    cin>>str_src;

    for (size_t i = 0; i < str_src.size(); i++) {
        if (str_src[i]>='a' && str_src[i]<='z') {
            if (str_src[i]>='x') {
                str_src[i]=(str_src[i]+2)%'z'+'a';
            }else{
                str_src[i]+=3;
            }
            str_src[i]-=('a'-'A');
        }else{
            if (str_src[i]>='X') {
                str_src[i]=(str_src[i]+2)%'Z'+'A';
            }else{
                str_src[i]+=3;
            }
            str_src[i]+=('a'-'A');
        }
    }
    cout<<str_src<<endl;
    return 0;
}
