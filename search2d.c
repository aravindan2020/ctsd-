#include<stdio.h>
int main(){
  int i,j,m, n, item, count=0, array[10][10];
  printf("Enter the number of rows and columns: ");
  scanf("%d %d", &m, &n);
  printf("Enter %d elements: ", (m*n));
  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
      scanf("%d", &array[i][j]);
    }
  }
  printf("Enter the item to find: ");
  scanf("%d", &item);
  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
      if(array[i][j] == item){
        printf("Item found at [%d, %d] \n", i, j);
        count++;
      }
    }
  }
  if(count==0)
    printf("Item Not found");
  return 0;
}
