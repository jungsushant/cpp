#include <iostream>

using namespace std;


#define ROCK 0
#define PAPER 1
#define SCISSOR 2

int main(){
    int player1, player2;
    cout <<"You've entered the classic rock paper scissor game"<<endl;
    cout <<"Enter \t 0 for rock \t 1 for paper \t 2 for scissor\n";
    cout <<"It's Player 1 turn: ";
    cin >> player1;
    cout <<"\nIt's Player 2 turn: ";
    cin >> player2;
    cout<<endl;

    if(player1==ROCK && player2 ==PAPER){
        cout<<"Player 2 has won";
    }else if(player1==PAPER && player2 ==ROCK){
        cout<<"Player 1 has won";
    }else if (player1==ROCK && player2==SCISSOR){
    cout<< "Player 1 has won";
    }else if (player1==SCISSOR && player2==ROCK){
    cout<< "Player 2 has won";
    }else if (player1==PAPER && player2==SCISSOR){
        cout<< "Player 2 has won";
    }else if (player1==SCISSOR && player2==PAPER){
        cout<< "Player 1 has won";
    }else{
        cout<<"You choose wrong value";
    }

}