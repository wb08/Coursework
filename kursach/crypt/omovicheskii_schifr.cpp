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
  srand(time(NULL));//чтоб рандом, действительно был рандомом
  string text="once a month my family and i go to the cinema";

  map<char,vector<char>> Keys1={{'a',{'Q','1','!','`','b'}},
{'b',{'W','2','a'}},{'c',{'E','3','d'}},{'d',{'R','4','c'}},
{'e',{'T','5','$',';','\'',':','f'}},
{'f',{'Y','6','e'}},{'g',{'U','7','h'}},{'h',{'I','8','%','\"','g'}},
{'i',{'O','9','^','/','j'}},{'j',{'P','i'}},{'k',{'A','l'}},
{'l',{'S','0','&','?','k'}},{'m',{'D','*','n'}},
{'n',{'F','(','<','m'}},
{'o',{'G',')','>','p'}},{'p',{'H','o'}},
{'q',{'J','r'}},{'r',{'K','_','q'}},
{'s',{'L','+','t'}},
{'t',{'M','=','.','#','|','-','s'}},
{'u',{'N','[','v'}},{'v',{'B','u'}},{'w',{'V',']','x'}},
{'x',{'C','w'}},{'y',{'X','{','z'}},{'z',{'Z','y'}},{' ',{'}'}}};


for(int i=0;i<text.size();i++){
  int length=Keys1[text[i]].size();
  crypt+=Keys1[text[i]][rand()%length];}

cout<<endl;

cout<<"Зашифрованный текст:"<<crypt;

for(int i=0;i<crypt.size();i++){
for (auto it = Keys1.begin(); it != Keys1.end(); ++it)
{
for (int k=0;k<Keys1[it->first].size();k++){
if (crypt[i]==Keys1[it->first][k]){
          decrypt+=it->first;}}}}
cout<<endl;
cout<<"Расшифрованный текст:"<<decrypt;
}
//Омофонический шифр
