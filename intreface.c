

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
void interface(){ int x;
             printf("\t\t\t WELCOME TO \n \t\t\t BUS RESERVATION SYSTEM\n\n \t\t\t by NINJA\n");
             printf("\t\t*________________________________*\n");
             printf("\t\t\t 1:reservation\n \t\t\t 2:buses available\n \t\t\t ");
               printf("enter the option:");
               scanf("%d",&x);
               if(x=1){
                reservation();
               }
               else if(x=2){

               }

}
int reservation(){ system("cls");
               int d[3];
    printf("\n\n\t\t\t  1:BUS reservation\n");
    printf("date:");
    scanf("%d%d%d",&d[0],&d[1],&d[2]) ;
    int num;
                    for(int i=0;i<=1;i++){//0=first one ,2=second one,1=third one,3=fourth one
                    printf("bus number :%d\t\t\t\t\t\t bus number:%d\n",i+1,i+3);
                    printf("date: %d-%d-%d\t\t\t\t\t\t date:%d%d%d\n",d[0],d[1],d[2],d[0],d[1],d[2]);
                    printf("\tbus agency:%s\t\t bus agency:%s\n",b[i].busname,b[i+2].busname);
                    printf("\tdeparture place :%s \t\ departure place :%s \n\tarrival place :%s\t\t arrival place :%s\n",b[i].dplace,b[i+2].dplace,b[i].aplace,b[i+2].aplace);
                    printf("\tdeparture time :%d\t\t departure time :%d\n\tarrival time :%d\t\t rarrival time :%d\n",b[i].dtime,b[i+2].dtime,b[i].atime,b[i+2].atime);
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
                          }}



FILE*busrev1;
FILE*busrev2;
FILE*busrev3;
FILE*busrev4;

int bus1(){ system("cls");printf( "departure :%s\tarival :%s\n",b[0].dplace,b[0].aplace);
             printf("depature timings :%d \t arival time:%d\n",b[0].dtime,b[0].atime);
             printf("   ave is avalable \tno is reserved\n");


                int res,s;
                int i,j;
                char name[10]="ave";
                int resr[30];
                int*pv=&resr;
                for(i=0;i<30;){
                printf("%d:%s\t%d:%s\t%d:%s\t%d:%s\t%d:%s\t%d:%s\n ",i++,name,i++,name,i++,name,i++,name,i++,name,i++,name);
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
                      busrev1=fopen("busrev1.txt","w");
                      fprintf(busrev1,"%s",n);
                      int o;
                      for(o=0;o<s;o++){
                      fprintf(busrev1,"%d",*resr+o);}
                      fclose(busrev1);

                     }




int bus2(){system("cls");printf( "departure :%s\tarival :%s\n",b[1].dplace,b[1].aplace);
             printf("depature timings :%d \t arival time:%d\n",b[1].dtime,b[1].atime);
             printf("   yes is avalable \tno is reserved\n");
                  int res,s;
                int i,j;
                char name[10]="ave";
                int resr[30];
                int*pv=&resr;
                for(i=0;i<30;){
                printf("%d:%s\t%d:%s\t%d:%s\t%d:%s\t%d:%s\t%d:%s\n ",i++,name,i++,name,i++,name,i++,name,i++,name,i++,name);
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
                      busrev2=fopen("busrev2.txt","w");
                      fprintf(busrev2,"%s",n);
                      int o;
                      for(o=0;o<s;o++){
                      fprintf(busrev2,"%d",*resr+o);}
                      fclose(busrev2);
                      }
int bus3(){ system("cls");printf( "departure :%s\tarival :%s\n",b[2].dplace,b[2].aplace);
             printf("depature timings :%d \t arival time:%d\n",b[2].dtime,b[2].atime);
             printf("   yes is avalable \tno is reserved\n");
               int res,s;
                int i,j;
                char name[10]="ave";
                int resr[30];
                int*pv=&resr;
                for(i=0;i<30;){
                printf("%d:%s\t%d:%s\t%d:%s\t%d:%s\t%d:%s\t%d:%s\n ",i++,name,i++,name,i++,name,i++,name,i++,name,i++,name);
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
                      fprintf(busrev3,"%d",*resr+o);}
                      fclose(busrev3);
}

int bus4(){system("cls");printf( "departure :%s\tarival :%s\n",b[3].dplace,b[3].aplace);
             printf("depature timings :%d \t arival time:%d\n",b[3].dtime,b[3].atime);
             printf("   yes is avalable \tno is reserved\n");

                int res,s;//s=no of seats
                int i,j;
                char name[20]="yes";
                int resr[30];
                for(i=1;i<30;){
                printf("\n%d:%s\t%d:%s\t%d:%s\t%d:%s\t%d:%s\t%d:%s\n ",i++,name,i++,name,i++,name,i++,name,i++,name,i++,name);
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
                      for(o=0;o<s;o++){
                      fprintf(busrev4,"%d",*resr+o);}
                      fclose(busrev4);

return 0;}





