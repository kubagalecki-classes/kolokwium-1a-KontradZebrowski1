#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne
class Penne : public Makaron
{
  public:
  virtual ~Penne();
  virtual double ileMaki(unsigned P) const
  {
    return (double) P;
  }
};

// tutaj definicja metody gotujMakaron
static Makaron* gotujMakaron(std::string& N)
{
  if(N.front() == N.back())
  {return new Tagliatelle(3.14, 0.42, 0.1);}
  else
  {return new Penne;}
}