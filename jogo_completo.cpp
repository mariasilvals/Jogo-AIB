#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
    

using namespace std;

//strings

string userLetter;
string userName;

//functions
void header();
void intro();
void level1();
void level2();
void level3();
void questions();
void init(int board[][3]); // Initializes the board with 0's
void show(int board[][3]); // Show the board
void playMove(int board[][3], int); // Play one move
void scoreboard(int, int &, int &); // Show the scoreboard
void headerG1();
void headerG2();
void headerG3();

char printBlock(int block); // Prints each square of the board

int a;
int b;
int d;
int c;
int option;
int checkContinue(int *board[3]);  // Check if there is still white space
int checkWin(int *board[3]);       // Check if anyone won
int game(int board[][3]);          // PLay an entire game
unsigned int microsecond = 1000000;


           
// Booleans
bool showHeader = true;
bool askName = true;

int main() 
{ 
   intro();
   questions();
}

void header(){
    cout << "#      # ###### #      ####### ###### #      # ######    ####### ######   \n"; usleep(0.1 * microsecond); 
    cout << "#      # #      #      #       #    # # #  # # #            #    #    #   \n"; usleep(0.1 * microsecond); 
    cout << "#      # ####   #      #       #    # #  ##  # ####         #    #    #   \n"; usleep(0.1 * microsecond); 
    cout << "#  ##  # #      #      #       #    # #      # #            #    #    #   \n"; usleep(0.1 * microsecond); 
    cout << "# #  # # #      #      #       #    # #      # #            #    #    #   \n"; usleep(0.1 * microsecond); 
    cout << "#      # ###### ###### ####### ###### #      # ######       #    ######   \n"; usleep(0.1 * microsecond); 
    cout << "                                                        \n\n\n\n";
    cout << "    #   #   ####### ###### #####  #    #   #  ########  #  #      # #####   #######  \n"; usleep(0.1 * microsecond); 
    cout << "  #  #  #      #    #      #    # ##   #  # #    #     #  #     #  #       #         \n"; usleep(0.1 * microsecond); 
    cout << "  ##### #      #    ###    #    # # #  # #   #   #     #  #    #   #####   #         \n"; usleep(0.1 * microsecond); 
    cout << "  #   # #      #    #      #####  #  # # #####   #     #  #   #    #       ######    \n"; usleep(0.1 * microsecond); 
    cout << "  #   # #      #    #      #   #  #   ## #   #   #     #  #  #     #            #    \n"; usleep(0.1 * microsecond); 
    cout << "  #   # ###### #    ###### #    # #    # #   #   #     #  ###      ######  ######    \n"; usleep(0.1 * microsecond); 
    cout << "By Maria Silva  and Rosangela Paca\n";usleep(0.1 * microsecond);
}

void intro(){



 if (showHeader == true && askName == true){
    header();
        cout << "Type your name to start the game!\n";
        cin >> userName;
        cout << "\nHELLO " << userName << " IN THIS GAME YOU HAVE 3  ALTERNATIVES TO PLAY,\n"; 
        cout << "YOU CAN CHOOSE, HAVE FUN :)!\n\n";
        questions();
 } else {
     main();
 }                                 
}

