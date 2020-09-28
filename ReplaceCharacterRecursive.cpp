#include <iostream>
using namespace std;
 void replace(char str[],char c1,char c2){
    if(str[0]=='\0')
        return;
    if(str[0]==c1)
        str[0]=c2;
    replace(str+1,c1,c2);
 }
int main()
{
   char ch[1000];
   cin>>ch;
   replace(ch,'a','x');
    cout<<ch;
   return 0;
}
