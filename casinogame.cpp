#include <iostream>
#include <random>
#include <windows.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()

    {
    int randomnum;
    int chosennum;
    int betAmount;
    int multiplier;
    int percent=0;
    int choice;
    int winnings=0;
    int loses=0;
   string welcomenote="            WELCOME TO CASINO GAME....PLAY RESPONSIBLY";
    string warning="            WARNING ONLY  18+";
     for(int i=0;i<55;i++){
        cout<<welcomenote[i];
          Sleep(60);}
          system("CLS");
          cout<<endl;


   for(int i=0;i<5;i++){
    cout<<warning<<endl;
    Sleep(250);
    system("CLS");
     Sleep(250);
    }
    cout<<endl;
     do{
    cout<<"Enter your bet amount:"<<endl;
    cin>>betAmount;
    cout<<endl;
    cout<<"UPON CORRECT CHOOSING YOUR BET AMOUNT WILL BE MULTIPLIED BY 10"<<endl;
    cout<<"'The lucky number lies between 0 and 5--Select a lucky number'"<<endl;
    cout<<endl;
    cin>>chosennum;

    srand(time(0));
    randomnum=rand()%5+1;
    cout<<"\nChecking your selection, please wait";
    for(int p=0;p<11;p++){
            cout<<"..."<<percent<<"%";
            percent+=10;
            Sleep(500);

    }
    system("CLS");
    if(chosennum==randomnum){
            winnings++;
            cout<<"congratulations you just won ksh "<<chosennum*10<<endl;


    }
    else{cout<<"oops! you lost the bet...lucky number is "<<randomnum<<endl;}
    cout<<"\n\nPlay again? [1]-YES [2]-NO"<<endl;
    loses++;
    cin>>choice;
    if(choice==1){system("CLS");percent=0;}
     else{system("CLS");
     cout<<"you lost "<<loses<<" time(s) "<<"and won "<<winnings<<" time(s)"<<endl;}
     }while(choice==1);

   }






