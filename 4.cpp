#include <stdlib.h>
#include <iostream>
using namespace std;
#define N 20
int main()
{
	int n,m[N],temp;
	for(int i=0; i<N;i++)m[i]=1;
	cin>>n;
	temp=n-1;
	do
	{
		for(int i=0; i<n;i++)
		{
			if(i==n-1 || m[i+1]==0){
				cout<<m[i]<<endl;
				break;
			}
			else
			cout<<m[i]<<" ";
			}
			if(m[temp]-1>=m[temp-1]+1&&temp>=1)m[temp]--,m[temp-1]++;
			else{
				m[temp-1]+=m[temp];
				m[temp--]=0;
			}	
				}
				while(m[0]!=0);
	}
