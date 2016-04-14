
#include <iostream>
#include "Skat.h"

int main()
{
  Skat s("Junior", 5);
  int	stock = 0;


  std::cout << s.stimPaks() << std::endl;
  s.stimPaks() = 234;
  s.shareStimPaks(4, stock);
  std::cout << stock << std::endl;

  std::cout << "Soldier " << s.name() << std::endl;

  s.status();

  s.useStimPaks();

  return 0;
}
