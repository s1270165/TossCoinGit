#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

  int i, head=0, tail=0;
  char name[15];

  srand((unsigned int)time(NULL));

  printf("Who are you?\n");
  scanf("%s", name);
  printf("Hello,%s!\n", name);
  printf("Tossing a coin...\n");
  for(i=0; i<3; i++)
  {
    if(rand()%2 == 0)
    {
      head++;
      printf("Round %d: Heads\n", i+1);
     }
    else
    {
      tail++;
      printf("Round %d: Tails\n", i+1);
    }
  }

  printf("Heads:%d, Tails:%d\n", head, tail);
  if( head > tail ) printf("you won!\n");
  else printf("you lost!\n");

return 0;
}
