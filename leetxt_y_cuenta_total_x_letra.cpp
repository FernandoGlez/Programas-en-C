#include <stdio.h>
#include <stdlib.h>

   
 
int main()
{
     int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
     char C;
     FILE *F;

                          F=fopen("c:\\omar.txt","r");
                          
                                do
                                {
                              C=getc(F);
                           
                               if((a=='a') || (a=='A')){
                                a++;
                                 }      
                              if ((b=='b') || (b=='B')){
                                b++;
                                 }
                               if ((c=='c') || (c=='C')){
                                 c++;
                                 }
                                if ((d=='d') || (d=='D')){
                                 d++;
                                 }
                                if ((e=='e') || (e=='E')){
                                 e++;
                                 }
                                 if ((f=='F') || (f=='F')){
                                 f++;
                                 }
                                 if ((g=='g') || (g=='G')){
                                 g++;
                                 } 
                                 if ((h=='h') || (h=='H')){
                                 h++;
                                 }
                                 if ((i=='i') || (i=='I')){
                                 i++;
                                 } 
                                 if ((j=='j') || (j=='J')){
                                 j++;
                                 } 
                                 if ((k=='k') || (k=='K')){
                                 k++;
                                 }
                                 if ((l=='l') || (l=='L')){
                                 l++;
                                 }
                                  if ((m=='m') || (m=='M')){
                                 m++;
                                 }
                                 if ((n=='n') || (n=='N')){
                                 n++;
                                 }
                                  if ((o=='o') || (o=='O')){
                                 o++;
                                 }
                                  if ((p=='p') || (p=='P')){
                                 p++;
                                 }
                                  if ((q=='q') || (q=='Q')){
                                 q++;
                                 }
                                  if ((r=='r') || (r=='R')){
                                 r++;
                                 }
                                  if ((s=='s') || (s=='S')){
                                 s++;
                                 } 
                                  if ((t=='t') || (t=='T')){
                                 t++;
                                 }
                                  if ((u=='u') || (u=='U')){
                                 u++;
                                 }
                                  if ((v=='v') || (v=='V')){
                                 v++;
                                 }
                                  if ((w=='w') || (w=='W')){
                                 w++;
                                 }
                                  if ((x=='x') || (x=='X')){
                                 x++;
                                 }
                                  if ((y=='y') || (y=='Y')){
                                 y++;
                                 }
                               if ((z=='z') || (z=='Z')){
                                 z++;         
                                 }
                             printf("%c",C);  
                              
                                }while(C!=EOF);
                                
                               fclose(F); 
                               
                                     printf("\n""\n");
                               printf("Hay tantas: a: %d""\n",a);
                               printf("Hay tantas: b: %d""\n",b);
                               printf("Hay tantas: c: %d""\n",c);
                               printf("Hay tantas: d: %d""\n",d);
                               printf("Hay tantas: e: %d""\n",e);
                               printf("Hay tantas: f: %d""\n",f);
                               printf("Hay tantas: g: %d""\n",g);
                               printf("Hay tantas: h: %d""\n",h);
                               printf("Hay tantas: i: %d""\n",i);
                               printf("Hay tantas: j: %d""\n",j);
                               printf("Hay tantas: k: %d""\n",k);
                               printf("Hay tantas: l: %d""\n",l);
                               printf("Hay tantas: m: %d""\n",m);
                               printf("Hay tantas: n: %d""\n",n);
                               printf("Hay tantas: o: %d""\n",o);
                               printf("Hay tantas: p: %d""\n",p);
                               printf("Hay tantas: q: %d""\n",q);
                               printf("Hay tantas: r: %d""\n",r);
                               printf("Hay tantas: s: %d""\n",s);
                               printf("Hay tantas: t: %d""\n",t);
                               printf("Hay tantas: u: %d""\n",u);
                               printf("Hay tantas: v: %d""\n",v);
                               printf("Hay tantas: w: %d""\n",w);
                               printf("Hay tantas: x: %d""\n",x);
                               printf("Hay tantas: y: %d""\n",y);
                               printf("Hay tantas: z: %d""\n",z);
                             
                                getchar();
                                getchar();
                                return 0;
                                }
