#include<stdio.h>
#include<conio.h>
#include <stdlib.h> 

int main()
{int x,y,z,chek_out=1,
qp1=0,qp2=0,qp3=0,qp4=0,qp5=0,qp6=0,qp7=0,qp8=0,qp9=0,qp10=0,qp11=0,qp12=0,
qT1=0,qT2=0,qT3=0,qT4=0,qT5=0,qT6=0,qT7=0,qT8=0,qT9=0,qT10=0,qT11=0,qT12=0,
qS1=0,qS2=0,qS3=0,qS4=0,qS5=0,qS6=0,qS7=0,qS8=0,qS9=0,qS10=0,qS11=0,qS12=0,w,st,quant=0;

float 
Pm1=100,Pm2=120,Pm3=160,Pm4=120,Pm5=170,Pm6=170,Pm7=210,Pm8=190,Pm9=215,Pm10=230,Pm11=250,Pm12=230,PRT=0,
PT1=100,PT2=125,PT3=165,PT4=125,PT5=175,PT6=175,PT7=215,PT8=195,PT9=220,PT10=235,PT11=255,PT12=235,
PS1=100,PS2=140,PS3=180,PS4=140,PS5=190,PS6=200,PS7=230,PS8=235,PS9=250,PS10=260,PS11=270,PS12=290;

do{
system("cls");
printf("                 *****   MENU    *****");
printf("\n                  ------------------");
printf("\n\n  1-PIZZA   ");
printf("\n\n  2-TACOS   ");
printf("\n\n  3-SALADE  ");
printf("\n\n  4-CHEKOUT ");
printf("\n");
printf("\n\n What is your choice please?  ");
scanf("%d",&x);
printf("\nType any key to continue ........");
getch();
switch(x)
{case 1:{system("cls"); 
printf("\n    ****  PIZZA SIZE  ****");
printf("\n      ------------------- ");
printf("\n1 - Size M ");
printf("\n2 - Size L ");
printf("\n3 - Size XL ");
printf("\n\n What is your choice please?  ");
scanf("%d",&y);
printf("\nType any key to continue ........");
getch();
system("cls");
printf("\n    ****  PIZZA INGREDIENT  ****");
printf("\n        --------------------- ");
printf("\n1 - 3 Cheeze ");
printf("\n2 - Chiken ");
printf("\n3 - Beef ");
printf("\n4 - Tuna ");
printf("\n\n What is your choice please?  ");
scanf("%d",&z);
printf("\nType any key to continue ........");
getch();printf("\n");
 if(y==1){if    (z==1){qp1++;}
         else if(z==2){qp2++;}
         else if(z==3){qp3++;}
            else{qp4++;}
          }
  else if(y==2){if     (z==1){qp5++;}
                else if(z==2){qp6++;}
                else if(z==3){qp7++;}
                    else{qp8++;}
                }
               else{if(z==1){qp9++;}
                    else if(z==2){qp10++;}
                    else if(z==3){qp11++;}
                    else{qp12++;}
                  }
				  quant=qp12+qp11+qp10+qp9+qp8+qp7+qp6+qp5+qp4+qp3+qp2+qp1;
        break;}
 case 2:{system("cls"); 
printf("\n    ****  TACOS SIZE  ****");
printf("\n      ------------------- ");
printf("\n1 - Size M ");
printf("\n2 - Size L ");
printf("\n3 - Size XL ");
printf("\n\n What is your choice please?  ");
scanf("%d",&y);
printf("\nType any key to continue ........");
getch();
system("cls");
printf("\n    ****  TACOS INGREDIENT  ****");
printf("\n        --------------------- ");
printf("\n1 - 3 Cheeze ");
printf("\n2 - Chiken ");
printf("\n3 - Beef ");
printf("\n4 - Tuna ");
printf("\n\n What is your choice please?  ");
scanf("%d",&z);
printf("\nType any key to continue ........");
getch();printf("\n");
 if(y==1){if    (z==1){qT1++;}
         else if(z==2){qT2++;}
         else if(z==3){qT3++;}
            else{qT4++;}
          }
  else if(y==2){if     (z==1){qT5++;}
                else if(z==2){qT6++;}
                else if(z==3){qT7++;}
                    else{qT8++;}
                }
               else{if(z==1){qT9++;}
                    else if(z==2){qT10++;}
                    else if(z==3){qT11++;}
                    else{qT12++;}
                  }quant=quant+qT12+qT11+qT10+qT9+qT8+qT7+qT6+qT5+qT4+qT3+qT2+qT1;
        break;}
 case 3:{system("cls"); 
printf("\n    ****  SALADE SIZE  ****");
printf("\n      ------------------- ");
printf("\n1 - Size M ");
printf("\n2 - Size L ");
printf("\n3 - Size XL ");
printf("\n\n What is your choice please?  ");
scanf("%d",&y);
printf("\nType any key to continue ........");
getch();
system("cls");
printf("\n    ****  SALADE INGREDIENT  ****");
printf("\n        --------------------- ");
printf("\n1 - 3 Cheeze ");
printf("\n2 - Chiken ");
printf("\n3 - Beef ");
printf("\n4 - Tuna ");
printf("\n\n What is your choice please?  ");
scanf("%d",&z);
printf("\nType any key to continue ........");
getch();printf("\n");
 if(y==1){if    (z==1){qS1++;}
         else if(z==2){qS2++;}
         else if(z==3){qS3++;}
            else{qS4++;}
          }
  else if(y==2){if     (z==1){qS5++;}
                else if(z==2){qS6++;}
                else if(z==3){qS7++;}
                    else{qS8++;}
                }
               else{if(z==1){qS9++;}
                    else if(z==2){qS10++;}
                    else if(z==3){qS11++;}
                    else{qS12++;}
                  }quant=quant+qS12+qS11+qS10+qS9+qS8+qS7+qS6+qS5+qS4+qS3+qS2+qS1;
        break;}
 case 4:{system("cls");printf("\n\n CHEKOUT");chek_out=0; break;}
 default: printf(" Invalid choice");
}
if(chek_out!=0){
printf("\n\n\n");
printf(" DO YOU WANT TO ORDER AGAIN? : yes(1)/no(0)?");
scanf("%d",&chek_out);}
}
while(chek_out!=0);
system("cls");
if(quant==0){printf("\n\n\n I m sorry, but you haven t made any orders \n\n\n");}
else {printf("\n Are you seignor yes(1)/no(0)?");
scanf("%d",&w);
printf("\n Are you student yes(1)/no(0)?");
scanf("%d",&st);
printf("\nType any key please to have your invoice ........");
getch();
system("cls");
printf("\n\n                              #####  The invoice  #####");
printf("\n                                   -----------------");
printf("\n\n");
printf("   Item      |    Size     |    Ingredients    |   Quantity    |    unit price      |   Total price    |");
printf("\n-------------------------------------------------------------------------------------------------------");
if(qp1!=0)printf("\n   PIZZA     |    M        |    3-Cheeze       |    %d          |   %.3f          |       %.3f     |", qp1,Pm1,qp1*Pm1);
if(qp2!=0)printf("\n   PIZZA     |    M        |    Chiken         |    %d          |   %.3f          |       %.3f     |", qp2,Pm2,qp2*Pm2);
if(qp3!=0)printf("\n   PIZZA     |    M        |    Beef           |    %d          |   %.3f          |       %.3f     |", qp3,Pm3,qp3*Pm3);
if(qp4!=0)printf("\n   PIZZA     |    M        |    Tuna           |    %d          |   %.3f          |       %.3f     |", qp4,Pm4,qp4*Pm4);
if(qp5!=0)printf("\n   PIZZA     |    L        |    3-Cheeze       |    %d          |   %.3f          |       %.3f     |", qp5,Pm5,qp5*Pm5);
if(qp6!=0)printf("\n   PIZZA     |    L        |    Chiken         |    %d          |   %.3f          |       %.3f     |", qp6,Pm6,qp6*Pm6);
if(qp7!=0)printf("\n   PIZZA     |    L        |    Beef           |    %d          |   %.3f          |       %.3f     |", qp7,Pm7,qp7*Pm7);
if(qp8!=0)printf("\n   PIZZA     |    L        |    Tuna           |    %d          |   %.3f          |       %.3f     |", qp8,Pm8,qp8*Pm8);
if(qp9!=0)printf("\n   PIZZA     |    XL       |    3-Cheeze       |    %d          |   %.3f          |       %.3f     |", qp9,Pm9,qp9*Pm9);
if(qp10!=0)printf("\n   PIZZA     |    XL       |    Chiken         |    %d          |   %.3f          |       %.3f     |", qp10,Pm10,qp10*Pm10);
if(qp11!=0)printf("\n   PIZZA     |    XL       |    Beef           |    %d          |   %.3f          |       %.3f     |", qp11,Pm11,qp11*Pm11);
if(qp12!=0)printf("\n   PIZZA     |    XL       |    Tuna           |    %d          |   %.3f          |       %.3f     |", qp12,Pm12,qp12*Pm12);
if(qT1!=0)printf("\n   TACOS     |    M        |    3-Cheeze       |    %d          |   %.3f          |       %.3f     |", qT1,PT1,qT1*PT1);
if(qT2!=0)printf("\n   TACOS     |    M        |    Chiken         |    %d          |   %.3f          |       %.3f     |", qT2,PT2,qT2*PT2);
if(qT3!=0)printf("\n   TACOS     |    M        |    Beef           |    %d          |   %.3f          |       %.3f     |", qT3,PT3,qT3*PT3);
if(qT4!=0)printf("\n   TACOS     |    M        |    Tuna           |    %d          |   %.3f          |       %.3f     |", qT4,PT4,qT4*PT4);
if(qT5!=0)printf("\n   TACOS     |    L        |    3-Cheeze       |    %d          |   %.3f          |       %.3f     |", qT5,PT5,qT5*PT5);
if(qT6!=0)printf("\n   TACOS     |    L        |    Chiken         |    %d          |   %.3f          |       %.3f     |", qT6,PT6,qT6*PT6);
if(qT7!=0)printf("\n   TACOS     |    L        |    Beef           |    %d          |   %.3f          |       %.3f     |", qT7,PT7,qT7*PT7);;
if(qT8!=0)printf("\n   TACOS     |    L        |    Tuna           |    %d          |   %.3f          |       %.3f     |", qT8,PT8,qT8*PT8);
if(qT9!=0)printf("\n  TACOS      |    XL       |    3-Cheeze       |    %d          |   %.3f          |       %.3f     |", qT9,PT9,qT9*PT9);
if(qT10!=0)printf("\n  TACOS      |    XL       |    Chiken         |    %d          |   %.3f          |       %.3f     |", qT10,PT10,qT10*PT10);
if(qT11!=0)printf("\n  TACOS      |    XL       |    Beef           |    %d          |   %.3f          |       %.3f     |", qT11,PT11,qT11*PT11);
if(qT12!=0)printf("\n  TACOS      |    XL       |    Tuna           |    %d          |   %.3f          |       %.3f     |", qT12,PT12,qT12*PT12);
if(qS1!=0)printf("\n  SALADE     |    M        |    3-Cheeze       |    %d          |   %.3f           |       %.3f     |", qS1,PS1,qS1*PS1);
if(qS2!=0)printf("\n  SALADE     |    M        |    Chiken         |    %d          |   %.3f           |       %.3f     |", qS2,PS2,qS2*PS2);
if(qS3!=0)printf("\n  SALADE     |    M        |    Beef           |    %d          |   %.3f           |       %.3f     |", qS3,PS3,qS3*PS3);
if(qS4!=0)printf("\n  SALADE     |    M        |    Tuna           |    %d          |   %.3f           |       %.3f     |", qS4,PS4,qS4*PS4);
if(qS5!=0)printf("\n  SALADE     |    L        |    3-Cheeze       |    %d          |   %.3f           |       %.3f     |", qS5,PS5,qS5*PS5);
if(qS6!=0)printf("\n  SALADE     |    L        |    Chiken         |    %d          |   %.3f           |       %.3f     |", qS6,PS6,qp6*Pm6);
if(qS7!=0)printf("\n  SALADE     |    L        |    Beef           |    %d          |   %.3f           |       %.3f     |", qS7,PS7,qS7*PS7);
if(qS8!=0)printf("\n   SALADE    |    L        |    Tuna           |    %d          |   %.3f           |       %.3f     |", qS8,PS8,qS8*PS8);
if(qS9!=0)printf("\n   SALADE    |    XL       |    3-Cheeze       |    %d          |   %.3f           |       %.3f     |", qS9,PS9,qp9*Pm9);
if(qS10!=0)printf("\n   SALADE    |    XL       |    Chiken         |    %d          |   %.3f           |       %.3f     |", qS10,PS10,qS10*PS10);
if(qS11!=0)printf("\n   SALADE    |    XL       |    Beef           |    %d          |   %.3f           |       %.3f     |", qS11,PS11,qS11*PS11);
if(qS12!=0)printf("\n   SALADE    |    XL       |    Tuna           |    %d          |   %.3f           |       %.3f     |", qS12,PS12,qS12*PS12);
printf("\n---------------------------------------------------------------------------------------------------------");
PRT=qp1*Pm1+Pm2*qp2+Pm3*qp3+Pm4*qp4+Pm5*qp5+Pm6*qp6+Pm7*qp7+Pm8*qp8+Pm9*qp9+Pm10*qp10+qp11*Pm11+qp12*Pm12+qT1*PT1+PT2*qT2+PT3*qT3+PT4*qT4+PT5*qT5+PT6*qT6+PT7*qT7+PT8*qT8+PT9*qT9+PT10*qT10+qT11*PT11+qT12*PT12+qS1*PS1+PS2*qS2+PS3*qS3+PS4*qS4+PS5*qS5+PS6*qS6+PS7*qS7+PS8*qS8+PS9*qS9+PS10*qS10+qS11*PS11+qS12*PS12;
printf("\n                                                                            Total excluding tax   :  %.3f",PRT);
printf("\n                                                                            Tax                   :  %.3f",(PRT* 0.19));
printf("\n                                                                            Total including tax   :  %.3f",PRT*(1+ 0.19));
printf("\n                                                                            student reduction     :  %.3f",PRT* st* 0.3);
printf("\n                                                                            Seniore reduction     :  %.3f",PRT* w * 0.25);


printf("\n                                                                            Total after reduction :  %.3f",PRT*(1+0.19-w*0.25-st*0.3));
printf("\n\n");

}
}