void headerG1(){
     cout << "**********************************************************************     \n"; usleep(0.1 * microsecond);
        cout << "1.      #######                                                         \n"; usleep(0.1 * microsecond);
        cout << "        #        #    # ######  ####   ####    ####### #    # ######    \n"; usleep(0.1 * microsecond);
        cout << "        #        #    # #      #      #           #    #    # #         \n"; usleep(0.1 * microsecond);
        cout << "        #  ####  #    # ####    ####   ####       #    ###### ####      \n"; usleep(0.1 * microsecond);
        cout << "        #     #  #    # #           #      #      #    #    # #         \n"; usleep(0.1 * microsecond);
        cout << "        #     #  #    # #      #    # #    #      #    #    # #         \n"; usleep(0.1 * microsecond);
        cout << "        #######  ###### ######  ####   ####       #    #    # ######    \n"; usleep(0.1 * microsecond);
        cout << "                                                                        \n"; usleep(0.1 * microsecond);
        cout << "        ##    #  #    # #    # ######  ###### #####   \n"; usleep(0.1 * microsecond); 
        cout << "        # #   #  #    # ##  ## #     # #      #    #  \n"; usleep(0.1 * microsecond);
        cout << "        #  #  #  #    # # ## # #     # ####   #    #  \n"; usleep(0.1 * microsecond);
        cout << "        #   # #  #    # #    # ######  #      # ###   \n"; usleep(0.1 * microsecond);
        cout << "        #    ##  #    # #    # #     # #      #    #  \n"; usleep(0.1 * microsecond);
        cout << "        #     #  ###### #    # ######  ###### #     # \n"; usleep(0.1 * microsecond);
        cout << "**********************************************************************\n"; usleep(0.1 * microsecond);
}
void headerG2(){
    cout << "**********************************************************************     \n"; usleep(0.1 * microsecond);
        cout << "2.     #######                                                         \n"; usleep(0.1 * microsecond);  
        cout << "       #        #    # ######  ####   ####    ####### #    # ######    \n"; usleep(0.1 * microsecond);
        cout << "       #        #    # #      #      #           #    #    # #         \n"; usleep(0.1 * microsecond);
        cout << "       #  ####  #    # ####    ####   ####       #    ###### ####      \n"; usleep(0.1 * microsecond);
        cout << "       #     #  #    # #           #      #      #    #    # #         \n"; usleep(0.1 * microsecond);
        cout << "       #     #  #    # #      #    # #    #      #    #    # #         \n"; usleep(0.1 * microsecond);
        cout << "       #######  ###### ######  ####   ####       #    #    # ######    \n"; usleep(0.1 * microsecond);
        cout << "                                                                       \n"; usleep(0.1 * microsecond);
        cout << "       #      #                                                        \n"; usleep(0.1 * microsecond);
        cout << "       #      #  ####   ####  #####  #####          \n"; usleep(0.1 * microsecond);
        cout << "       #      # #    # #    # #    # #     #        \n"; usleep(0.1 * microsecond);
        cout << "       #  ##  # #    # #    # # ###  #     #        \n"; usleep(0.1 * microsecond);
        cout << "       # #  # # #    # #    # #   #  #     #        \n"; usleep(0.1 * microsecond);
        cout << "       #      #  ####   ####  #    # ######         \n"; usleep(0.1 * microsecond);
        cout <<"***********************************************************************\n"; usleep(0.1 * microsecond);
}
void headerG3(){
     cout << "**********************************************************************    \n"; usleep(0.1 * microsecond);
        cout << "3.     ######                                                          \n"; usleep(0.1 * microsecond);   
        cout << "       #     #    #### # ####   ####  ####### ###### #####             \n"; usleep(0.1 * microsecond);
        cout << "       #     #   #    # #    # #         #    #      #    #            \n"; usleep(0.1 * microsecond);
        cout << "        #####    #    # #    #  ####     #    ####   #    #            \n"; usleep(0.1 * microsecond);
        cout << "       #     #   #    # #    #      #    #    #      # ###             \n"; usleep(0.1 * microsecond);
        cout << "       #      #  #    # #    # #    #    #    #      #   #             \n"; usleep(0.1 * microsecond);
        cout << "       #       #  ####   ####   ####     #    ###### #    #            \n"; usleep(0.1 * microsecond);
        cout << "                                                                       \n"; usleep(0.1 * microsecond);
        cout << "             ######                                                    \n"; usleep(0.1 * microsecond);
        cout << "             #          #    #    # ######            \n"; usleep(0.1 * microsecond);
        cout << "             #        #   #  ##  ## #                 \n"; usleep(0.1 * microsecond);
        cout << "             #  #### #     # # ## # ####              \n"; usleep(0.1 * microsecond);
        cout << "             #     # ####### #    # #                 \n"; usleep(0.1 * microsecond);
        cout << "             #     # #     # #    # #                 \n"; usleep(0.1 * microsecond);
        cout << "             ####### #     # #    # ######            \n"; usleep(0.1 * microsecond);
        cout << "********************************************************************  \n"; usleep(0.1 * microsecond);
}
void questions(){

        cout << "What Game do you want to play?\n";
       
        cout << "1. Guess The Number\n";
        
        cout << "2. Guess The Word\n";
       
        cout << "3. Rooster Game\n";
        cin >> option;
switch (option) {
  case 1:
    cout << "\n";
level1();
    break;
  case 2:
    cout << "\n";
level2();
    break;
      case 3:
    cout << "\n";
level3();
    break;
    }
}


