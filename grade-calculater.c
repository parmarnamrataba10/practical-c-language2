  
  
  
  
#include<stdio.h>

int main (){

int score;
char grade;
 
printf(" enter your score : ");
scanf("%d",&score);

grade= (score>=90) ? 'A' :
       (score>=80) ? 'B' :
       (score>=70) ? 'C' :
       (score>=60) ? 'D' : 
       (score>=50) ? 'E' : 'F' ;


       printf(" your grade is  %c ",grade);



    switch(grade) 
    {

     case 'A' :
     
      printf( "Excellent Work !   ");
    break; 

     case 'B' :

     printf("Well Done  ");
     break;

     case 'C' :

     printf("Good Job   ");
     break;

     case 'D' :

     printf("You Passed  ");
     break;

     case 'F' :

     printf("Sorry, you failed  ");
     break;

    }
  
    if (score>=50){

       printf("congratulations! you are eligible for the next level ");

    }else 
    {

        printf("please try  again next time") ;

    }






   return 0;

}


