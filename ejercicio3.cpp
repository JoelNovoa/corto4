#include <iostream>
using namespace std;

float promedio(float nota1, float nota2, float nota3, float nota4, float nota5)
{
  float Promedio;

  Promedio = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;
  return (Promedio);
}
int main()
{
  char opcion;
  float nota1, nota2, nota3, nota4, nota5, i, n, notafinal;
  cout << "Ingrese cantidad de alumnos: ";
  cin >> n;

  for (i = 1; i <= n; i++)
  {
    cout << "Ingrese la primera nota: ";
    cin >> nota1;
    cout << "Ingrese la segunda nota: ";
    cin >> nota2;
    cout << "Ingrese la tercera nota: ";
    cin >> nota3;
    cout << "Ingrese la cuarta nota: ";
    cin >> nota4;
    cout << "Ingrese la quinta nota: ";
    cin >> nota5;
    notafinal = promedio(nota1, nota2, nota3, nota4, nota5);

    if (notafinal >= 6)
    {
      cout << "El alumno ha aprobado la materia.\n";
    }
    else
      cout << "El alumno ha reprobado la materia.\n";
  }
  return 0;
}