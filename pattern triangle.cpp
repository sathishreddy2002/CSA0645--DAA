#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,rows;
    printf("Enter number of rows you want: ");
    scanf("%d",&rows);
    printf("Pyramid pattern \n");
    for (i=1; i<=rows; i++){
      for (j=1; j<=rows-i; j++){
      printf(" ");
  }//print space at the beginning of each row

for(j=1; j<=i; j++) {
printf("%d ",j);//print left part of pyramid
}
  printf("\n");
}

    return 0;
}
