#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int game(int user, int computer){
    if(user == computer){
        return 2;
    }
    //for scissor and rock
    if(user == 1 && computer == 2){
        return 0;
    }
    else if(user == 2 && computer == 1){
        return 1;
    }
    //for rock and paper
     if(user == 2 && computer == 3){
        return 0;
    }
    else if(user == 3 && computer == 2){
        return 1;
    }
    //for scissor and paper
     if(user == 3 && computer == 1){
        return 0;
    }
    else if(user == 1 && computer == 3){
        return 1;
    }
}
int main(){
    while(1){
        
        // scissor = 1 rock = 2 paper = 3
    int upper=100,lower=0,n,system,a,output;
    srand(time(0));
    n = (rand()%(upper-lower+1))+lower;
    if(n<=33){
        system = 1;
    }
    else if(n>33 && n <= 66){
        system = 2;
    }
    else if(n>66 && n <=100)
    {
        system = 3;
    }
    printf("||||||||||WELCOME TO THE GAME|||||||||||\n");
    
    do{
        printf("Enter 1 for scissor, 2 for rock, 3 for paper: ");
    scanf("%d",&a);}
    while(a!=1 && a!=2 && a!=3);
    
    
    output = game(a,system);
    if(system==1){
        printf("I played scissor\n");

    }
    else if(system==2){
        printf("I played rock\n");
    }
     else if(system==3){
        printf("I played paper\n");
    }
if(output == 2){
    printf("Its a draw\n");
}
else if (output == 1)
{
    printf("Congo you WONNNNNNNNNN\n");
}
else if(output == 0){
    printf("YOU lose as you losing in life\n");
}
printf("\n\n");
   
    }
    
   
}
