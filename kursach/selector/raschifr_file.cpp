#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
  int lower;
  int jw=0;
  int elem_v_massive1=0;
  int iw=0;
  float Q=0,W=0,E=0,R=0,T=0,Y=0,U=0,I=0,O=0,P=0;
  float A=0, S=0,D=0,F=0,G=0,H=0,J=0,K=0,L=0;
  float Z=0,X=0,C=0,V=0,B=0,N=0,M=0,pr=0;
  char buf;
  char lower_bukwu;
  map<float,char> myMap;
  string s="",s1;
  ofstream rasshifr;
  rasshifr.open("Rasshifr.txt");//файл на запись
  ifstream fout("Zaschifr.txt");//файл на вход
  ifstream fouts("Zaschifr.txt");
  if(!fout){
    cout<<"Файл Zaschifr.txt не найден"<<endl;
  }
  while (getline(fout, s1))//Функция getline предназначена для ввода данных из потока
            {
                s += s1;//добавление текста в string
              }

  char arr2[s.length()];
  char arr3 [30]={};
  char arr4[27]={'e',' ','o','t','a','n','r','i','s','h','d','l','f',//идеальная
  'c','m','u','g','y','p','w','b','v','k','x','j','q','z'};// частота

  for(int i=0;i<s.length();i++)
        {
            fouts>>arr2[i];//Запись данных из файла в
            lower=arr2[i];//массив
}



for(int j=0;j<s.length();j++){
  if(arr2[j]=='!'){
    Q++;
  }
  if(arr2[j]=='@'){
    W++;
  }
  if(arr2[j]=='#'){
    E++;
  }
  if(arr2[j]=='$'){
    R++;
  }
  if(arr2[j]=='%'){
    T++;
  }
  if(arr2[j]=='^'){
    Y++;
  }
  if(arr2[j]=='&'){
    U++;
  }
  if(arr2[j]=='*'){
    I++;
  }
  if(arr2[j]=='('){
    P++;
  }
  if(arr2[j]==')'){
    E++;
  }
  if(arr2[j]=='-'){
    A++;
  }
  if(arr2[j]=='='){
    S++;
  }
  if(arr2[j]=='+'){
    D++;
  }
  if(arr2[j]=='?'){
    F++;
  }
  if(arr2[j]==':'){
    G++;
  }
  if(arr2[j]==';'){
    H++;
  }
  if(arr2[j]=='<'){
    J++;
  }
  if(arr2[j]=='>'){
    K++;
  }
  if(arr2[j]=='/'){
    L++;
  }
  if(arr2[j]=='['){
    Z++;
  }
  if(arr2[j]==']'){
    X++;
  }
  if(arr2[j]=='{'){
    C++;
  }
  if(arr2[j]=='}'){
    V++;
  }
  if(arr2[j]=='|'){
    B++;
  }
  if(arr2[j]=='.'){
    N++;
  }
  if(arr2[j]==','){
    M++;

}
if(arr2[j]=='_'){
  pr++;
}
}

myMap.emplace(Q*100/s.length(),'!');//добавляем элементы в map
myMap.emplace(W*100/s.length(),'@');
myMap.emplace(E*100/s.length(),'#');
myMap.emplace(R*100/s.length(),'$');
myMap.emplace(T*100/s.length(),'%');
myMap.emplace(Y*100/s.length(),'^');
myMap.emplace(U*100/s.length(),'&');
myMap.emplace(I*100/s.length(),'*');
myMap.emplace(O*100/s.length(),'(');
myMap.emplace(P*100/s.length(),')');
myMap.emplace(A*100/s.length(),'-');
myMap.emplace(S*100/s.length(),'=');
myMap.emplace(D*100/s.length(),'+');
myMap.emplace(F*100/s.length(),'?');
myMap.emplace(G*100/s.length(),':');
myMap.emplace(H*100/s.length(),';');
myMap.emplace(J*100/s.length(),'<');
myMap.emplace(K*100/s.length(),'>');
myMap.emplace(L*100/s.length(),'/');
myMap.emplace(Z*100/s.length(),'[');
myMap.emplace(X*100/s.length(),']');
myMap.emplace(C*100/s.length(),'{');
myMap.emplace(V*100/s.length(),'}');
myMap.emplace(B*100/s.length(),'|');
myMap.emplace(N*100/s.length(),'.');
myMap.emplace(M*100/s.length(),',');
myMap.emplace(pr*100/s.length(),'_');



for (auto it = myMap.begin(); it != myMap.end(); ++it,iw++)//добавляем значения из map в массив
{
    arr3[iw]=myMap[(*it).first];//iw-кол-во элементов,которое должно быть в массиве

}

for (int i=0,j=iw-1;i<j;i++,j--)//делаем reverse массива
{ buf=arr3[i];
   arr3[i]=arr3[j];
   arr3[j]=buf;
}
char arr5[iw];

for(int i=0;i<iw;i++){//обрезаем массив, так как возможно
  arr5[i]=arr4[i];// не все элементы могут встретиться
}


while(elem_v_massive1<iw){//замена символа на букву
for(int i=0;i<s.length();i++){
  replace(s.begin(), s.end(), arr3[elem_v_massive1], arr5[elem_v_massive1]);
  if(i==s.length()-1){
    elem_v_massive1++;
  }
}
}
  rasshifr<<s;//запись из string в файл
  rasshifr.close();
  fout.close();
  fouts.close();
}
