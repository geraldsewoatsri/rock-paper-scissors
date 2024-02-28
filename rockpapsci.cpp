#include <iostream>
#include <ctime>


char getUserChoice();
char getCPUChoice();
void showChoice(char choice);
void chooseWinner(char player, char CPU);

int main()
{
    std::cout << "*************************Welcome to Rock Paper Scissors game*************************\n";   
    char player;
    char CPU;
    player = getUserChoice();
    std::cout<< "Your choice is: ";
    showChoice(player);
    
    CPU = getCPUChoice();
    std::cout << "Computer's choice is: ";
    showChoice(CPU);

    chooseWinner(player, CPU);

    return 0;
}


char getUserChoice(){
    
    char choice;
    do{
    std::cout<< "Enter your choice (r = Rock, p = Paper, s = Scissors): ";
    std::cin>> choice;
    }while(choice != 'r' && choice != 'p' && choice != 's');
    
    return choice;
}

char getCPUChoice(){
    
    srand(time(NULL));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: return 'r';  // we don't need a break since we are breaking when we return
        case 2: return 's';
        case 3: return 'p';
    }
    return 0;
}

void showChoice(char choice){
    
    switch(choice){
        case 'r': std::cout<< "Rock\n";
                  break;
        case 'p': std::cout<< "Paper\n";
                  break;
        case 's': std::cout << "Scissors\n";
                  break;
    }
}

void chooseWinner(char player, char CPU){ //Finish it

    switch(player){
        case 'r':  if(CPU == 'r'){
                        std::cout << "It is a tie! \n";
                    }
                    else if(CPU == 'p'){
                        std::cout << "You Lose!\n";
                    }
                    else{
                        std::cout << "You win!\n";
                    }
                    break;
        case 'p':  if(CPU == 'r'){
                        std::cout << "You win\n";
                    }
                    else if(CPU == 'p'){
                        std::cout << "It is a tie!\n";
                    }
                    else{
                        std::cout << "You lose!\n";
                    }
                    break;
        case 's':  if(CPU == 'r'){
                        std::cout << "You lose! \n";
                    }
                    else if(CPU == 'p'){
                        std::cout << "You Win!\n";
                    }
                    else{
                        std::cout << "it is a tie!\n";
                    }
                    break;
    }



}