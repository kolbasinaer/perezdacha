#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a,b,t,s,k,m,in,n;
    k=0;
    in=0;
    n=0;
    cin>>a>>b;
    if (a%2==0)
    a = a+1;
    for(int i=a;i<=b;i=i+2){
        s=0;
        t=i;
        n=0;
        while(t!=0){
            s+=t%2;
            t/=2;
            n++;
        }
        n = n - s;
        if (n == 5 && i%2 == 1 && i%3 == 0 && i%11 == 0){
            k++;
            m=i;
            in=1;
        }

    }
    if(in>0)
        cout<<k<<" "<<m;
    else
        cout<<in<<" "<<in;
}
