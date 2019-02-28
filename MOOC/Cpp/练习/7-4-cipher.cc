#include <iostream>
#include <string>

using namespace std;

void caesar(string& s){
    string temps;
    for(int i=0;i<s.size();++i){
        char c=s[i];
        if(s[i]>'a' && s[i]<'z'){
            if(s[i]>='x'){
                c='a'+'z'-s[i];
            }else{
                c=s[i]+3;
            }
            c+='A'-'a';
        }else{
            if(s[i]>='X'){
                c='A'+'Z'-s[i];
            }else{
                c=s[i]+3;
            }
            c+='a'-'A';
        }
        
        temps.push_back(c);
    }
    s=temps;
}

void oddeven(string &s){
    string a_str,b_str;
    for(int i=0;i<s.size();++i)
    {
        if(i%2==0) a_str+=s[i];
        else b_str+=s[i];
    }
    s=a_str+b_str;
}

int main()
{
    string s;
    int n;
    cin>>s;
    cin>>n;
    switch(n){
        case 1:
            caesar(s);
            break;
        case 2:
            oddeven(s);
            break;
    }
    cout<<s<<endl;

    return 0;
}