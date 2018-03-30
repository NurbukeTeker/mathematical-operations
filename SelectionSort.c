#include<stdio.h>
#define Maximum 40
void selectionSort(int arr[],int size){
    int i,j ;
    int minimumIndex;
    for(i=0;i<size;i++){
        minimumIndex = i ;
        for(j =i ;j<size;j++){
            if(arr[j]<arr[minimumIndex]){
                minimumIndex=j;
            }
        }
        int temp =arr[i];
        arr[i] = arr[minimumIndex];
        arr[minimumIndex]= temp;

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
  selectionSort(array,size);

  for(i = 0;i<size;i++){
    printf("%d ",array[i]);
  }

  return 0 ;
}

