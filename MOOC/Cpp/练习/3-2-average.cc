#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    float sec,minsec=101.0,maxsec=0.0,total=0;

    for (size_t i = 0; i < 10; i++) {
        cin>>sec;
        if (sec<0.0 || sec>100.0) {
            cout<<"the score is invalid."<<endl;
            return 0;
        }

        if (sec<minsec) minsec=sec;
        if (sec>maxsec) maxsec=sec;
        total+=sec;
    }
    //cout<<total<<","<<minsec<<","<<maxsec<<endl;;
    total-=(minsec+maxsec);
    cout<<total/8<<endl;

    return 0;
}
