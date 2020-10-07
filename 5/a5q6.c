#include<stdio.h> 
 #include<stdlib.h>
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
  

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    
    int i = (low - 1); 
    for (int j = low; j <= high- 1; j++) 
    { 
        
        if (arr[j] < pivot) 
        { 
            i++;   
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  

void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
       
        int pi = partition(arr, low, high); 
  
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
void main(){
    int size;
	printf("Enter the size:\n");
	scanf("%d",&size);
	int* arr=(int*)malloc(size*sizeof(int));
	printf("Enter the elements\n");
	for(int i=0;i<size;i++)scanf("%d",&arr[i]);
    quickSort(arr, 0, size-1); 
    printf("Sorted array: \n"); 
    for(int i=0;i<size;i++)printf("%d ",arr[i]);
	printf("\n");
 
} 

