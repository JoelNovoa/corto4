#include <iostream>
using namespace std;

float comparar(float alumno[], float prom)
{
  int i, aprobados = 0, reprobados = 0;

  for (i = 0; i < 25; i++)
  {
    if (prom > alumno[i])
    {
      aprobados = aprobados + 1;
    }

    if (prom < alumno[i])
    {
      reprobados = reprobados + 1;
    }
  }
  cout<<"el numero de alumnos que tienen altura mayor a la media es : "<<aprobados<<endl;
  cout<<"el numero de alumnos que tienen altura menor a la media es : "<<reprobados<<endl;

}

float promedio(float alumno[])
{
  int i;
  float suma, prom;
  for (i = 0; i < 25; i++)
  {
    suma = suma + alumno[i];
  }
  prom = suma / 25;
  cout<<"el promedio de la estatura es: "<<prom<<endl;
  return prom;
}

int main()
{
  int cantidad, i, c = 0;
  float prom, suma, alumno[25];
  for (i = 0; i < 25; i++)
  {
    cout << "Ingrese la estatura del alumno " << c + 1 << ":" << endl;
    cin >> alumno[i];
    c++;
  }
  prom = promedio(alumno);
  promedio(alumno);
  comparar(alumno, prom);
}