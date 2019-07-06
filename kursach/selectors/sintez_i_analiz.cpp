#include <iostream>
#include <stdio.h>
using namespace std;
enum zapusk{sintez=1,analiz};
int main(){
int numb, osh, code_pr, priznak;


	cout << "Выберите одну из операций: " << endl;
	cout << "1. Синтез слова состояния" << endl;
	cout << "2. Анализ слова состояния" << endl;
	int i;
	cin >> i;
  switch(i){
    case sintez:
		printf("Введите номер канала от 0 до 15:  ");
		scanf("%d", &numb);
		printf("Признак ошибки 0 до 1:  ");
		scanf("%d", &osh);
		printf("Введите код причины прерывания от 0 до 511:  ");
		scanf("%d", &code_pr);
		printf("Введите признак завершения программы в канале от 0 до 1:  ");
		scanf("%d", &priznak);
    int Word;
		Word = (numb & 0xF) << 12;
		Word += (osh & 1) << 11;
		Word += (code_pr & 0x1FF) << 2;
		Word += (priznak & 1) << 1;
		printf("\nСлово состояния устройства = %04x\n", Word);
    break;


    case analiz:
		int Words;
		printf("Введите слово состояния физического адреса диска: ");
		scanf("%x", &Words);
		numb = (Words >> 12) & 0xF;
		osh = (Words >> 11) & 1;
		code_pr = (Words >> 2) & 0x1FF;
		priznak = (Words >> 1) & 1;
		printf("номер канала  от 0 до 15:  %d\n", numb);
		printf("признак ошибки от 0 до 1: %d\n", osh);
		printf("код причины прерывания от 0 до 511:  %d\n", code_pr);
		printf("признак завершения программы в канале от 0 до 1: %d\n ", priznak);
    break;
  }}
