#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	long long int i=1;
	cin>>n;
	long long int m=2*n;
	while(true){
		if(sqrtl(m)-(int)sqrtl(m)==0){
			cout<<m<<endl;return 0;
		}
	m=m+n;
	}
}
