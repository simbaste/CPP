#include "Lemon.h"
#include "Banana.h"
#include "FruitNode.h"
#include "FruitBox.h"
#include "Lime.h"
#include "LittleHand.h"
#include "Coconut.h"

int main(void)
{
  Lemon	**l = new Lemon*[6];
  Banana **b = new Banana*[6];
  Lime **li = new Lime*[6];
  Coconut **c = new Coconut*[6];

  FruitBox unsorted(25);
  FruitBox lemons(1);
  FruitBox bananas(6);
  FruitBox limes(6);

  for (int i = 0; i < 6; i++) {
    c[i] = new Coconut;
    unsorted.putFruit(c[i]);
  }

  for (int i = 0; i < 6; i++) {
    l[i] = new Lemon;
    unsorted.putFruit(l[i]);
  }

  for (int i = 0; i < 6; i++) {
    b[i] = new Banana;
    unsorted.putFruit(b[i]);
  }

  for (int i = 0; i < 6; i++) {
    li[i] = new Lime;
    unsorted.putFruit(li[i]);
  }
  std::cout << "Nbfruits : " << unsorted.nbFruits() << std::endl;
  std::cout << "Nbfruits : " << lemons.nbFruits() << std::endl;
  std::cout << "Nbfruit : " << bananas.nbFruits() << std::endl;
  std::cout << "Nbfruit : " << limes.nbFruits() << std::endl;

  LittleHand::sortFruitBox(unsorted, lemons, bananas, limes);

  std::cout << "Nbfruits : " << lemons.nbFruits() << std::endl;
  std::cout << "Nbfruits : " << unsorted.nbFruits() << std::endl;
  std::cout << "Nbfruit : " << bananas.nbFruits() << std::endl;
  std::cout << "Nbfruit : " << limes.nbFruits() << std::endl;

  return 1337;
}
