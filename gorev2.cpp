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
      std::cout << "y�z";
      break;
	    case 2:
      std::cout << "ikiy�z";
      break;
	      case 3:
      std::cout << "��y�z";
      break;
	      case 4:
      std::cout << "d�rty�z";
      break;
	      case 5:
      std::cout << "be�y�z";
      break;
	      case 6:
      std::cout << "alt�y�z";
      break;
	      case 7:
      std::cout << "yediy�z";
      break;
	      case 8:
      std::cout << "sekizy�z";
      break;
	      case 9:
      std::cout << "dokuzy�z";
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
      std::cout << "k�rk";
      break;
	      case 5:
      std::cout << "elli";
      break;
	      case 6:
      std::cout << "altm��";
      break;
	      case 7:
      std::cout << "yetmi�";
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
      std::cout << "��";
      break;
	      case 4:
      std::cout << "d�rt";
      break;
	      case 5:
      std::cout << "be�";
      break;
	      case 6:
      std::cout << "alt�";
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
