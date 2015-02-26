
//  Created by Itar Mehak Arneja on 26/02/15.
//  Copyright (c) 2015 Itar Mehak Arneja. All rights reserved.


#include <stdio.h>
#include<stdlib.h>

int main(){
    
        int n1,n2,count,i;
    char dec; char g;
    
    do{
        printf("Insert any two number: ");
        scanf("%d %d",&n1,&n2);
        getchar();
        // deciding which no is smaller. we will check till the lowest one. We cannot find dividor of a no greater than itself
        
            if(n1>n2)
        
                     count=n2;
            else
                     count=n1;
        
            for(i=count;i>=1;i--){
                     if(n1%i==0 && n2%i==0){
                             printf("\nHCF of these 2 numbers is : %d",i) ;
                           //  printf("\nDo you want to continue : Y") ;
                        //     printf(" Do you want to continue: Y/N  \n”);
                             break;
                         }
            
                }
        

           printf("\nTo continue hit Y/y : To exit hit any key") ;
           dec = getchar();
           getchar();
           }  while(dec == 'Y' || dec == 'y');
    
           printf("\n Thank you for employing this code. Good Day! ");
           return 0;
    }
    
    


    

