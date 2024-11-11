// Calculate average of a list of integer number using array.

#include<stdio.h>
int main(){

  int l,i;

  float avg,sum=0;

  int total[100];  /* Array declaration*/

  printf("Enter total list of array :");
  scanf("%d",&l);

  for(i=0;i<l;i++){
    printf("Element of list array:");
    scanf("%d", &total[i]);
  }
  for(i=0;i<l;i++){
    sum = sum+total[i];  /* Read data from an array */
  }

  avg = sum/l;

  printf("Average of total list : %f", avg);  /* Average of list*/
  
  return 0;
  
}
