#include <iostream>
#include <string>
using namespace std;

int main()
{
  char decrypt;
  string text="idmmn>lhs";//hello?mir
  char arr1 [30]= {};
  string passw;

  const char key=1;
  for(int i=0;i<text.length();i++){
    int ord=(int)text[i]^key;
    arr1[i]=(char)ord;
  }

  for(int j=0;j<text.length();j++){
    int ord=(int)arr1[j]^key;
    decrypt=(char)ord;
}
int i=0;
while(i<3){
  cout<<"Введите пароль:";
  cin>>passw;
if(passw==arr1){
  cout<<"Вы ввели правильно пароль";
  break;
}
else{
  cout<<"Вы ввели пароль неверно"<<endl;
  i++;
}
}
}
//hello?mir
//crypt+=chr(ord(i)^ord(key))
//ord('i')==(int)c
///chr()==(char)
