#include <iostream>
#include <string>

using namespace std;

int main () {

   string str1 = "Hello";
   string str2 = "World";
   string str3;
   int  len ;
   
string s1 = "abc";
string s2 = "abc";
string s3 = "abcdef";

   // copy str1 into str3
   str3 = str1;
   cout << "str3 : " << str3 << endl;

   // concatenates str1 and str2
  str3 = str1 + str2;
   cout << "str1 + str2 : " << str3 << endl;

   // total length of str3 after concatenation
   len = str3.size();
   cout << "str3.size() :  " << len << endl;

//append str3 to str1
   str1 += str3;
   cout<<"str1 after append:"<<str1;
   
   cout<<"---------------------"<<endl;
  

bool flag1 = ( s1 == s2 ); // flag1 = false now
cout<<flag1<<endl;    //0
bool flag2 = ( s2 < s3 ); // flag2 = true now
cout<<flag2<<endl;    //1
   return 0;
}


