#include <vector>
#include <string>

std::vector<std::vector<std::string>> CreateBoard{
  std::vector<std::vector<std::string>> v{{"", "", ""},{"", "", ""},{"", "", ""}}; 
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