void level1(){
headerG1();

            c = rand() % 100+20;
            cout << "HINT: The number is between " << c-1 << " and " << c+8 <<endl;
            cout << "Enter your guess:"<<endl;
                    cin >> d;

            if(d==c){
            
            cout<< "######## ###### ###### ######     ####### ###### ######        \n"; usleep(0.1 * microsecond);
            cout<< "#        #    # #    # #     #       #    #    # #     #       \n"; usleep(0.1 * microsecond);
            cout<< "#        #    # #    # #       #     #    #    # #     #       \n"; usleep(0.1 * microsecond);
            cout<< "#   #### #    # #    # #       #     #    #    # ######        \n"; usleep(0.1 * microsecond);
            cout<< "#      # #    # #    # #       #     #    #    # #     #       \n"; usleep(0.1 * microsecond);
            cout<< "#      # #    # #    # #       #     #    #    # #     #       \n"; usleep(0.1 * microsecond);
            cout<< "######## ###### ###### ######     ####    ###### ######    \n\n\n"; usleep(0.1 * microsecond);
                
            } else {
                
            cout<< "######   ##   # #      ###### ######            \n"; usleep(0.1 * microsecond);
            cout<< "#       #  #  # #      #      #     #           \n"; usleep(0.1 * microsecond);
            cout<< "####   #    # # #      ###    #      #          \n"; usleep(0.1 * microsecond);
            cout<< "#      ###### # #      #      #      #          \n"; usleep(0.1 * microsecond);
            cout<< "#      #    # # #      #      #      #          \n"; usleep(0.1 * microsecond);
            cout<< "#      #    # # ###### ###### ######      \n\n\n\n"; usleep(0.1 * microsecond);
                cin.get();
                questions();
            }
}

string word;
string ans;
int ran;

void level2(){
            
          headerG2();

            ran = rand() % 20+1;

            if(ran==1){
                cout << "Hint: animal\n";
                word = "rabbit";
            } else if(ran==2){
                cout << "Hint: type of protection in the kitchen\n";
                word = "apron";
            } else if (ran==3) {
                cout << "Hint: sport\n";
                word = "football";
            }else if (ran==4){
                cout << "Hint: game in which one uses a stick\n";
                word = "cricket";
            }else if (ran==5){
                cout << "Hint: something to create memories\n";
                word = "camera";
            }else if (ran==6){
                cout << "Hint: jewellery\n";
                word = "dimond";
            }else if (ran==7){
                cout << "Hint: vegetable\n";
                word = "carrot";
            }else if (ran==8){
                cout << "Hint: with this you can do some maths\n";
                word = "calculator";
            }else if (ran==9){
                cout << "Hint: you can  write with it\n";
                word = "pencil";
            }else if (ran==10){
                cout << "Hint: with this you can learn, play, reasearch\n";
                word = "computer";
            }else if (ran==11){
                cout << "Hint: animal\n";
              word = "aligator";  
            }else if (ran==12){
                cout << "Hint:some of them are poisonous \n";
               word = "mushroom"; 
            }else if (ran==13){
                cout << "Hint: fruit\n";
             word = "peach";   
            }else if (ran==14){
                cout << "Hint: you can write on it\n";
              word = "cupboard";  
            }else if (ran==15){
                cout << "Hint: sports\n";
              word = "athletics";
            }else if (ran==16){
                cout << "Hint: eye pleasing\n";
              word = "asthetic";
            }else if (ran==17){
                cout << "Hint: can put it in the background\n";
              word = "wallpaper";  
            }else if (ran==18){
                cout << "Hint: you use to cut paper\n";
               word = "scissors"; 
            }else if (ran==19){
                cout << "Hint: someone that says a lot of jokes\n";
               word = "joker"; 
            }else if (ran==20){
                cout << "Hint: tecnology\n";
               word = "informatics"; 
            }            
            
            else{
                main();
            }

            int l = word.size();

            cout << "Guess the word:  ";

            for (int i=0;i<l;i++)
            {
                if(i%2==0){
                    cout << word[i];
                }else {
                    cout << "_";
                }       
            }

            cout << endl << "Enter your answer:  ";
            cin >> ans;

            if (word==ans){
            cout<< "######## ###### ###### ######     ####### ###### ######           \n"; usleep(0.1 * microsecond);
            cout<< "#        #    # #    # #     #       #    #    # #     #          \n"; usleep(0.1 * microsecond);
            cout<< "#        #    # #    # #       #     #    #    # #     #          \n"; usleep(0.1 * microsecond);        
            cout<< "#   #### #    # #    # #       #     #    #    # ######           \n"; usleep(0.1 * microsecond);
            cout<< "#      # #    # #    # #       #     #    #    # #     #          \n"; usleep(0.1 * microsecond);
            cout<< "#      # #    # #    # #       #     #    #    # #     #          \n"; usleep(0.1 * microsecond);
            cout<< "######## ###### ###### ######     ####    ###### ######     \n\n\n\n"; usleep(0.1 * microsecond);
            
                cin.get();
                questions();
            }

            else{
             cout<< "######   ##   # #      ###### ######          \n"; usleep(0.1 * microsecond);
            cout<< "#       #  #  # #      #      #     #          \n"; usleep(0.1 * microsecond);
            cout<< "####   #    # # #      ###    #      #         \n"; usleep(0.1 * microsecond);
            cout<< "#      ###### # #      #      #      #         \n"; usleep(0.1 * microsecond);
            cout<< "#      #    # # #      #      #      #         \n"; usleep(0.1 * microsecond);
            cout<< "#      #    # # ###### ###### ######     \n\n\n\n"; usleep(0.1 * microsecond);
             
                cin.get();
                questions();
            }
}
void level3(){
    headerG3();
 int board[3][3];

    int cont=0, player1=0, player2=0, result;
    do{
        init(board);
        result = game(board);
        show(board);
        scoreboard(result, player1, player2);

        cout<<"\n Outra partida?"<<endl;
        cout<<"0. Sair"<<endl;
        cout<<"1. Jogar de novo"<<endl;
        cin >> cont;
    }while(cont);

    
}

