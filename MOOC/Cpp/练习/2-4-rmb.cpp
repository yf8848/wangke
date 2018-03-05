#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int
main(){
    vector<vector<int> > vvnum;
    vvnum.resize(2);
    vvnum[0].push_back(50);
    vvnum[0].push_back(20);
    vvnum[0].push_back(10);
    vvnum[0].push_back(5);
    vvnum[0].push_back(1);
    vvnum[1].assign(5,0);

    int a,bal=0;;
    cin>>a;
    while(bal!=a)
    {
        
        for(size_t i=0; i<vvnum[0].size();++i)
        {
            if(bal+vvnum[0][i]<=a)
            {
                bal+=vvnum[0][i];
                vvnum[1][i]++;
                break;
            }
        }
    }

    for(size_t i=0; i<vvnum[1].size();++i)
    {
        i==0?cout<<vvnum[1][i]:cout<<" "<<vvnum[1][i];
    }
    cout<<endl;

    return 0;
}