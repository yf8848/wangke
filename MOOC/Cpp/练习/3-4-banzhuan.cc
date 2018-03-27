#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int men=0,women=0,child=0,zhuan=0,i=0;

    cin>>zhuan;
    for ( men = 0; men < zhuan/4; men++)
        for ( women = 0; women < zhuan/3; women++)
            for ( child = 0; child < zhuan*2; child+=2) {
                if ((men*4 + women*3+child/2 == zhuan) && (men + women +child == zhuan)) {
                    cout<<"men"<<men<<"\nwomen"<<women<<"\nchildren"<<child<<endl;
                    i++;
                }
            }

    if (i==0) {
        cout << "no result!" << endl;
    }

    return 0;
}
