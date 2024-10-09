#include<iostream>
#include<cstdlib> // for using rand(); function
#include<ctime>   // for using time(); function
using namespace std;
int main()
{
    cout<<"\n\t\t\t\t\t\t\t\t\t-> WELCOME TO GuessTheNumber GAME <- "<<endl;
    cout<<endl;
    cout<<"You have to guess any number between 1 to 100.";
    cout<<"You have limited attempts for choice based on the level of game you select. GOOD LUCK : "<<endl;
    // srand(time(0));
    // int secrate = 1 + (rand() % 100);
    while(true)
    {
        // for displaying the choice in user display :
        cout<<"Select the Level of Difficulty of Game :\n";
        cout<<"\n1. For Easy \t";
        cout<<"2. For Medium \t";
        cout<<"3. For Very hard \t";
        cout<<"0. For Stop the Game  \n";

        // get input of user its difficulty level
        
        int difficultychoice ;
        cout<<"\nEnter the Difficulty level : ";
        cin>>difficultychoice;

        // Now Two pre define function are used for secrate number 

        srand(time(0));
        int secrateNum = 1 + (rand() % 100);
        int playerChoice ;

        // Here we can use if else{} and else if()

        //This is for Easy Level Difficulty
        if(difficultychoice==1){
            cout<<"\nYou select the Easy Difficulty. So you have 10 attemps for finding a secrate number between 1 to 100 :";
            int choiceLeft = 10;
            for(int i = 1 ; i<=10 ; i++)
            {
                cout<<"\n\nEnter the Number: ";
                cin>>playerChoice;
                if(playerChoice==secrateNum)
                {
                    cout<<"\n\nWell Played ! You Won "<<playerChoice<< " is secrate number :"<<endl;
                    cout<<"\n\t\t\t\t\t\t\t\t-> THANK YOU FOR PLAYING.I HOPE YOU LIKE IT <-"<<endl;
                    cout<<"\nYou can again play this game :!!\n\n"<<endl;
                    break;
                }
                else{
                    cout<< "\n\nOpps : " <<playerChoice <<" : is not equal to the secrate number : \n";
                    if(playerChoice>secrateNum){
                        cout<<"The Secrate number is smaller than the number you choose : "<<endl;
                    }
                    else{
                        cout<<"The Secrate number is Grater than the number you choose : "<<endl;
                    }
                    choiceLeft--;
                    cout<<choiceLeft<<" : attempt Is left : "<<endl;
                    if(choiceLeft==0)
                    {
                        cout<<"You cannot find the secrate number "<<secrateNum<<" : it was secrate number :";
                        cout<<"\n\nYou Lose !! . You can Try again :\n\n"<<endl;
                    }
                }
            }
        }

        //This is for Medium Level Difficulty

        else if(difficultychoice==2){
            cout<<"\nYou select the Medium Difficulty Level. So you  have 7 attemps for finding a secrate number between 1 to 100 :";
            int choiceLeft = 7;
            for(int i = 1 ; i<=7 ; i++)
            {
                cout<<"\n\nEnter the Number: ";
                cin>>playerChoice;
                if(playerChoice==secrateNum)
                {
                    cout<<"\n\nWell Played ! You Won "<<playerChoice<< " : is secrate number :"<<endl;
                    cout<<"\n\t\t\t\t\t\t\t\t-> THANK YOU FOR PLAYING.I HOPE YOU LIKE IT <-"<<endl;
                    cout<<"You can again play this game :!!\n\n"<<endl;
                    break;
                }
                else{
                    cout<< "\n\nOpps : " <<playerChoice <<" : Is not equal to the secrate number : \n";
                    if(playerChoice>secrateNum){
                        cout<<"The Secrate number is smaller than the number you choose : "<<endl;
                    }
                    else{
                        cout<<"The Secrate number is Grater than the number you choose : "<<endl;
                    }
                    choiceLeft--;
                    cout<<choiceLeft<<" : attempt Is left  "<<endl;
                    if(choiceLeft==0)
                    {
                        cout<<"\nYou cannot find the secrate number "<<secrateNum<<" : it was secrate number ";
                        cout<<"\n\nYou Lose !! . You can Try again :\n\n"<<endl;
                    }
                }
            }
        }

         // This is for Easy Level Difficulty
        
        else if(difficultychoice==3){
            cout<<"\nYou select the very Hard Difficulty Level. So You have 5 attemps for finding a secrate number between 1 to 100 :";
            int choiceLeft = 5;
            for(int i = 1 ; i<=5 ; i++)
            {
                cout<<"\n\nEnter the Number: ";
                cin>>playerChoice;
                if(playerChoice==secrateNum)
                {
                    cout<<"\n\nWell Played ! You Won "<<playerChoice<< " : is secrate number :"<<endl;
                    cout<<"\n\t\t\t\t\t\t\t\t\t-> THANK YOU FOR PLAYING.I HOPE YOU LIKE IT <-"<<endl;
                    cout<<"You are again play this game :!!"<<endl;
                    break;
                }
                else{
                    cout<< "\n\nOpps : " <<playerChoice <<" : Is not equal to the secrate number : \n";
                    if(playerChoice>secrateNum){
                        cout<<"The Secrate number is smaller than the number you choose : "<<endl;
                    }
                    else{
                        cout<<"The Secrate number is Grater than the number you choose : "<<endl;
                    }
                    choiceLeft--;
                    cout<<choiceLeft<<" : attempt Is left : "<<endl;
                    if(choiceLeft==0)
                    {
                        cout<<"You cannot find the secrate number "<<secrateNum<<" : it was secrate number :";
                        cout<<" You Lose !! . You can Try again :\n"<<endl;
                    }
                }
            }
        }

        // Here User can Stop the game :

        else if(difficultychoice==0){
            cout<<"Noe Game is stop :";
            exit(0);
        }
        else{
            cout<<"\nYour choice is Invalid Enter the valid choice (0,1,2,3) : "<<endl;
        }
    }
    return 0;
} 