#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
     cout << "\t\t\t\t\tWelcome to TIC TAC TOAST\n\n" << endl;
     cout<<"Instructions to play the game : \n1. Use the buttons 'a' 'd' 'w' 's' to move the pointer around.\n2. Use the keys 'X' and 'O' to mark your response at a particular place.\n\nENJOY THE GAME !!!\n\n";
     system("pause");
    decided:
    system("cls");
    int nowin=1;
    int wino=1, winx=1;
    int now = 0;
    char a[3][3];
    for(int i=0; i<3; ++i)
        for(int j=0; j<3; ++j)
            a[i][j]='.';
    int x=0,y=0;
    a[x][y]='*';
    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<3; ++j)
            cout<<a[i][j]<<"\t";
        cout<<endl<<endl;
    }
     int act = 0;   //////////////// act = 1 for O, and act = -1 for X ///////////////////////////
    char input = 'p';
    char done = 'y' ;
    while(done == 'y'){
             wino=1, winx=1;
        input=getch();
        if((input=='x')||(input=='X')||(input=='o')||(input=='O')||(input=='a')||(input=='s')||(input=='d')||(input=='w')){
        if(input == 's')
        {
            if(x<2)
                ++x;
        }
        else if(input == 'w')
        {
            if(x>0)
                --x;
        }
        else if(input == 'd')
        {
            if(y<2)
                ++y;
        }
        else if(input == 'a')
        {
            if(y>0)
                --y;
        }
        for(int i=0; i<3; ++i)
            for(int j=0; j<3; ++j)
                if((a[i][j]=='.')||(a[i][j]=='*'))
                    a[i][j]='.';
        if(a[x][y]=='.')
            a[x][y]='*';
        system("cls");

            for(int i=0; i<3; ++i)
    {
        for(int j=0; j<3; ++j)
            cout<<a[i][j]<<"\t";
        cout<<endl<<endl;
    }

    if((input == 'o')||(input == 'O'))
    {
        if((a[x][y]=='*')&&(act!=1))
            {
                a[x][y]='O';
                act=1;
            }
        else if(a[x][y]=='X')
            continue;
              system("cls");

            for(int i=0; i<3; ++i)
    {
        for(int j=0; j<3; ++j)
            cout<<a[i][j]<<"\t";
        cout<<endl<<endl;
    }}
    else if((input == 'x')||(input == 'X'))
    {
        if((a[x][y]=='*')&&(act!=-1))
            {
                a[x][y]='X';
                act = -1;
            }
        else if(a[x][y]=='O')
            continue;
        system("cls");

            for(int i=0; i<3; ++i)
    {
        for(int j=0; j<3; ++j)
            cout<<a[i][j]<<"\t";
        cout<<endl<<endl;
    }

    ///////////////////////////////CHECKING FOR RESULT///////////////////////////////////////

    if((a[0][0]==a[1][1])&&(a[1][1]==a[2][2])&&(a[0][0]!='.')&&a[0][0]!='*')
    {
        if(a[0][0]=='O')
            {
                cout<<endl<<endl<<"O has won.";
               goto comp;
            }
        if(a[0][0]=='X')
            {
                cout<<endl<<endl<<"X has won.";
               goto comp;
            }
    }

    if((a[0][2]==a[1][1])&&(a[1][1]==a[2][0])&&(a[0][2]!='.')&&a[0][2]!='*')
    {
        if(a[0][2]=='O')
            {
                cout<<endl<<endl<<"O has won.";
               goto comp;
            }
        if(a[0][2]=='X')
            {
                cout<<endl<<endl<<"X has won.";
               goto comp;
            }
    }
    for(int i=0; i<3; ++i)
     {wino=1; winx=1;
         for(int j=0; j<3; ++j)
    {
        if(a[i][j]!='O')
            wino=0;
        if(a[i][j]!='X')
            winx=0;
    }
        if(wino==1)
            {
                cout<<endl<<endl<<"O has won.";
               goto comp;
            }
         if(winx==1)
            {
                cout<<endl<<endl<<"X has won.";
              goto comp;

            }
    }
      for(int i=0; i<3; ++i)
     {wino=1, winx=1;
         for(int j=0; j<3; ++j)
    {
        if(a[j][i]!='O')
            wino=0;
        if(a[j][i]!='X')
            winx=0;
    }
        if(wino==1)
            {
                cout<<endl<<endl<<"O has won.";
                goto comp;
            }
        if(winx==1)
            {
                cout<<endl<<endl<<"X has won.";
                goto comp;
            }
    }
    }
    }
        nowin=1;
    for(int i=0; i<3; ++i)
        for(int j=0; j<3; ++j)
            if((a[i][j]=='.')||(a[i][j]=='*'))
                {nowin=0;
                break;}

    if(nowin==1)
    {
        cout<<"No body won the contest";
        goto comp;
    }

    }

    comp:
        cout<<"\n\n\t\tWanna play again?(Y/N)";
        char decide;
        cin>>decide;
        if((decide == 'y')||(decide == 'Y'))
            goto decided;
    return 0;
}
