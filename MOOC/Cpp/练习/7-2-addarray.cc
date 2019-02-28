#include <iostream>
#include <vector>

using namespace std;
vector<int> arr;

int sum_array(const vector<int>& arr){
    int sum=0;
    for(int i =0;i<arr.size();++i){
        sum+=arr[i];
    }
    return sum;
}

void add_array(int a, int *sum){
    arr.push_back(a);
    *sum = sum_array(arr);
}

int main(){
    int a,b=0;
    while(cin>>a){
        if(-1==a){
            break;
        }
        add_array(a,&b);
    }
    cout<<b<<endl;

    return 0;
}