#include <iostream>
#include <ctime>
using namespace std;

void drawTable(char *spaces);

void playerTurn(char *spaces, char player);

void machineTurn(char *spaces, char machine);

bool winnerVerify(char *spaces, char player, char machine);

bool empVerify(char *spaces);

int main(){

    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    
    char player = 'X';
    
    char machine = 'O';

    bool executing = true;

    drawTable(spaces);

    while (executing){
        playerTurn(spaces,player);
        drawTable(spaces);
        
        if(winnerVerify(spaces,player,machine)){
            executing = false;
            break;
        }
        if(empVerify(spaces)){
            executing = false;
            break;
        }

        machineTurn(spaces, machine);
        drawTable(spaces);
        
        if(winnerVerify(spaces,player,machine)){
            executing = false;
            break;
        }
        if(empVerify(spaces)){
            executing = false;
            break;
        }
       
        drawTable(spaces);
    }
    
    cout<<"Tanku for play";

    return 0;
}

void drawTable(char *spaces){

    cout<<'\n';
    cout<<"     |     |     "<<'\n';
    cout<<" "<< spaces[0]<< "   |  "<<spaces[1] <<"  |  "<<spaces[2]<<"  "<<'\n';
    cout<<"_____|_____|_____"<<'\n';
    cout<<"     |     |     "<<'\n';
    cout<<" "<< spaces[3]<< "   |  "<<spaces[4] <<"  |  "<<spaces[5]<<"  "<<'\n';
    cout<<"_____|_____|_____"<<'\n';
    cout<<"     |     |     "<<'\n';
    cout<<" "<< spaces[6]<< "   |  "<<spaces[7] <<"  |  "<<spaces[8]<<"  "<<'\n';
    cout<<"     |     |     "<<'\n';
    cout<<'\n';
    
}

void playerTurn(char *spaces, char player){

    int number;
    do {
        cout<<"Introduce a play space(1-9): ";
        cin>>number;
        number--;
        if(spaces[number] == ' '){
            spaces[number] = player;
            break;
        }
    }while (!number > 0 || !number < 8);
    
}

void machineTurn(char *spaces, char machine){

    int number;
    srand(time(0));
    while (true){
        number = rand() % 9;
        if(spaces[number] == ' '){
            spaces[number] = machine;
            break; 

        }
    }
    
}

bool winnerVerify(char *spaces, char player, char machine){

    if((spaces[0]!= ' ')&&(spaces[0] == spaces[1]) &&(spaces[1] == spaces[2]) ){
        spaces[0] == player ? cout<<"You are winner" : cout<<"You lose";
    }else if ((spaces[3]!= ' ')&&(spaces[3] == spaces[4]) &&(spaces[4] == spaces[5])){
        spaces[0] == player ? cout<<"You are winner" : cout<<"You lose";
    }else if ((spaces[6]!= ' ')&&(spaces[6] == spaces[7]) &&(spaces[7] == spaces[9])){
        spaces[0] == player ? cout<<"You are winner" : cout<<"You lose";
    }else if ((spaces[0]!= ' ')&&(spaces[0] == spaces[3]) &&(spaces[3] == spaces[6])){
        spaces[0] == player ? cout<<"You are winner" : cout<<"You lose";
    }else if ((spaces[1]!= ' ')&&(spaces[1] == spaces[4]) &&(spaces[4] == spaces[7])){
        spaces[0] == player ? cout<<"You are winner" : cout<<"You lose";
    }else if ((spaces[2]!= ' ')&&(spaces[2] == spaces[5]) &&(spaces[5] == spaces[8])){
        spaces[0] == player ? cout<<"You are winner" : cout<<"You lose";
    }else if ((spaces[0]!= ' ')&&(spaces[0] == spaces[4]) &&(spaces[4] == spaces[9])){
        spaces[0] == player ? cout<<"You are winner" : cout<<"You lose";
    }else if ((spaces[2]!= ' ')&&(spaces[2] == spaces[4]) &&(spaces[4] == spaces[7])){
        spaces[0] == player ? cout<<"You are winner" : cout<<"You lose";
    }else{
        return false;
    }
    
    return true;
}

bool empVerify(char *spaces){


   for(int i = 0 ; i < 9; i++){
        if(spaces[i] == ' '){

            return false;
            
        }
   }
    return true;
}
