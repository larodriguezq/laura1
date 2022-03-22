#include <iostream>
#include <cmath>
#include <iomanip>

int main(void)
{
  std::cout <<"Hola mundo Hola gente\n";
  double  result = 0;
  int n=0;
    for(n = 1; n <= 200 ; n = n + 1 )
      {
	result = result + 1.0/(n*n);
	double pi = std::sqrt(6*result);
        std::cout<< n << "\t" << pi  << "\n";
       
	
      }


   
    
    
  return 0;
}

//std::sqrt(6*result)
