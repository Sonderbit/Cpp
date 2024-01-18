#include <iostream>

//constant variables
const int ROCK = 1;
const int PAPER = 2;
const int SCISSORS = 3;

//options board

cout << '\t' << "Rock Paper Scissors" << endl;
cout << "Game Menu" << endl;
cout << "----------" << endl;
cout << "1. Rock" << endl;
cout << "2. Paper" << endl;
cout << "3. Scissors" << endl;

//Pick and display user choice

cout << "Enter your choice: ";
cin >> userChoice;

//Generate a random computer choice
int getComputerChoice(){
    srand (time(NULL));
    int compChoice = rand() % 3 + 1;
    return compChoice;
}

//function for outcomes 
void determineWinner(int userChoice, int compChoice){
    if (userChoice == ROCK && compChoice == PAPER){
        cout << "Computer win! Paper wraps rock" << endl;
    }
    else if (userChoice == PAPER && compChoice == SCISSORS){
        cout << "Computer win! Scissors cut paper" << endl;
    }
    else if (userChoice == SCISSORS && compChoice == ROCK){
        cout << "Computer win! Scissors cut paper" << endl;
    }
    else if (userChoice == ROCK && compChoice == SCISSORS){
        cout << "You win! Rock smashes scissors" << endl;
    }
    else if (userChoice == PAPER && compChoice == ROCK){
        cout << "You win! Paper wraps rock" << endl;
    }
    else if (userChoice == SCISSORS && compChoice == PAPER){
        cout << "You win! Scissors cut paper" << endl;
    }
    else {
        cout << "Tie" << endl;
    }
}

// completed lesson