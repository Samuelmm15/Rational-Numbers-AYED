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

#include "rational_t.hpp"

// Implementación del constructor de la clase rational_t
rational_t::rational_t(const int n, const int d)
{
  assert(d != 0);
  num_ = n, den_ = d;
}

// pauta de estilo [87]: 3 líneas de separación entre métodos

// pauta de estilo [83]: tipo retornado en línea anterior al método
// Implementación del método get_num
int
rational_t::get_num() const
{
  return num_;
}



// Implementación del método get_den
int
rational_t::get_den() const
{
  return den_;
}



// Implementación del método set_num
void
rational_t::set_num(const int n)
{
  num_ = n;
}



// Implementación del método set_den
void
rational_t::set_den(const int d)
{
  assert(d != 0);
  den_ = d;
}



// Implementación del método value
double
rational_t::value() const
{ 
  return double(get_num()) / get_den();
}



// comparaciones
// Implementación del método is_equal
bool
rational_t::is_equal(const rational_t& r, const double precision) const
{
    return (fabs(this->value() - r.value()) < precision);
}



// Implementación del método is_greater
bool
rational_t::is_greater(const rational_t& r, const double precision) const
{
    if (this->value() == r.value())
        return false;
    else
        return (this->value() - r.value() < precision);
}



// Implementación del método is_less
bool
rational_t::is_less(const rational_t& r, const double precision) const
{
    if (this->value() == r.value())
        return false;
    else
        return (this->value() - r.value() > -precision);
}

/// Implementación de la modificación de la primera práctica, para la comprobación de que un número racional sea positivo o negativo
bool
rational_t::is_positive() const
{
    return (this->value() > 0);
}

// operaciones
// Implementación de la operación de suma
rational_t
rational_t::add(const rational_t& r)
{
    return rational_t(get_num() * r.get_den() + r.get_num() * get_den(), get_den() * r.get_den());
}



// Implementación de la operación de resta
rational_t
rational_t::substract(const rational_t& r)
{
    return rational_t(get_num() * r.get_den() - r.get_num() * get_den(), get_den() * r.get_den());
}



// Implementación de la operación de multiplicación
rational_t
rational_t::multiply(const rational_t& r)
{
    return rational_t(get_num() * r.get_num(), get_den() * r.get_den());
}



// Implementación de la operación de división
rational_t
rational_t::divide(const rational_t& r)
{
    return rational_t(get_num() * r.get_den(), get_den() * r.get_num());
}



// E/S
// Implementación del método write
void
rational_t::write(ostream& os) const
{
  os << get_num() << "/" << get_den() << "=" << value() << endl;
}



// Implementación del método read
void 
rational_t::read(istream& is)
{
  cout << "Numerador? ";
  is >> num_;
  cout << "Denominador? ";
  is >> den_;
  assert(den_ != 0);
}
