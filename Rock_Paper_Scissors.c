#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>


#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define RESET   "\x1b[0m"
#define BLUE    "\x1b[34m"


int win (char humman,char computer)
{
    
    if (humman == computer) return 0;
    else if (humman == 'p' && computer=='r') return 1;
    else if (humman == 'r' && computer == 'p') return -1;

    else if (humman == 's' && computer=='r') return -1;
    else if (humman == 'r' && computer == 's') return 1;
    
    else if (humman == 'p' && computer=='s') return -1;
    else if (humman == 's' && computer == 'p') return 1;
    
}

char ccomputer (int computer)
{

    char chcomputer;
    if (computer = 0)
    {
        chcomputer = 'r';
    }
    else if (computer ==1)
    {
        chcomputer = 'p';
    }
    else
    {
        chcomputer = 's';
    }


    return chcomputer;
}

int main()
{

    
    int computer,_win;
    char s_q,humman;
    char chcomputer ;
    printf ("\t Welcome To Rock Paper Scissors \n\n");
    printf ("Enter [s] to start the game \n");
    printf ("Enter [q] to quit the game  \n");

    scanf ("%c",&s_q);
    if (s_q== 's')
    {
        printf ("Choose \n");
        printf ("Rock     [r] \n");
        printf ("Paper    [p] \n");
        printf ("Scissors [s] \n");

        scanf ("%c",&humman);
        scanf ("%c",&humman);


        srand(time(NULL));
        computer =rand () % 3;
        chcomputer = ccomputer(computer);
        _win = win (humman,chcomputer);
        sleep (1);

        if (_win == 0)
        
            printf (BLUE "Draw \n" RESET);
        else if (_win == 1)
            printf (GREEN "you win\n"RESET);
        else   
            printf (RED"You Lose \n"RESET);

        
    }
    


    else if (s_q == 'q')
    {   
        system ("clear");
        exit (1);

    }
    else 
    {
        printf ("INvilaid System");
    }





}