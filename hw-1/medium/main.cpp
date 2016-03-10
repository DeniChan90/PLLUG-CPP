#include <algorithm>
#include <iostream>
#include <ctime>

using namespace std;

void game();
void getWinner();
void compPick();
string userChoice;
string compChoice;
int compNum;

int main()
{

   game();
   system("pause");

}


void game()
{
    do
    {
        cout << "Enter Rock, Scissors or Paper: " << endl;
        cin >> userChoice;
        transform(userChoice.begin(), userChoice.end(), userChoice.begin(), ::tolower);

    }
    while( !( (userChoice == "rock") ||
              (userChoice == "scissors") ||
              (userChoice == "paper") ) );
    compPick();
    getWinner();

}

void compPick()
{
    srand(time(0));
    compNum = rand()%3 + 1;

    switch (compNum)
    {
      case 1 :
        compChoice = "rock";
        break;
      case 2 :
        compChoice = "scissors";
        break;
      case 3 :
        compChoice = "paper";
        break;
    }

}

void getWinner()
{

    cout << "Computer's choice : " << compChoice << endl;
    if(compChoice == userChoice)
    {
        cout << "DRAW" << endl;
    } else if((userChoice == "rock" && compChoice == "paper") ||
              (userChoice == "scissors" && compChoice == "rock")  ||
              (userChoice == "paper" && compChoice == "sciss"))
    {
        cout << "Looser!!!" << endl;
    } else
    {
        cout << "You win!!!" << endl;
    }
}

