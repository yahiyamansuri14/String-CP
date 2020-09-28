#include<bits/stdc++.h>
using namespace std;
 int subsequence(string input,string output[]){
     if(input.empty()){
         output[0]="";
         return 1;
     }
     string smallString=input.substr(1);
     int smallStringSize=subsequence(smallString,output);
     for(int i=0;i<smallStringSize;i++){
        output[i+smallStringSize]=input[0]+output[i];
     }
     return 2*smallStringSize;
        
     
 }
int main()
{
   string input;
   cin>>input;
   int n=input.size();
   long long length=pow(2,n);
   string *output=new string[length];
   int count=subsequence(input,output);
   for(int i=0;i<count;i++)
        cout<<output[i]<<endl;
   return 0;
}
