#include <stdio.h>    
   // left rotating an array  
int main()    
{    
    int n;
    scanf("%d",&n);   
    int arr[n]  ;     
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }    
    int length = sizeof(arr)/sizeof(arr[0]);      
    int k = 3;        
    printf("Original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }    
    for(int i = 0; i < k; i++){    
        int j, first;        
        first = arr[0];    
        for(j = 0; j < length-1; j++){            
            arr[j] = arr[j+1];    
        }    
        arr[j] = first;    
    }        
    printf("\n");        
    printf("Array after left rotation: \n");    
    for(int i = 0; i < length; i++){    
        printf("%d ", arr[i]);    
    }    
    return 0;    
} 