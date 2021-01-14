#include "catch.hpp"

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)
class Makaron
{
  public:
  static Makaron* gotujMakaron(const std::string& N);
    
  virtual ~Makaron();
virtual double ileMaki(unsigned P) const = 0;
};

// Zad1
// tutaj definicja klasy Tagliatelle
class Tagliatelle : public Makaron
{  
private:
  double        L;
  double        W;
  double        R;
  static const double  C;

public:

  Tagliatelle(double l, double w, double r): L(l), W(w), R(r) {};
  Tagliatelle(): L(0.5), W(0.5), R(0.5) {};
  //virtual ~Tagliatelle();
  
  virtual double ileMaki(unsigned P) const override
  {
    return P * L * W * (1. - R) * C;
  }
};