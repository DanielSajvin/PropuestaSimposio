#include <iostream>
//Mario Daniel Sajvin Gomez 1612921
int main()
{
  std::cout << "Propuesta de programa para el simposio de Ingenieria 2021\n";


  int sistem, indus, civil;

  cout << "Ingrese la cantidad de estudiantes de la ingenieria en sistemas\n";
  cin >> sistem; 
  cout << endl;

  cout << "Ingrese la cantidad de estudiantes de la ingenieria industrial\n";
  cin >> indus;
  cout << endl;

  cout << "Ingrese la cantidad de estudiantes de la ingenieria civil\n";
  cin >> civil;
  cout << endl;

  if (sistem > indus && sistem > civil)
  {
	  cout << "El salon con mayor cantidad de estudiantes es ingenieria en sistemas con: " << sistem << " estudiantes.\n";
  }

  else if (indus > sistem && indus > civil)
  {
	  cout << "El salon con mayor cantidad de estudiantes es ingenieria idustrial con: " << indus << " estudiantes." << endl;
  }

  else if (civil > sistem && civil > indus)
  {
	  cout << "El salon con mayor cantidad de estudiantes es ingenieria civil con: " << civil  << " estudiantes." << endl;
  }

  std::cin.ignore();
  return 0;
}