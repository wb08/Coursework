#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

int main()
{

  vector<char> arr1={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
   'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
    'z','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
    'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    vector<char> arr2={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
     'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
      'z','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
      'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

      int key=4;
      string message="",s1;
      string crypt_message;
      string decrypt_message;
      ifstream fout("zesar.txt");
      if(!fout){
        cout<<"Файл zesar.txt не найден"<<endl;
      }
      while (getline(fout, s1))
                {
                    message += s1;//добавление текста в string

                  }


      for(int i=0;i<key;i++){
        arr2.push_back(arr2[0]);//добавляем в конец нулевой элемент
        arr2.erase(arr2.begin()+0);//удаляем из начала нулевой элемент

      }

      for(int i=0;i<message.size();i++){
        for(int j=0;j<arr1.size();j++){
          if (message[i]==arr1[j]){
            crypt_message+=arr2[j];}}}

      cout<<"Зашифрованное сообщение:"<<crypt_message<<endl;
      for(int i=0;i<crypt_message.size();i++){
        for(int j=0;j<arr1.size();j++){
          if(crypt_message[i]==arr2[j]){
            decrypt_message+=arr1[j];}}}

      cout<<"Расшифрованное сообщение:"<<decrypt_message<<endl;
}
