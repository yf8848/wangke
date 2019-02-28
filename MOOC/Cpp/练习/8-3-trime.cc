#include <iostream>
#include <string>

using namespace std;

void trim(const char* s,int& x,int &y){
    int i=0;
    bool has=false;

    while(true){
        if(*(s+i)=='#'){
            break;
        }
        
        if(*(s+i)==' ')
        {
            if(!has) x=i;
            ++i;
        }else{
            y=i;
            has=true;
            ++i;
        }
    }

}

int main(){
    int x=0,y=0,k=0;
    string s;
    getline(cin, s);

    trim(s.c_str(),x,y);
    for(int i=x+1;i<=y;++i)
    {
        cout<<s[i];
    }
    cout<<"#\n";
    return 0;
}