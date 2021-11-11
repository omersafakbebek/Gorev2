#include <iostream>
#include <locale.h>	
int main(){
	setlocale(LC_ALL, "Turkish");
	 
	  int day ;
	  std::cin >> day;
	switch (day/100) {
		    case 0:
      std::cout << "";
      break;
    case 1:
      std::cout << "yüz";
      break;
	    case 2:
      std::cout << "ikiyüz";
      break;
	      case 3:
      std::cout << "üçyüz";
      break;
	      case 4:
      std::cout << "dörtyüz";
      break;
	      case 5:
      std::cout << "beþyüz";
      break;
	      case 6:
      std::cout << "altýyüz";
      break;
	      case 7:
      std::cout << "yediyüz";
      break;
	      case 8:
      std::cout << "sekizyüz";
      break;
	      case 9:
      std::cout << "dokuzyüz";
      break;	
  }day=day%100;
  	switch (day/10) {
		    case 0:
      std::cout << "";
      break;
    case 1:
      std::cout << "on";
      break;
	    case 2:
      std::cout << "yirmi";
      break;
	      case 3:
      std::cout << "otuz";
      break;
	      case 4:
      std::cout << "kýrk";
      break;
	      case 5:
      std::cout << "elli";
      break;
	      case 6:
      std::cout << "altmýþ";
      break;
	      case 7:
      std::cout << "yetmiþ";
      break;
	      case 8:
      std::cout << "seksen";
      break;
	      case 9:
      std::cout << "doksan";
      break;	
  }day=day%10;
  	switch (day) {
		    case 0:
      std::cout << "";
      break;
    case 1:
      std::cout << "bir";
      break;
	    case 2:
      std::cout << "iki";
      break;
	      case 3:
      std::cout << "üç";
      break;
	      case 4:
      std::cout << "dört";
      break;
	      case 5:
      std::cout << "beþ";
      break;
	      case 6:
      std::cout << "altý";
      break;
	      case 7:
      std::cout << "yedi";
      break;
	      case 8:
      std::cout << "sekiz";
      break;
	      case 9:
      std::cout << "dokuz";
      break;	
  }
  
  return 0;
}
