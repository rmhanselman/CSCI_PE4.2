#include <vector>
#include <string>

std::vector<std::vector<std::string>> CreateBoard{
  std::vector<std::vector<std::string>> v{{"", "", ""},{"", "", ""},{"", "", ""}}; 
}

std::vector<std::vector<std::string>> PlaceMarker(int[2] arr_, std::vector<std::string>> input, char marker){
   input[arr_[0]].insert(marker,arr_2);
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

int main(){
  std::vector<std::vector<std::string>> v = CreateBoard{};
}
