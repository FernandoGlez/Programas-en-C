#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
struct datos{
       
 int clave[20];
 int num[30];
 
 }emp;
 
main()
{           
         void ordena();
         int claves;
         int codigo;
         int i,opc,x;
         struct datos emp;
         struct datos *aux1;
         struct datos *aux;
         FILE *F,F1;      
      do
      { 
       printf("\n *************************///**************************");   
      
        printf("\n");  
        printf("\n                          1- Altas:");
        printf("\n                          2- Bajas:");
        printf("\n                          3- Consultas:");
        printf("\n                          4- Salir:");
     printf("\n *************************///**************************"); 
     
    printf("\n               Ingresa la opcion Deseada:""\n");
    scanf("%d",&opc);
           
      switch(opc)
     {
         case 1: 
     F=fopen("datos.dat","ab+"); 
           
     if(F==NULL)
     {
     printf("ERROR, EL ARCHIVO NO EXISTE:");
}
     else
     {
      printf("dame un numero:");
      scanf("%d",&emp.num);       
      
      puts("ingresa una clave:");
      scanf("%s",&emp.clave);
           
fwrite(&emp,sizeof(emp),1,F);

 fclose(F);
      }
     break; 
     
       case 2: 
   FILE *F1;
   printf("\n\n\n\Que dato desea eliminar?");      
   
        F1=fopen("datos.dat","rb+");    
    
   
   while (fread(&emp,sizeof(emp),1,F1)==0)
   {
   if (claves==codigo)fwrite(&emp,sizeof(emp),1,F1);
   remove("c:\\DATOS.DAT");
  // rename("c:\\ARCHIVOS.DAT""DAT");
 printf("archivo eliminado");
   fclose(F1);
}
  
break;   
        case 3:   
                      
     F=fopen("datos.dat","rb");
 
 if(F==NULL)
{
printf("\n\n\n\rNo existe el archivo  \nPor favor creelo !!!");
  getchar();
}

     while(fread(&emp,sizeof(emp),1,F)==1)   
     {
     //if(num==emp.clave)
    // {
         fread(&emp,sizeof(emp),1,F);
         printf("datos ingresados:""\n");
       
   printf("NUMERO:""\n");                
   printf("%d",emp.num);
   
     printf("\n"); 
    printf("CLAVE:");  
   printf("%s",emp.clave);
  

 fread(&emp,sizeof(emp),1,F);
  getchar();
  fclose(F);
       }
      break;   
       
 // void main(void){
       
 aux1=(struct datos *)malloc(sizeof (struct datos));
      for (i=0;i<100;i++)
     // {
        //  if(aux[i]==NULL)
           //  i=100;
         // else
        //  {
           //  if((aux[i+1]!=NULL))
            // if((aux[i+1]->clave<aux[i]->clave))
           //  {
            //    aux1=aux[i];
                aux[i]=aux[i+1];
              // aux[i+1]=aux1;
                i=-1;
            // }
         // }
      //}
      printf("se ordenaron los datos");

case 4:


break;

}}while(opc!=4);
getchar();
return 0;
}

