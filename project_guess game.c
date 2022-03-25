#include<stdio.h>
#incude<stdlib.h>
int main(){
    int number,guess,nguess=1;
    srand(time(0));
    number=rand()%100+1;
    do{
        printf("guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("lower number ples\n");
        }
    }
    elseif(guess<number){
        printf("higher number ples \n");

    }
    else{
        printf("you guessed it correctly after %d attempts\n",nguess);

    }
    nguess++;
}while(guess!=number);
return 0;
}
