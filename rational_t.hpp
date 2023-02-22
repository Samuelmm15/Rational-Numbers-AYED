// AUTOR: Samuel Martín Morales
// FECHA: 15/02/2023
// EMAIL: alu0101359526@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

// pauta de estilo [92]: comentarios multilínea usando solo "//"

// #pragma once sirve para evitar que se incluya más de una vez el mismo fichero
#pragma once

// # Librerías incluidas
#include <iostream>
#include <cassert>
#include <cmath>

// pauta de estilo [5]
# define 
EPSILON 1e-6
// Se hace uso del espacio de nombre para evitar tener que hacer uso de std cada vez
using namespace std;

// Definición de la clase rational_t
class rational_t
{
  // pautas de estilos [44] y [73]: primero "public" y después "private"
public:
    // Declaración del constructor de la clase que recibe dos enteros como parámetros
  rational_t(const int = 0, const int = 1);
    // Declaración del destructor de la clase
  ~rational_t() {}
  
  // pauta de estilo [71]: indentación a 2 espacios
  // getters
  // Obtención del numerador
  int get_num() const;
  // Obtención del denominador
  int get_den() const;
  
  // setters
  // Asignación del numerador
  void set_num(const int);
  // Asignación del denominador
  void set_den(const int);

  double value(void) const;

  // FASE II
  // bool is_equal(const rational_t&, const double precision = EPSILON) const;
  // Comprueba si dos números racionales son iguales
  bool is_equal(const rational_t&, const double precision = EPSILON) const;
  // bool is_greater(const rational_t&, const double precision = EPSILON) const;
  // Comprueba si un número racional es mayor que otro
  bool is_greater(const rational_t&, const double precision = EPSILON) const;
  // bool is_less(const rational_t&, const double precision = EPSILON) const;
  // Comprueba si un número racional es menor que otro
  bool is_less(const rational_t&, const double precision = EPSILON) const;

  /// Modificación del código para comprobar si un número racional es positivo o negativo
  bool is_positive(void) const;
  
  // FASE III
  // rational_t add(const rational_t&);
  // Suma dos números racionales y devuelve otro número racional
  rational_t add(const rational_t&);
  // rational_t substract(const rational_t&);
  // Resta dos números racionales y devuelve otro número racional
  rational_t substract(const rational_t&);
  // rational_t multiply(const rational_t&);
  // Multiplica dos números racionales y devuelve otro número racional
  rational_t multiply(const rational_t&);
  // rational_t divide(const rational_t&);
  // Divide dos números racionales y devuelve otro número racional
  rational_t divide(const rational_t&);

  // Método para escribir el número racional
  void write(ostream& = cout) const;
  // Método para leer el número racional
  void read(istream& = cin);
  
private:
  // pauta de estilo [11]: nombre de los atributos seguido de "_"
  // Declaración de los atributos de la clase
  int num_, den_;
};
