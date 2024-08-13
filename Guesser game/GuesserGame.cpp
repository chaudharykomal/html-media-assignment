/* Project 1 : you are tasked with implementing a simple number guessing game in C++ involving a guesser three player and an umpire . the game operates as follows */

#include <iostream>
using namespace std;

class Guesser{
    int guessednum;
    public:
    int takeguesserinput(){
        int x;
        cout<<"Give the number for the guesser : "<<endl;
        cin>>x;
        guessednum = x;
        return guessednum;
    }
};

class player{
    int playernum;
    public:
    int takeplayerinput(){
        int p;
        cin>>p;
        playernum = p;
        return playernum;
    }
};

class Umpire{
    public:
    int g;
    int p1num;
    int p2num;
    int p3num;


 void GetTheNumberFromGuesser(){
     Guesser g1;
     g =g1.takeguesserinput();
 }
 void GetTheNumberFromPlayers(){
     player p1;
     player p2;
     player p3;
    cout<<" Give the number for the player 1 :"<<endl;
     p1num = p1.takeplayerinput();
    cout<<" Give the number for the player 2 :"<<endl;
     p2num = p2.takeplayerinput();
    cout<<" Give the number for the player 3 :"<<endl;
     p3num = p3.takeplayerinput();
          
     
 }
  void PrintTheResults(){
      
      // g p1num p2num p3num
     if(g==p1num){
         // p1 has won
         // p2 and p3 ?
        if(g==p2num){
            // p1 has won p2 has won
            // p3?
            if(g==p3num){
              cout<<"All players won the Game"<<endl;  
            }
            else{
                // p1 has won p2 has won and p3 has lost
                cout<<"The players 1 and 2 has won the Game"<<endl;
            }
        } 
        else {
           // p1 has won p2 has lost the game
           if(g==p3num){
               cout<<" TRhe player 1 and 3 has won the game"<< endl;
           }
           else {
               // p1 has won p2 has won p3 has lost
               cout<<" The players 1  has won the game " <<endl;
           }
        }
     } 
     else if(g==p2num){
        // p1 has lost p2 has won -> already know 
      // test for p3 ->test
      if(p3num==g){
          // p1 has lost p2 has won p3 has also won -> already know
          cout<<" player 2 and 3 has won the game "<<endl;
      }
      else{
          // p1 has not won p2 has not won p3 has won - > already know
          cout<<" The player 2 and 3 has won the game "<<endl;
        }
      
     }
     else if(g==p3num){
         // p1 has not won p2 has not won p3 has won - > already know
         cout<<" The player 3 has won the Game "<<endl;
     }
     else{
        // p1 lost, p2 has lost p3 has lost-> already know 
        cout<<" All the players has lost the game"<<endl;
     }
  }
};

int main() {
 cout<<"----Let's start the Game------"<<endl;
 // create an umpire object
 Umpire u;
 u.GetTheNumberFromGuesser();
 u.GetTheNumberFromPlayers();
 u.PrintTheResults();
 cout<<" -----End Game-----"<<endl;
 

    return 0;
}