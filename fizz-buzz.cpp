#include <iostream>
#include <string>

int game_size = 100;

typedef struct{
  int n;
  char* spell;
} factor_of_interest;

int no_of_factors = 2;
factor_of_interest* alloc_factors(){
  factor_of_interest* factors_of_interest = (factor_of_interest*)malloc(no_of_factors * sizeof(*factors_of_interest));
  factors_of_interest[0].spell=(char*)malloc(sizeof(char*));
  factors_of_interest[0].spell="Fizz";
  factors_of_interest[0].n=3;
  factors_of_interest[1].spell=(char*)malloc(sizeof(char*));
  factors_of_interest[1].spell="Buzz";
  factors_of_interest[1].n=5;
  for (int i=0; i<no_of_factors; i++){
    std::cout << factors_of_interest[i].n << " : " << factors_of_interest[i].spell <<std::endl;
  }
  return factors_of_interest;
}

int main(){

  std::cout << "Fizz-Buzz by Kffiatek" << std::endl;
    int no_of_factors = 2;
    factor_of_interest* factors_of_interest = alloc_factors();
  for (int i=1; i <= game_size; i++){
    char* result ="";
    for (int n = 0; n<no_of_factors; n++){
      if (i % factors_of_interest[n].n == 0) { result = strcat(result, factors_of_interest[n].spell);}
    }
    if (result =="") std::cout << i << std::endl;
  }

  return 0;
}