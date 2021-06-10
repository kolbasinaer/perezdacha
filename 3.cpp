#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
   ifstream F ("input.txt");
   string s,l,m;
   char c;
   char str;
   getline (F,s);
   int maxlen = 0, curlen = 0;
   l ="";
   for(int i=0; i < s.length();i++){
   if(s[i] != s[i-1]){
    curlen++;
  l.push_back(s[i]);
    if(curlen > maxlen){
        maxlen = curlen;
        m = l;
    }
}
   else {
    curlen = 1;
    l.clear();
    l.push_back(s[i]);
}
}
if (maxlen > 1)
   cout<<m<<endl<<maxlen;
   else
   cout << 0;
}
