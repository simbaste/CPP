//
// main.cpp for  in /home/simomb_s/piscine_cpp_d06
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Mon Jan 11 09:26:02 2016 stephanedarcy simomba
// Last update Mon Jan 11 17:52:08 2016 stephanedarcy simomba
//

#include <fstream>
#include <string>
#include <iostream>

int		main(int ac, char **av)
{

  char		c;
  int		i(1);

  if (ac > 1)
    {
      while (i < ac)
	{
	  std::ifstream	file(av[i]);
	  if (file)
	    {
	      c = file.get();
		while (file.good())
		  {
		    std::cout << c;
		    c = file.get();
		  }
	      file.close();
	    }
	  else
	    std::cerr << "my_cat <" << av[i] << ">: No such file directory" << std::endl;
	  i++;
	}
    }
  else
    std::cerr << "my_cat: Usage : ./my_cat file [...]" << std::endl;
  return (0);
}
