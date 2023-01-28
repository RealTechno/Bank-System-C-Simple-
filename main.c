 #include <stdio.h>

 #include <string.h>

 #include <stdlib.h>

 #include <windows.h>

 #include <stdbool.h>

 #include <time.h>

 #define size 50



 void login(void);
 void menui(void);
 void opreation(void);
 void withdrawal(void);
 void check_balance(void);
 void opreation1(void);
 void deposite(void);
 void transfermoney(void);

 char username[size][size] = {
   "conquer504",
   "marym321",
   "mmagde504",
   "mahmoud24",
   "engabanoub504",
   "techno21",
   "mohap502",
   "kareem504",
   "raawdy555",
   "azaa123"
 };
 char password[size][size] = {
   "Htjiukhela1",
   "ma12345678",
   "lxldark1",
   "mh12345678",
   "en12345678",
   "te12345678",
   "ah12345678",
   "es12345678",
   "al12345678",
   "mo12345678"
 };
 float balance[size] = {
   1000,
   2000,
   3000,
   1500,
   2500,
   1500,
   1420,
   2350,
   4500,
   2800
 };
 char name[size][size] = {
   "Mohamed Magdy",
   "Maryam Khalied",
   "Magdy Moharm",
   "Mahmoud Tarek ",
   "Abanoub Shawky",
   "Bassent Elsayd",
   "Mohamed Mohap",
   "Kareem Olim",
   "Mahmoud Elrawdy",
   "Azza Ahmed"
 };
 char phonenumber[size][size] = {
   "+20 101 964 8125",
   "+20 117 3502 859",
   "+20 117 132 6797",
   "+20 121 432 4231",
   "+20 122 098 9668",
   "+20 155 423 1244",
   "+20 1033 323 132",
   "+20 103 431 4331",
   "+20 113 432 4321",
   "+20 106 984 2473"
 };
 char city[size][size] = {
   "Tanta",
   "Cairo",
   "Tanta",
   "Alexandria",
   "Ashmun,Al Minufiyah, Egypt",
   "Fayyum",
   "al-Minya",
   "Tanta",
   "Port Said",
   "Zefta"
 };
 char user[size];
 char pw[size];
 char user[size];
 char pw[size];
 void move(int x, int y) {
   COORD c;
   c.X = x;
   c.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
 }

 char keka;
 int money;
 bool found;
 float pull;

 int main() {
     move(94, 8);
   menui();

   return 0;
 }

 void menui(void) {
   int choice;
   lable:
   system("color b");
   move(44, 0);
   printf("MADE BY:Techno");
   move(0, 1);
   printf("========================================================================================================================");
   move(40, 6);
   printf(" ______________________________________________");
   move(40, 7);
   printf("|           WELCOME TO BANK SYSTEM            |");
   move(40, 8);
   printf("|_____________________________________________|");
   move(40, 9);
   printf("|[1] LOGIN                                    |");
   move(40, 10);
   printf("|_____________________________________________|");
   move(40, 11);
   printf("|[0] EXIT                                     |");
   move(40, 12);
   printf("|_____________________________________________|");
   move(40, 13);
   printf(" PLEASE ENTER YOUR CHOOSE:");
   scanf("%d", & choice);

   switch (choice) {
   case 1:
     system("cls");
     login();

     break;

   case 0:
     system("cls");
     move(40, 12);
     printf("Thanks For using My System");
     exit(1);
     break;

   default:
     system("cls");
     goto lable;
     break;

   }



 }

 void login(void) {
   int i;
   char ch;
   move(40, 4);
   printf("PLEASE ENTER THE USERNAME :");
   scanf("%s", & user);
   move(40, 5);
   printf("PLEASE ENTER THE PASSWORD :");
   for (i = 0; i < 100; i++) {
     ch = getch();
     if (ch == 13)
       break;
     pw[i] = ch;
     ch = '*';

     printf("%c", ch);
   }

   table:
     for (int i = money; i < size; i++)

   {
     if (strcmp(username[i], user) == 0 && strcmp(password[i], pw) == 0) {
       found = true;
       money += i;
       move(40, 6);
       printf("PROCESSING DATA");
       for (int i = 0; i < 50; i++) {
         for (int k = 0; k < 1200000; k++) {
           k++;
           k--;
         }


       }


       printf("\n");
       move(40, 8);
       printf("______________________________________________");
       move(40, 9);
       printf("|            lOGIN SUCCESSFULLY               |");
       move(40, 10);
       printf("|_____________________________________________|");
        move(40, 11);
       printf("PRESS ANY KEY TO CONTUINE");
       getch();
       system("cls");
       opreation();

     }
   }

   if (found == false) {
     system("cls");
     move(40, 2);
     printf("DON`T SHARE YOUR DATA WITH ANYONE");
     move(40, 3);
     printf("WRONG USERNAME OR PASSWORD");
     move(40, 4);
     printf("PLEASE ENTER THE USERNAME :");
     scanf("%s", & user);
     move(40, 5);
     printf("PLEASE ENTER THE PASSWORD :");

     for (i = 0; i < 100; i++) {
     ch = getch();
     if (ch == 13)
       break;
     pw[i] = ch;
     ch = '*';

     printf("%c", ch);
   }

     goto table;

   }
 }

 void opreation(void) {
   int option, i;
    time_t t;
    time(&t);
    move(0, 17);
    printf("%s", ctime(&t));
   lable:
    move(0, 0);
   printf("_______________________________________________________________________________________________________________________");
   move(3, 2);
   printf("Good morning :)!");
   move(3, 4);
   printf(">>>>>Account information<<<<<");
   move(3, 6);
   printf("Name:%s", name[money]);
   move(3, 8);
   printf("Phone:%s", phonenumber[money]);
   move(3, 10);
   printf("City:%s", city[money]);
   move(3, 12);
   printf("Username:%s", username[money]);
   move(3, 14);
   printf("Password:**********", password[money]);
   move(1, 16);
   printf("_______________________________________________________________________________________________________________________");

   move(40, 1);
   printf("|");
   move(40, 2);
   printf("|");
   move(40, 3);
   printf("|");
   move(40, 4);
   printf("|");
   move(40, 5);
   printf("|");
   move(40, 6);
   printf("|");
   move(40, 7);
   printf("|");
   move(40, 8);
   printf("|");
   move(40, 9);
   printf("|");
   move(40, 10);
   printf("|");
   move(40, 11);
   printf("|");
   move(40, 12);
   printf("|");
   move(40, 13);
   printf("|");
   move(40, 14);
   printf("|");
   move(40, 15);
   printf("|");
   move(40, 16);
   printf("|");

   move(55, 3);
   printf(" ______________________________________________");
   move(55, 4);
   printf("|[1] CHECK YOUR BALANCE                       |");
   move(55, 5);
   printf("|_____________________________________________|");
   move(55, 6);
   printf("|[2] WITHDRAWAl                               |");
   move(55, 7);
   printf("|_____________________________________________|");
   move(55, 8);
   printf("|[3] DEPOSITE                                 |");
   move(55, 9);
   printf("|_____________________________________________|");
   move(55, 10);
   printf("|[4] TRANSFER MONEY                           |");
   move(55, 11);
   printf("|_____________________________________________|");
   move(55, 12);
   printf("|[0] EXIT                                     |");
   move(55, 13);
   printf("|_____________________________________________|");
   move(55, 14);
   printf("WHAT DO YOU WANT TO DO:");
   scanf(" %d", & option);


   switch (option) {
   case 1:
     system("cls");
     check_balance();
     break;
   case 2:
     system("cls");
     withdrawal();
     break;
   case 3:
     system("cls");
     deposite();
     break;
   case 4:
    system("cls");
    transfermoney();
    break;
   case 0:
     exit(1);
     break;

   default:
     system("cls");
     goto lable;

   }
 }

 void check_balance(void) {
   move(40, 10);
   printf("YOUR BALANCE IS: %2.f$ ", balance[money]);
   move(40, 12);
   printf("DO YOU WANT TO CONTUINE(Y|N):");
   scanf("%s", & keka);
   if (keka == 'Y' || keka == 'y') {
     move(40, 13);
     printf("PRESS ANY KEY TO CONTUINE");
     getch();
     system("cls");
     opreation();

   } else {
     system("cls");
     move(40, 12);
     printf("Thanks For using My System");
     exit(1);
   }
 }

 void withdrawal(void) {
   pull;
   printf("\nYOUR CURRENT BALANCE IS: %2.f$ ", balance[money]);
   printf("\nHOW MUCH MONEY DO YOU WANT TO WITHDRAWAL:");
   scanf("%f", & pull);
   one:
     if (pull >= 1 && pull <= balance[money]) {

       printf("\nPLEASE WAIT YOUR TRANSACTION IS PROCESSING\n");
       for (int i = 0; i < 100; i++) {
         for (int k = 0; k < 1200000; k++) {
           k++;
           k--;
         }

         printf("*");
       }

       balance[money] = balance[money] - pull;
       printf("\nYOUR CURRENT BALANCE IS:%.2f$", balance[money]);
       printf("\nDo You Want To continue(Y|N):");
       scanf("%s", & keka);
       if (keka == 'Y' || keka == 'y') {
         printf("PRESS ANY KEY TO CONTUINE");
         getch();
         system("cls");
         opreation1();

       }
     }

   else {

     printf("\nSORRY YOU DON`T HAVE THIS AMOUNT");
     printf("\nPLEASE RE ENTER A VALID VALUE:");
     scanf("%f", & pull);
     goto one;

   }
 }

 void opreation1(void) {
   int option, i;
   time_t t;
    time(&t);
    move(0, 19);
    printf("%s", ctime(&t));
   lable:
     move(0, 0);
   printf("_______________________________________________________________________________________________________________________");
   move(3, 2);
   printf("Good morning :)!");
   move(3, 4);
   printf(">>>>>Account information<<<<<");
   move(3, 6);
   printf("Name:%s", name[money]);
   move(3, 8);
   printf("Phone:%s", phonenumber[money]);
   move(3, 10);
   printf("City:%s", city[money]);
   move(3, 12);
   printf("Username:%s", username[money]);
   move(3, 14);
   printf("Password:**********", password[money]);
   move(3, 16);
   printf("YOUR CURRENT BALANCE IS:%.2f$", balance[money]);
   move(1, 18);
   printf("_______________________________________________________________________________________________________________________");

   move(40, 1);
   printf("|");
   move(40, 2);
   printf("|");
   move(40, 3);
   printf("|");
   move(40, 4);
   printf("|");
   move(40, 5);
   printf("|");
   move(40, 6);
   printf("|");
   move(40, 7);
   printf("|");
   move(40, 8);
   printf("|");
   move(40, 9);
   printf("|");
   move(40, 10);
   printf("|");
   move(40, 11);
   printf("|");
   move(40, 12);
   printf("|");
   move(40, 13);
   printf("|");
   move(40, 14);
   printf("|");
   move(40, 15);
   printf("|");
   move(40, 16);
   printf("|");
   move(40, 17);
   printf("|");
   move(40, 18);
   printf("|");

   move(55, 5);
   printf(" ______________________________________________");
   move(55, 6);
   printf("|[1] WITHDRAWAl                               |");
   move(55, 7);
   printf("|_____________________________________________|");
   move(55, 8);
   printf("|[2] DEPOSITE                                 |");
   move(55, 9);
   printf("|_____________________________________________|");
   move(55, 10);
   printf("|[3] TRANSFER MONEY                           |");
   move(55, 11);
   printf("|_____________________________________________|");
   move(55, 12);
   printf("|[0] EXIT                                     |");
   move(55, 13);
   printf("|_____________________________________________|");
   move(55, 14);
   printf("WHAT DO YOU WANT TO DO:");
   scanf(" %d", & option);

   switch (option) {
   case 1:
     system("cls");
     withdrawal();
     break;
   case 2:
     system("cls");
     deposite();
     break;
   case 3:
    system("cls");
    transfermoney();
    break;
   case 0:
     system("cls");
     move(40, 12);
     printf("THANKS FOR USING MY SYSTEM");
     move(40, 13);
     printf("DEVELOPED BY:MOHAMED MAGDY");
     exit(1);
     break;
   default:
     system("cls");
     goto lable;
   }
 }

 void deposite(void) {
   float push;
   move(40, 10);
   printf("HOW MUCH MONEY DO YOU WANT TO DEPOSIT:");
   scanf("%f", & push);
   one:
     if (push > 0) {
       move(40, 11);
       printf("PLEASE WAIT YOUR TRANSACTION IS PROCESSING\n");
       for (int i = 0; i < 100; i++) {
         for (int k = 0; k < 1200000; k++) {
           k++;
           k--;
         }

         printf("*");
       }

       balance[money] += push;
       move(40, 13);
       printf("YOUR TRANSACTION COMPLETED SUCCESSFULLY ");
       move(40, 14);
       printf("YOUR CURRENT BALANCE IS : %2.f$ ", balance[money]);
       move(40, 15);
       printf("Do You Want To continue(Y|N):");
       scanf("%s", & keka);
       if (keka == 'Y' || keka == 'y') {
         move(40, 16);
         printf("PRESS ANY KEY TO CONTUINE");
         getch();
         system("cls");
         opreation1();

       }
     }
   else {
     move(40, 18);
     printf("\nSORRY PlEASE ENTER A POSTIVE NUMBER");
     move(40, 19);
     printf("\nPLEASE RE ENTER A VALID VALUE:");
     scanf("%f", & push);
     goto one;

   }
 }
 void transfermoney(void){
char transferuser[size];
char usertransfer[size];
float transfer;
move(40, 7);
printf("FROM(USERNAME):");
scanf("%s",usertransfer);
move(40, 8);
printf("TO(USERNAME):");
scanf("%s",transferuser);
move(40, 9);
printf("PLEASE ENTER THE AMOUNT:");
scanf("%f",&transfer);
one:
if(transfer>0 && transfer <=balance[money]){
balance[money] -=transfer;
for (int i = 0; i < 100; i++) {
         for (int k = 0; k < 1200000; k++) {
           k++;
           k--;
         }

         printf("*");
       }
printf("\n");
move(40, 11);
printf("AMOUNT SUCCESSFULLY TRANSFERRED");
move(40, 12);
printf("YOUR CURRENT BALANCE IS : %2.f$ ", balance[money]);
 move(40, 13);
       printf("Do You Want To continue(Y|N):");
       scanf("%s", & keka);
       if (keka == 'Y' || keka == 'y') {
         move(40, 14);
         printf("PRESS ANY KEY TO CONTUINE");
         getch();
         system("cls");
         opreation1();

}


}else {
    system("cls");
    move(40, 8);
    printf("SORRY YOU DON`T HAVE THIS AMOUNT !!:");
    move(40, 9);
    printf("PLEASE ENTER THE AMOUNT AGAIN:");
    scanf("%f",&transfer);
    goto one;

}

 }
