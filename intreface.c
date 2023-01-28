
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
int reservation(){system("cls");
int bus1();
int bus2();
int bus3();
int bus4();
               int d[3];
    printf("\n\n\t\t\t  1:BUS reservation\n");
    printf("date:");
    scanf("%d%d%d",&d[0],&d[1],&d[2]) ;
    int s;
                    for(int i=0;i<=1;i++){//0=first one ,2=second one,1=third one,3=fourth one
                    printf("bus number :%d\t\t\t\t\t\t bus number:%d\n",i+1,i+3);
                    printf("date: %d-%d-%d\t\t\t\t\t\t date:%d%d%d\n",d[0],d[1],d[2],d[0],d[1],d[2]);
                    printf("\tbus agency:%s\t\t bus agency:%s\n",b[i].busname,b[i+2].busname);
                    printf("\tdeparture place :%s \t\ departure place :%s \n\tarrival place :%s\t\t arrival place :%s\n",b[i].dplace,b[i+2].dplace,b[i].aplace,b[i+2].aplace);
                    printf("\tdeparture time :%d\t\t departure time :%d\n\tarrival time :%d\t\t rarrival time :%d\n",b[i].dtime,b[i+2].dtime,b[i].atime,b[i+2].atime);
                                      }
                        printf("enter bus numbe");
                        scanf("%d",num);
                          system("cls");
                          switch(s){
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

int bus1(){ system("cls");
             printf("bus agency:%s",b[1].busname);


            }
int bus2(){
}
int bus3(){
}
int bus4(){
}
