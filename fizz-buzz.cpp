#include <iostream>
#include <string>

int game_size = 100;

const char* words_t[]= {"Fizz", "Buzz", "szakalaka"};
const int values_t[] = {3, 5, 6};

int main(){
  for (int i = 1; i <= game_size; i++){
    int player = i % 2;
    int values_count =sizeof(values_t)/sizeof(values_t[0]);
    bool is_divisible = false;
    for (int j = 0; j<values_count; j++){
      if (i % values_t[j] == 0) {
        if (is_divisible){
          std::cout << "-"; 
        }
        is_divisible = true;
        std::cout << words_t[j];
      }
    }
    if (!is_divisible){
      std::cout << i;
    }
    std::cout << "\n";
  }
}