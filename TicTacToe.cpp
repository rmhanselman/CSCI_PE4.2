#include <vector>
#incldue <string>

std::vector<std::vector<std::string>> CreateBoard{
  std::vector<std::vector<std::string>> v{{"", "", ""},{"", "", ""},{"", "", ""}}; 
}

void DisplayBoard(std::vector<std::vector<std::string>> v){
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      std::cout << v[i][j];
    }
    std::cout << std::endl;
  }
}

int main(){
  std::vector<std::vector<std::string>> v = CreateBoard{};
}
