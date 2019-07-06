#include <iostream>
#include <string>
#include <map>
#include <ctime>//для рандома
#include <vector>

using namespace std;

int main()
{
  string crypt;
  string decrypt;
  srand(time(NULL));
  string text="hello mir";

  map<char,vector<char>> Keys1={{'a',{'Q','1','!','`'}},
{'b',{'W','2'}},{'c',{'E','3'}},{'d',{'R','4'}},
{'e',{'T','5','$',';','\'',':'}},
{'f',{'Y','6'}},{'g',{'U','7'}},{'h',{'I','8','%','\"'}},
{'i',{'O','9','^','/'}},{'j',{'P'}},{'k',{'A'}},
{'l',{'S','0','&','?'}},{'m',{'D','*'}},
{'n',{'F','(','<'}},
{'o',{'G',')','>'}},{'p',{'H'}},
{'q',{'J'}},{'r',{'K','_'}},
{'s',{'L','+'}},
{'t',{'M','=','.','#','|','-'}},
{'u',{'N','['}},{'v',{'B'}},{'w',{'V',']'}},
{'x',{'C'}},{'y',{'X','{'}},{'z',{'Z'}},{' ',{'}'}}};


for(int i=0;i<text.size();i++){
  int length=Keys1[text[i]].size();
  crypt+=Keys1[text[i]][rand()%length];

}

cout<<endl;

cout<<"Зашифрованный текст:"<<crypt;

for(int i=0;i<crypt.size();i++){
  for (auto it = Keys1.begin(); it != Keys1.end(); ++it)
    {
      for (int k=0;k<Keys1[it->first].size();k++){
        if (crypt[i]==Keys1[it->first][k]){
          decrypt+=it->first;
        }
      }
    }
}
cout<<endl;
cout<<"Расшифрованный текст:"<<decrypt;
}
//Омофонический шифр