void init(int board[][3])
{
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            board[i][j]=0;

}

char printBlock(int block)
{
    if(block==0)
        return ' ';
    else if(block==1)
        return 'X';
    else
        return 'O';
}

void show(int board[][3])
{
    cout<<endl;
    for(int row=0 ; row<3 ; row++){
        cout<<" "<< printBlock(board[row][0]) <<" |";
        cout<<" "<< printBlock(board[row][1]) <<" |";
        cout<<" "<< printBlock(board[row][2]) <<endl;

        if(row!=2){
            cout<<"___ ___ ___\n"<<endl;
        }
    }
}

void playMove(int board[][3], int player)
{
    int row, col, check;
    do{
        cout<<"Linha: ";
        cin >>row;
        cout<<"Coluna: ";
        cin >> col;
        row--; col--;

        check = board[row][col] || row<0 || row>2 || col<0 || col>2;
        if(check)
            cout<<"Essa casa não está vazia ou fora do intervalo 3x3"<<endl;

    }while(check);

    if(player==0)
        board[row][col]=1;
    else
        board[row][col]=-1;
}

int checkContinue(int board[][3])
{
    for(int i=0 ; i<3 ; i++)
        for(int j=0 ; j<3 ; j++)
            if(board[i][j]==0)
                return 1;
    return 0;
}

int checkWin(int board[][3])
{
    int row, col, sum;

    // Adding the lines
    for(row=0 ; row<3 ; row++){
        sum=0;

        for(col=0 ; col<3 ; col++)
            sum += board[row][col];

        if(sum==3)
            return 1;
        if(sum==-3)
            return -1;
    }

    // Adding the columns
    for(col=0 ; col<3 ; col++){
        sum=0;

        for(row=0 ; row<3 ; row++)
            sum += board[row][col];

        if(sum==3)
            return 1;
        if(sum==-3)
            return -1;
    }

    // Adding the diagonals
    sum=0;
    for(row=0 ; row<3 ; row++)
        sum += board[row][row];
    if(sum==3)
        return 1;
    if(sum==-3)
        return -1;

    sum=board[0][2]+board[1][1]+board[2][0];
    if(sum==3)
        return 1;
    if(sum==-3)
        return -1;

    return 0;
}

int game(int board[][3])
{
    int turn=0, cont, win;

    do{
        show(board);
        cout<<"Jogador "<<1+turn%2<<endl;
        playMove(board, turn%2);
        turn++;

        cont=checkContinue(board);
        win = checkWin(board);
    }while(cont && !win);

    if(win==1){
        cout<<"Jogador 1 ganhou!\n"<<endl;
        return 1;
    }else
        if(win==-1){
            cout<<"Jogador 2 ganhou!\n"<<endl;
            return 2;
    }else
        cout<<"Empate\n"<<endl;
    return 0;
}

void scoreboard(int result, int &player1, int &player2)
{
    if(result==1)
        player1++;
    if(result==2)
        player2++;

    cout<<"Placar: "<<endl;
    cout<<player1<<" x "<<player2<<endl;
}
