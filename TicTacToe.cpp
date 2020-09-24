#include <vector>
#include <string>
#include <iostream>

std::vector<std::vector<std::string>> CreateBoard{
  std::vector<std::vector<std::string>> v{{"", "", ""},{"", "", ""},{"", "", ""}}; 
}

std::vector<std::vector<std::string>> PlaceMarker(int[2] arr_, std::vector<std::string>> input, char marker){
   input[arr_[0]].insert(marker,arr_);
   return input;
}

void displayBoard(std::vector<std::vector<std::string>> input){
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      std::cout << input[i][j];
    }
    std::cout << std::endl;
  }
}

int[] GetPlayerChoice(){
  int ret[2];
  std::cout<< "Where would you like to play" << std::endl;
  std<<cout<< "[[0][1][2]]" << std::endl;
  std<<cout<< "[[3][4][5]]" << std::endl;
  std<<cout<< "[[6][7][8]]" << std::endl;
  int i = 10;
  while(true){
    if(i==0){
      ret[0] = 0;
      ret[1] = 0;
      break;
    }
    else if( i == 1){
      ret[0] = 0;
      ret[1] = 1;
      break;
    }
    
    else if( i == 2{
      ret[0] = 0;
      ret[1] = 2;
      break;
    }
    else if( i == 3{
      ret[0] = 1;
      ret[1] = 0;
      break;
    }
    else if( i == 4{
      ret[0] = 1;
      ret[1] = 1;
      break;
    }
    else if( i == 5){
      ret[0] = 1;
      ret[1] = 2;
      break;
    }
    else if( i == 6{
      ret[0] = 2;
      ret[1] = 0;
      break;
    }
    else if( i == 7{
      ret[0] = 2;
      ret[1] = 1;
      break;
    }
    else if( i == 8{
      ret[0] = 2;
      ret[1] = 2;
      break;
    }
    else{
      std::cout << "Incorrect input" << std::endl;
      std::cin >> i;
    }
  }
  return ret;
}

int main(){
  std::vector<std::vector<std::string>> v = CreateBoard{};
}
