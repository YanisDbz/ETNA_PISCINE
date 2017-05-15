#include "stdlib.h"
#include "time.h"

int		random_re(int percent)
{	
  int random;

  random = (rand()% 100) + 1;
  if (percent == 33)
  {
  	if(random < 33)
  		return 0;
  	else if(random < 66)
  		return 1;
  	else if (random < 99)
  		return 2;
  	else
  		return 3;
  }
  else if(percent != 3)
  {
  	if (random >= percent)
  		return 0;
  	else 
  		return 1;
  }
  else
  	return (rand()% 3);
}