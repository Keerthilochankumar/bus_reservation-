#include <stdio.h>
#include <stdlib.h>

int main()
{  interface();
   return 0;
}
#include<stdio.h>
#include<conio.h>
    struct bus{
               char busname[20];
               int dtime,atime;
               char dplace[20],aplace[20];
               };
               struct bus b[4]={{"ninja travels",900,2000,"hyderabad","mumbai"},{"ninja travels",1000,1800,"hyderabad","bangalore"},{"red bus",1000,2200,"hyderabad","delhi"},{"red bus",1100,2300,"hyderabad","chennai"}};
int bus1();
int bus2();
int bus3();
int bus4();
void busavalable();
void interface(){ int x;
             printf("\t\t\t WELCOME TO \n \t\t\t BUS RESERVATION SYSTEM\n\n \t\t\t by NINJA\n");
             printf("\t\t*________________________________*\n");
             printf("\t\t\t 1:reservation\n \t\t\t 2:buses available\n \t\t\t ");
               printf("enter the option:");
               scanf("%d",&x);
               switch(x){

               case 1:reservation();
                       break;
               case 2:   system("cls");
                       busavalable();
                       break;
               }
}
void  busavalable(){
                    printf("\t\t\t *********bus avalable*********\n");
                    printf("\t\t\t--------------------------------\n");
                    for(int i=0;i<=1;i++){
                    printf("\n\n\tbus agency:%s\t bus agency:%s\n",b[i].busname,b[i+2].busname);
                    printf("\t***********************\t\t*********************");
                    printf("\n\tdeparture place :%s \t\tdeparture place :%s \n\tarrival place:%s\t\t\tarrival place :%s",b[i].dplace,b[i+2].dplace,b[i].aplace,b[i+2].aplace);
                    printf("\n\tdeparture time :%d\t\t\tdeparture time :%d\n\tarrival time :%d\t\t\tarrival time:%d",b[i].dtime,b[i+2].dtime,b[i].atime,b[i+2].atime);
      }
      }
int reservation(){
    system("cls");
    int d[3];
    printf("\n\n\t\t\t  1:BUS reservation\n");
    printf("d:");
    scanf("%d",&d[0]);
    printf("m:");
    scanf("%d:",&d[1]);
    printf("y:");
    scanf("%d",&d[2]);
    int num;
                    for(int i=0;i<=1;i++){//0=first one ,2=second one,1=third one,3=fourth one
                    printf("bus number :%d\t\t\t\t\t\t bus number:%d\n",i+1,i+3);
                    printf("date: %d-%d-%d\t\t\t\t\t\t date:%d%d%d\n",d[0],d[1],d[2],d[0],d[1],d[2]);
                   printf("\n\n\tbus agency:%s\t bus agency:%s\n",b[i].busname,b[i+2].busname);
                    printf("\t***********************\t\t*********************");
                    printf("\n\tdeparture place :%s \t\tdeparture place :%s \n\tarrival place:%s\t\t\tarrival place :%s",b[i].dplace,b[i+2].dplace,b[i].aplace,b[i+2].aplace);
                    printf("\n\tdeparture time :%d\t\t\tdeparture time :%d\n\tarrival time :%d\t\t\tarrival time:%d",b[i].dtime,b[i+2].dtime,b[i].atime,b[i+2].atime);
                                      }
                        printf("enter bus numbe");
                        scanf("%d",&num);
                          system("cls");
                          switch(num){
                                      case 1:bus1();
                                             break;
                                      case 2:bus2();
                                             break;
                                      case 3:bus3();
                                             break;
                                      case 4:bus4();
                                             break;
                          }
                          }

FILE*busrev1,*busrev2,*busrev3,*busrev4,*b1,*b2,*b3,*b4;
int bus1(){
             system("cls");printf( "departure :%s\t arrival :%s\n",b[0].dplace,b[0].aplace);
             printf("depature timings :%d \t arival time:%d\n",b[0].dtime,b[0].atime);
             printf(" \t y is available \t n is reserved\n");
             b1=fopen("b.txt","r+");
                int res,s;
                int i,j,buffer;
                char name[30]={'y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y'};
                     if(b1==NULL){
                printf("error");
             }
               else{
                    fscanf(b1,"%d",buffer);
                    while(buffer!=EOF){
                    name[buffer-1]="n";
                    fscanf(b1,"%d",buffer);
                    }
               fclose(b1);
                }
                int resr[30];
                for(i=1;i<=30;){
                printf("%d:%c     %d:%c     %d:%c\n",i++,name[(i-1)],i++,name[(i-1)],i++,name[(i-1)]);
}               printf("enter the no of seats required:");
                scanf("%d",&s);
                for(j=0;j<s;j++){
                     printf("the seat no :");
                     scanf("%d",&resr[j]);
                     }
                      system("cls");
                      char n[20];
                      printf("\t\t****payment****\n");
                      printf("\n the pasenger name = ");
                      scanf("%s",n);
                      printf("the cost ticket include tax is = %d\n",(s*400));
                      printf("the discount applied is=%d\n",(s*12));
                      printf("your total is %d\n",((s*400)-(s*12)));
                      busrev1=fopen("busrev1.txt","w");
                      b1=fopen("b.txt","w");
                      fprintf(busrev1,"%s:",n);
                      int o;
                      for(o=0;o<s;o++){
                      printf("your seat are :%d\n",*(resr+o));
                      fprintf(busrev1,"%d",*(resr+o));
                      fprintf(b1,"%d",*(resr+o));}
                      fclose(busrev1);
                      fclose(b1);
                     }
