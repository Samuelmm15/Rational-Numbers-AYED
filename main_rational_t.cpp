// AUTOR: Samuel Martín Morales
// FECHA: 15/02/2023
// EMAIL: alu0101359526@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html
// COMPILACIÓN: g++ -g rational_t.cpp main_rational_t.cpp -o main_rational_t

// pauta de estilo [92]: comentarios multilínea usando solo "//"

// Librerías incluidas
#include <iostream>
#include <cmath>

// pauta de estilo [41]: ficheros de cabecera agrupados y separados
#include "rational_t.hpp"

// Se hace uso de espacio de nombre std
using namespace std;

// Función principal
int main()
{
  rational_t a(1, 2), b(3), c;

  cout << "a.value()= " << a.value() << endl;
  cout << "b.value()= " << b.value() << endl;
  cout << "c.value()= " << c.value() << endl;

  cout << "a: ";
  a.write();
  cout << "b: ";
  b.write();

  c.read();
  cout << "c: ";
  c.write();

  // FASE II
  rational_t x(1, 3), y(2, 3);
  x.write();
  y.write();
  cout << "x == y? " << (x.is_equal(y) ? "true" : "false") << endl;
  cout << "x < y? " << (x.is_greater(y) ? "true" : "false") << endl;
  cout << "x > y? " << (x.is_less(y) ? "true" : "false") << endl;

  // Otro ejemplo para comprobar el funcionamiento de los métodos
  // rational_t w(2, 3), z(2, 3);
  // w.write();
  // z.write();
  // cout << "w == z? " << (w.is_equal(z) ? "true" : "false") << endl;
  // cout << "w < z? " << (w.is_greater(z) ? "true" : "false") << endl;
  // cout << "w > z? " << (w.is_less(z) ? "true" : "false") << endl;

  // FASE III
  cout << "a + b: ";
  a.add(b).write();
  
  cout << "b - a: ";
  b.substract(a).write();

  cout << "a * b: ";
  a.multiply(b).write();
  
  cout << "a / b: ";
  a.divide(b).write();
  
  return 0;
}