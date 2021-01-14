#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne
class Penne : public Makaron
{
  public:
  virtual ~Penne() = default;
  virtual double ileMaki(unsigned P) const
  {
    return (double) P;
  }
};

// tutaj definicja metody gotujMakaron
/*
const Makaron* Makaron::gotujMakaron(const std::string& N)
{
  if(N.front() == N.back())
  {return new Tagliatelle(3.14, 0.42, 0.1);}
  else
  {return new Penne;}
}
*/
Makaron* Makaron::gotujMakaron(const std::string& N)
{
  if(N.front() == N.back())
  {return new Tagliatelle(3.14, 0.42, 0.1);}
  else
  {return new Penne();}
}