#include <stdio.h>

int main(){
    int row,col,i,j,space;
    row=7,col=7;
    for(i=1;i<=row;i++){

        //! A
        for(j=1;j<=col;j++){
            if(i==1 || j==1 || j==col|| i==row/2)
            printf("* ");
            else
            printf("  ");
        }for(j=1;j<=col;j++){
            printf(" ");
        }

       //!B
         for(j=1;j<=col;j++){
            if(i==1 || j==1 || i==row||i==4 || j==col || (j==col && i<=row/2)  || (i==col && j==row))
            printf("* ");
            else
            printf("  ");
        }for(j=1;j<=col;j++){
            printf(" ");
        }
       //!D
        
            
          for(j=1;j<=col;j++){
          	if(i==1 || j==1  || i==row|| j==col ||(j==col && i<=row/2)  || (i==col && j==row))
          	 printf("* ");
            else
            printf("  ");
		  } for(j=1;j<=col;j++){
            printf(" ");
        }
	   //!U
	   
	   for(j=1;j<=col;j++){
          	if(  j==1  || i==row||j==col ||(j==col && i<=row/2)  || (i==col && j==row))
          	 printf("* ");
            else
            printf("  ");
		  }for(j=1;j<=col;j++){
            printf(" ");
        }
		  
	   //!L
	    for(j=1;j<=col;j++){
          	if(  j==1  || i==row   || (i==col && j==row))
          	 printf("* ");
            else
            printf("  ");
		  }
	   
	   
	    
		      
        printf("\n");
         
    }

    

        return 0;
    }


      

