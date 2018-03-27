#include <iostream>
using namespace std;
int main()
{
	int a=2,b=-1,c=2;
	if(a<b)
		if(b<c) c=0;
	else
		c+=1;
	cout<<c<<endl;
return 0;
}
