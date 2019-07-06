#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
  string text="HeLlo PriVeT";
  char arr1 [30]= {};
  char arr2 [30]= {};
  map <char,char> Keys1 = {{ 'a', '!' },{ 'b', '@' },
                          { 'c', '#' },{'d','$'},
                          {'e','%'},{'f','^'},
                          {'g','&'},{'h','*'},
                          {'i','('},{'j',')'},
                          {'k','-'},{'l','='},
                          {'m','+'},{'n','?'},
                          {'o',':'},{'p',';'},
                          {'q','<'},{'r','>'},
                          {'s','/'},{'t','['},
                          {'u',']'},{'v','{'},
                          {'w','}'},{'x','|'},
                          {'y','.'},{'z',','},
                          {' ','~'},{'Q','a'},
                          {'W','s'},{'E','d'},
                          {'R','f'},{'T','g'},
                          {'Y','h'},{'U','j'},
                          {'I','k'},{'O','l'},
                          {'A','q'},{'S','w'},
                          {'D','e'},{'F','r'},
                          {'G','t'},{'H','y'},
                          {'J','u'},{'K','i'},
                          {'L','o'},{'Z','x'},
                          {'X','z'},{'C','v'},
                          {'V','c'},{'B','n'},
                          {'N','b'},{'M','p'},
                          {'P','m'}};


      for(int i=0;i<text.length();i++){
        arr1[i]=Keys1[text[i]];//cout<<Keys1['a']->'!'
}

cout<<"Зашифрованный текст:"<<' '<<arr1;
cout<<endl;

for(int i=0;i<text.length();i++){
for (auto it = Keys1.begin(); it != Keys1.end(); ++it)
  {
    if(arr1[i]==Keys1[it->first]){
    arr2[i]+=it->first;
  }}}


cout<<"Расшифрованный текст:"<<arr2<<endl;
}
