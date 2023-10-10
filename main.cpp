#include<bits/stdc++.h>
#define IOS ios::sync_with#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define dd double
#define pi 3.1415926535897932384626433832795
#include "TicTacToe.h"
using namespace std;
//Eman Mohammed Essa Montaser.
int main()
{
     TicTacToe t;
     int option;
    do{
        // Print the menu
        cout<<"Choose an Option:\n";
        cout<<"1-Show game instructions\n";
        cout<<"2-play the game\n";
        cout<<"3-Exit\n";
        // Get user's choice
        cin>>option;
        // Execute the chosen option
        switch(option)
        {
            case 1:
                t.printInstructions();
                break;
            case 2:
                t.playGame();
                break;
            case 3:
                cout<<"We are waiting you for next game,bye bye.\n";
                break;
        }

    }while(option!=3);
}