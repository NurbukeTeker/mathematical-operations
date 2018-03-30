#include<stdio.h>
#define Maximum 40
void bubbleSort(int arr[],int size){
    int i,j ;
    for(i =0; i<size;i++){
        for(j=1;j<size-1;j++){
            if(arr[j-1]>arr[j]){
                int temp = arr[j];
                arr[j]=arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}
int main(){
  int array[Maximum],size;
  int i;
  printf("How many elements do you have in your array?") ;
  scanf("%d",&size);
  for(i=0;i<size; i++){
    scanf("%d",&array[i]);
  }
  bubbleSort(array,size);

  for(i = 0;i<size;i++){
    printf("%d ",array[i]);
  }

  return 0 ;
}
