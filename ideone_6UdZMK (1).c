#include<stdio.h>  
void main ()  
{  
    int arr[100],i,n,s;  
    printf("Enter the size of the array?");  
    scanf("%d",&n);  
    printf("Enter the elements of the array?");  
    for(i = 0; i<n; i++)  
    {  
        scanf("%d",&arr[i]);  
    }  
    s= arr[0]; 
    for(i=0;i<n;i++)  
    {  
        if(arr[i]<s)  
        {   
            s = arr[i];  
        }  
        
    }  
    printf("small = %d",s);  
      
}  