int bus2(){  system("cls");printf( "departure :%s\tarival :%s\n",b[1].dplace,b[1].aplace);
             printf("depature timings :%d \t arival time:%d\n",b[1].dtime,b[1].atime);
             printf("   yes is avalable \tno is reserved\n");
                  int res,s;
                   b2=fopen("b1.txt","a+");
                if(b2==NULL){
                    printf("error");
                }
                  int i,j;
                  char buffer,name[30]={'y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y'};
                   buffer=fgetc(b2);
                while(buffer=EOF){
                   name[buffer-1]="n";
                   buffer=fgetc(b1);
                }
                  int resr[30];
                  int*pv=&resr;
                  for(i=1;i<=30;){
                  printf("%d:%c    %d:%c    %d:%c\n",i++,name[(i-1)],i++,name[(i-1)],i++,name[(i-1)]);
}                 printf("enter the no of seats required:");
                  scanf("%d",&s);
                for(j=0;j<s;j++)
                {
                     printf("the seat no :");
                     scanf("%d",&resr[j]);
                     }
                      system("cls");
                      char n[20];
                      printf("\t\t****payment****\n");
                      printf("\n the pasenger name = ");
                      scanf("%s",n);
                      printf("the cost ticket include tax is = %d\n",(s*400));
                      printf("the discount applied is=%d\n",(s*12));
                      printf("your total is %d",((s*400)-(s*12)));
                      busrev2=fopen("busrev2.txt","w");
                      fprintf(busrev2,"%s",n);
                      int o;
                      for(o=0;o<s;o++){
                      printf("your seat are :%d\n",*(resr+o));
                      fprintf(busrev2,"%d,",*resr+o);}
                      fclose(busrev2);
                      fclose(b2);
                      }
int bus3(){ system("cls");printf( "departure :%s\tarival :%s\n",b[2].dplace,b[2].aplace);
             printf("depature timings :%d \t arival time:%d\n",b[2].dtime,b[2].atime);
             printf("   yes is avalable \tno is reserved\n");
               int res,s;
                int i,j;
               char name[30]={'y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y'};
                int resr[30];
                int*pv=&resr;
                for(i=1;i<=30;){
                printf("%d:%c    %d:%c    %d:%c\n",i++,name[(i-1)],i++,name[(i-1)],i++,name[(i-1)]);
}               printf("enter the no of seats required:");
                scanf("%d",&s);
                for(j=0;j<s;j++){
                     printf("the seat no :");
                     scanf("%d",&resr[j]);
                     }
                     system("cls");
                     char n[20];
                      printf("\t\t****payment****\n");
                      printf("\n the pasenger name = ");
                      scanf("%s",n);
                      printf("the cost ticket include tax is = %d\n",(s*400));
                      printf("the discount applied is=%d\n",(s*12));
                      printf("your total is %d",((s*400)-(s*12)));
                      busrev3=fopen("busrev3.txt","w");
                      fprintf(busrev3,"%s",n);
                      int o;
                      for(o=0;o<s;o++){
                      fprintf(busrev3,"%d,",*(resr+o));
                      printf("your seat are :%d\n",*(resr+o));}
                      fclose(busrev3);
}

int bus4(){system("cls");printf( "departure :%s\tarival :%s\n",b[3].dplace,b[3].aplace);
             printf("depature timings :%d \t arival time:%d\n",b[3].dtime,b[3].atime);
             printf("   yes is avalable \tno is reserved\n");

                int res,s;//s=no of seats
                int i,j;
                char name[30]={'y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y'};
                char resr[30];
                for(i=1;i<=30;){
                printf("%d:%c    %d:%c    %d:%c\n",i++,name[(i-1)],i++,name[(i-1)],i++,name[(i-1)]);
}               printf("enter the no of seats required:");
                scanf("%d",&s);
                for(j=1;j<=s;j++){
                     printf("the seat no :");
                     scanf("%d",&res);
                     resr[j]=res;}
                     system ("cls");
                  char n[20];
                      printf("\t\t****payment****\n");
                      printf("\n the pasenger name = ");
                      scanf("%s",n);
                      printf("the cost ticket include tax is = %d\n",(s*400));
                      printf("the discount applied is=%d\n",(s*12));
                      printf("your total is %d",((s*400)-(s*12)));
                      busrev4=fopen("busrev4.txt","w");
                      fprintf(busrev4,"%s",n);
                      int o;
                      for(o=1;o<=s;o++){
                       printf("your seat are :%d\n",*(resr+o));
                      fprintf(busrev4,"%d,",*(resr+o));}
                      fclose(busrev4);

return 0;}


