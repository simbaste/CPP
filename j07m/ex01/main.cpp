//
// main.cpp for  in /home/simomb_s/piscine_cpp_d07m/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Tue Jan 12 13:17:07 2016 stephanedarcy simomba
// Last update Tue Jan 12 13:20:19 2016 stephanedarcy simomba
//

#include "Federation.hh"
#include "Warpsystem.hh"

int main(void)
{
  Federation::Starfleet::Ship UssKreog(289, 132, "Kreog", 6);
  Federation::Ship Independant(150, 230, "Greok");
  WarpSystem::QuantumReactor QR;
  WarpSystem::QuantumReactor QR2;
  WarpSystem::Core core(&QR);
  WarpSystem::Core core2(&QR2);

  UssKreog.setupCore(&core);
  UssKreog.checkCore();
  Independant.setupCore(&core2);
  Independant.checkCore();

  QR.setStability(false);
  QR2.setStability(false);
  UssKreog.checkCore();
  Independant.checkCore();
  return 0;
}
