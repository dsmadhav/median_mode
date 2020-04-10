#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j,k,arr[2500];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    float mean, median, mode,sum;
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    mean=sum/n;                                     //mean
    for(j=0;j<n;j++){                               //bubble sort algorithm
        for(k=0;k<n;k++){
            if(arr[k] > arr[k+1]){
                int temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }
    int max=0;
    if(n%2==0){                                    
        median = (arr[n/2]+arr[(n/2)+1])/2;         //median for even number of integers
    }
    else{
        median = arr[(n/2)+1];                      //median for odd number of integers
    }
    int count[n];                                
    while(j<n){                                     //array to store the frequency of each element
        for(k=0;k<n;k++){
            if(arr[j]==arr[k]){
                count[k]++;
            }
        }
        j--;
    }
    for(k=0;k<n;k++){                               //checking which element has maximum frequency
        if (count[k]>max){
            max=count[k];
        }
        mode=max;
    }
    printf("%.1f\n%.1f\n%f",mean,median,mode);
    return 0;
}
