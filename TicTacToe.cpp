
#include <iostream>
#include <vector>
#include <string>
#include <iostream>

std::vector<std::vector<std::string>> CreateBoard(){
  std::vector<std::vector<std::string>> v{{"", "", ""},{"", "", ""},{"", "", ""}};
  return v;
}

void PlaceMarker(int which_pos, std::vector<std::vector<std::string>> *input, char marker) {
    int x = -1;
    int y = -1;
    switch (which_pos){
        case 0:
            x = 0;
             y = 0;
            break;
        case 1:
             x = 0;
             y = 1;
            break;
        case 2:
             x = 0;
             y = 2;
            break;
        case 3:
             x = 1;
             y = 0;
            break;
        case 4:
             x = 1;
             y = 1;
            break;
        case 5:
             x = 1;
             y = 2;
            break;
        case 6:
             x = 2;
             y = 0;
            break;
        case 7:
             x = 2;
             y = 1;
            break;
        case 8:
             x = 2;
             y = 2;
            break;
    }
    (*input)[x][y] = marker;
}

void displayBoard(std::vector<std::vector<std::string>> input) {
    system("CLS");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (input[i][j] != "")
                std::cout << input[i][j];
            else
                std::cout << "+";
        }
        std::cout << std::endl;
    }
}

int GetPlayerChoice(){
    std::cout << "Where would you like to play" << std::endl;
    std::cout << "[[0][1][2]]" << std::endl;
    std::cout << "[[3][4][5]]" << std::endl;
    std::cout << "[[6][7][8]]" << std::endl;
    std::cout << "To quit hit [9]" << std::endl;
    int i = 10;
    while (true) {
        std::cin >> i;
        if (i < 10 && i > -1) {
            break;
        }else {
            std::cout << "Incorrect input" << std::endl;
        }
    }
    return i;
}

int main() {
    std::vector<std::vector<std::string>> v = CreateBoard(); 
    std::vector<std::vector<std::string>> *pointer = &v;
    int input;
    bool turn = false;//start with x
    do {
        displayBoard(v);
        input = GetPlayerChoice();
        if (turn && input != 9)
            PlaceMarker(input, pointer, 'X');
        else if(input != 9)
            PlaceMarker(input, pointer, 'O');
        turn = !turn;
    } while ((input != 9));
}
