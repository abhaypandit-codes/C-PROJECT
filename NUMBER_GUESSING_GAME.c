
/*GUESS HIDDEN NUMBER BETWEEN 1 TO 40 if player guess lower number than actual number output higher number please
  if player guess higher number than actual number output lower number please 
  if player guess actual number then guess correct number*/

  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>

  int main() {
    int r,n,count=0;
  srand(time(0));   
      r = (rand() % 40) + 1;   // 1 to 40
  while(1){
   printf("Enter a number:");
   count=count+1;
    scanf("%d", &n);
    if (n == r)
    {
      printf("you enter correct number that is %d\n", n);
      break;
    }
    else
    {
      if (n < r)
      {
        printf("Higher number please\n");
      }
      else
      {
        printf("Lower number please\n");
      }
    }
  }
  printf("You guess the number in %d attempt\n",count);
  
    return 0;
}