// Find the largest number among the three numbers.

#include <stdio.h>

int main(void){
    int a,b,c;
    
    //here we take input for three variables
    printf("Enter a number for a:\n ");
    scanf("%d",&a);
    printf("Enter a number for b:\n ");
    scanf("%d",&b);
    printf("Enter a number for c:\n ");
    scanf("%d",&c);

    //let use condition with && operator

    if(a>b && a>c){
      printf("%d is greater\n",a);
    }
    else if(b>a && b>c){
      printf("%d is greater \n",b);
    }
    else{
      printf("%d is greater \n",c);
    }

    return 0;


}