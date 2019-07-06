#include "zaschifr.h"
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <cctype>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <regex>
using namespace std;
void zaschifr(){
  ofstream fout;
  char arr1 [3000]= {};
  char arr2 [3000]= {};
  char arr3 [10]= {'\'',',','.','?','!','\"',';',':','-',};
  regex re(R"(’)");
  string s="",s1;
  ifstream f("Nezaschifr.txt");
  fout.open("Zaschifr.txt");

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
                          {' ','_'}};

    while (getline(f, s1))
              {
                  s += s1;
                }

                int elem_v_massive1=0;
                while(elem_v_massive1<9){//замена нечитабельных символов на пробел
                for(int i=0;i<s.length();i++){
                  replace(s.begin(), s.end(), arr3[elem_v_massive1],' ');
                  if(i==s.length()-1){
                    elem_v_massive1++;
                  }

                }
                }
                s=regex_replace(s,re,"");

  for ( int i = 0 ; i < s.length() ; ++i ){
        if ( toupper(s[i]) == s[i] ){//Замена всех больших
          s[i] = tolower (s[i]);//символов на маленькие
        }
        }

      for(int i=0;i<s.length();i++){

        arr1[i]=Keys1[s[i]];
        fout<<arr1[i];

}

fout.close();
f.close();
}
