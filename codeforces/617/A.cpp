#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int q=0;
	q+=t/5;
	t%=5;
	q+=t/4;
	t%=4;
	q+=t/3;
	t%=3;
	q+=t/2;
	t%=2;
	q+=t;
	cout<<q;
	//q+=t;
	return 0;
}