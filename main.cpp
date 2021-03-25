/**
 * File. main.cpp
 * Author(s): Pierre Abraham Mulamba
 * Creation (modification) date: 20210324 (20210324)
 * Description: Driver to generate prime numbers
 */

#include <iostream>
int main(int argc, char *argv[])
{
  try{
    std::cout << "\nPROGRAM TO GENERATE THE PRIME NUMBERS IN AN INTERVAL\n";
    std::cout << "\nEnter the lower limit: ? ";
    int lower_limit = 0;
    std::cin >> lower_limit;
    std::cout << "\nEnter the upper limit: ? ";
    int upper_limit = 0;
    std::cin >> upper_limit;
    int counter = 0;
    for(int i = lower_limit; i < upper_limit; i++){
      int n_divisors = 0;
      for(int j = 2; j <= i; j++){
        if(i % j == 0) n_divisors += 1;
      }
      if(n_divisors < 2){
        counter += 1;
        std::cout << i <<", ";
      }
    }

    std::cout << "\n\nThere are in total: " << counter << " prime numbers between " << lower_limit <<" and " << upper_limit << '\n';
    std::cout << "\n\nPROGRAM ENDED SUCCESSFULLY\n";
    return 0;
  }
  catch(...){
    std::cerr << "\nUnknown Exception Thrown\n";
  }
}
