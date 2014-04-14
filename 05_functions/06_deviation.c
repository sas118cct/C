#include<stdio.h>  
#include <math.h>                                       
int  main( )                                              
{                                                           
        int i,n;                                               
        float value[100], deviation,                      
              sum,sumsqr,mean,variance,stddeviation;           
                                                               
        sum = sumsqr = n = 0 ;                                 
                                                               
        printf("Input values: \n");            
        for (i=1; i< 100 ; i++){                                                      
            scanf("%f", &value[i]);                            
            if (value[i] == -1)                                
               break;                                          
            sum += value[i];                                   
            n += 1;                                            
        }                                                      
        mean = sum/(float)n;                                   
                                                               
        for (i = 1 ; i<= n; i++){                                                      
            deviation = value[i] - mean;                       
            sumsqr += deviation * deviation;                   
        }                                                      
        variance = sumsqr/(float)n ;                           
        stddeviation = sqrt(variance) ;                        
                                                               
        printf("\nNumber of items : %d\n",n);                  
        printf("Mean : %f\n", mean);                           
        printf("Standard deviation : %f\n", stddeviation);     
   }                                                           
                                  
