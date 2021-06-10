#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,k,t,n,s=0;
	cin>>a>>b;
	for(int i=a; i<=b;i++){
		t=i;
		while(t%2==0){
			t=t/2;
		}
		n=sqrt(t);
		if(n*n==t){
			for(int j=3;j<sqrt(t)-1;j++){
				if(t%j==0){
					k++;
				}
			}
			if(k==1){
				cout<<i<<endl;
				s++;
			}
			k=0;
		}
	}
	if(s==0)
	cout<<s;
}
	
