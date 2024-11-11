
// List of element of in an array

#include<stdio.h>
int main(){
  int i ,l;
  int a[100];
  printf("Enter the length of array:");
  scanf("%d",&l);
  for(i=0;i<=l;i++){
    printf("Enter element of array:");
    scanf("%ds",&a[i]);
  }
  printf("Element display:\n");
  for(i=0;i<=l;i++){
    printf("%d ",a[i]);
      
  }
  return 0;
}