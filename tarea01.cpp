#include <iostream>
#include <cmath>

int main ()
{

  double result = 0;
  int NMAX = 100;
  int nmin = 10;
  int n = 0;

  for (n = nmin; n <= NMAX; n = n +1)
    {
      if (n%2 == 0 )
	
	{
	  result = result + 1.0/(n);  
 	}
	
    }

  std :: cout << result;

  return 0;



} 
