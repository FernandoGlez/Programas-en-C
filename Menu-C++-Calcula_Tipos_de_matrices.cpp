#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

     
   int main()
     {
            
         char repetir;
         int opc;
         int x;
         int dato,suma ; 
         int mat[20][20],i,j,n;
         int esIdentidad = 1;
         int esNula=0; 
         int esNormal;
        int(esEscalar);
        int esSimetrica;
        
   
    do{
            textcolor(13);      
      printf("\n *************************//PROGRAMA HECHO POR OMAR//**************************");   
          textcolor(8);  
        printf("\n");  
        printf("\n                          1- Matriz Normal:");
        printf("\n                          2- Matriz Identidad:");
        printf("\n                          3- Matriz Nula:");
        printf("\n                          4- Matriz Escalar:");
        printf("\n                          5- Simetrica:");
        printf("\n                          6- Deseo Salir:""\n""\n");
        textcolor(12); 
        printf("\n *************************//HECHO POR OMAR//**************************""\n");  
        textcolor(10);    
        printf("\n               Ingresa la opcion Deseada:""\n");
        scanf("%d",&opc);
         
      switch(opc)
     {
         case 1: 
       textcolor(11);;         
       printf("\n""Dame el tama�o de la matriz: ""\n""\n");
       scanf("%d", &n);

      for(i = 0; i < n; i++)
          for(j = 0; j < n; j++)
          {
               printf( "Matriz[%d][%d]: ", i, j );
               scanf( "%d", &mat[i][j] );
               }
     for(i = 0; i < n; i++)
      {
          for(j = 0; j < n; j++)
               printf("%d ", mat[i][j]);
               
          printf("\n");
      }
        if(esIdentidad)
         textcolor(12);
           printf("\n"); 
          printf( "Su matriz es una matriz Normal: .""\n""\n");
 
 printf("desea regresar al menu""\n");
printf("1.-si""\n");
printf("2.-no""\n");
scanf("%d",&x);
 break; 
       case 2: 
        textcolor(7);    
       printf("\n""Dame el tama�o de la matriz: ""\n");
       scanf("%d", &n);
 
       for(i = 0; i < n; i++)
           for(j = 0; j < n; j++)
            {
               printf( "Matriz[%d][%d]: ", i, j );
               scanf( "%d", &mat[i][j] );
               if( (mat[i][j] != 0 && i != j) ||
               (mat[i][j] != 1 && i == j))
                    esIdentidad = 0;
           }

       for(i = 0; i < n; i++)
       {
          for(j = 0; j < n; j++)
               printf("%d ", mat[i][j]);
               printf("\n");
       }
    

      if(esIdentidad)
        
          printf( "Es matriz identidad.\n");
     else
          printf( "No es matriz identidad.\n");

    printf("desea regresar al menu""\n");
printf("1.-si""\n");
printf("2.-no""\n");
scanf("%d",&x);
 break; 
    case 3: 
       textcolor(9);        
       printf("\n""Dame el tama�o de la matriz: ""\n");
       scanf("%d", &n);
 
       for(i = 0; i < n; i++)
           for(j = 0; j < n; j++)
            {
               printf( "Matriz[%d][%d]: ", i, j );
               scanf( "%d", &mat[i][j] );
               if( (mat[i][j] !=0 && i==j) ||
               (mat[i][j]!=0 &&  i==j))
                esNula=0;
                   
           }

       for(i = 0; i < n; i++)
       {
          for(j = 0; j < n; j++)
               printf("%d ", mat[i][j]);
               printf("\n");
       }
    

      if(esNula)
          printf( "Si es Nula =) \n");
     else
          printf( "Lo siento pero esa matriz no es Nula.\n");
   
   printf("desea regresar al menu""\n");
printf("1.-si""\n");
printf("2.-no""\n");
scanf("%d",&x);
 break; 
    case 4: 
        textcolor(3);         
       printf("\n""Dame el tama�o de la matriz: ""\n");
       scanf("%d", &n);

      for(i = 0; i < n; i++)
           for(j = 0; j < n; j++)
            {
               printf( "Matriz[%d][%d]: ",(i+1), (j+1));
               scanf( "%d", &mat[i][j] );
               if( (mat[i][j]  && j == i) ||
               (mat[i][j]  && i == j))
            esSimetrica = 0;
           }

       for(i = 0; i < n; i++)
       {
          for(j = 0; j < n; j++)
               printf("%d ", mat[i][j]);
               printf("\n");
       }
    
               
 
      if(esEscalar)
          printf( "Si es Escalar =) ""\n""\n");

     else
          printf( "Lo siento pero esa matriz no es Escalar.""\n""\n");


printf("desea regresar al menu""\n");
printf("1.-si""\n");
printf("2.-no""\n");
scanf("%d",&x); 
 break; 
 
  case 5: 
       textcolor(11);       
       printf("\n""Dame el tama�o de la matriz: ""\n");
       scanf("%d", &n);
 
       for(i = 0; i < n; i++)
           for(j = 0; j < n; j++)
            {
               printf( "Matriz[%d][%d]: ", i, j );
               scanf( "%d", &mat[i][j] );
               if( (mat[i][j] && j == i) ||
               (mat[i][j] && i == j))
                    esSimetrica = 0;
           }

       for(i = 0; i < n; i++)
       {
          for(j = 0; j < n; j++)
               printf("%d ", mat[i][j]);
               printf("\n");
       }
    

      if(esSimetrica)
          printf( "Es matriz Simetrica.\n");
     else
          printf( "No es matriz simetrica .\n");

    printf("desea regresar al menu""\n");
printf("1.-si""\n");
printf("2.-no""\n");
scanf("%d",&x);

x==2;
 break; 
 
    case 6:
         textcolor(8);      
    printf( "Gracias por su Visita...\n");
    system("pause");
     
exit (0);
break;

}}while(x!=2);

_flushall();
getchar();
getchar();
return 0;
}

