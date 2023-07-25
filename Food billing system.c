//HEADER FILES
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

// PROTOTYPES OF THE FUNCTIONS USED
void name_returant();
void menu();
int customize(int);
int bill(int bill[][4], int m);
void contacts();
float delivery();
int discount();
void rate();
void donation();

// GLOBAL VARIABLES 
int pos[5] = {40, 40, 60, 70, 60};
char sand[5][30] = {"Veg Sandwich         ", "Cheese Sandwich      ",
                    "Paneer Sandwich      ", "Chicken Sandwich     ",
                    "Chocolate Sandwich   "};

int pob[5] = {60, 70, 60, 90, 80};
char brg[5][30] = {"Aloo Tikka           ", "Egg Burger           ",
                   "Veg Burger           ", "Chicken Burger       ",
                   "Paneer Burger        "};

int pop[5] = {80, 110, 130, 130, 120};
char piz[5][30] = {"Veg pizza            ", "Paneer pizza         ",
                   "Baby corn pizza      ", "Chicken pizza        ",
                   "Mushroom pizza       "};

int pon[5] = {50, 70, 60, 80, 80};
char nod[5][30] = {"Veg noodles          ", "Paneer noodles       ",
                   "Egg noodles          ", "Chicken egg noodles  ",
                   "Paneer egg noodles   "};

int poc[5] = {70, 60, 60, 70, 50};
char cr[5][30] = {"Chicken chilli       ", "Mushroom chilli      ",
                  "Paneer roll          ", "Chicken roll         ",
                  "Egg roll             "};

int por[5] = {70, 180, 110, 90, 80};
char ri[5][30] = {"Veg fried rice       ", "Chicken dum biriyani ",
                  "Paneer fried rice    ", "shezwaan rice        ",
                  "Paneer rice          "};

int por2[5] = {05, 10, 05, 15, 20};
char roti[5][30] = {"Tandoori Roti          ", "Paratha               ",  
                    "Puri                   ","Naan                  ",
                    "Masala Kulcha         "};

int pov[5]={60,80,85,45,45};
char veg[5][30]={"Mix veg               ","Paneer butter masala  ",
                 "Paneer kadhai         ","Chana masala          ",
                 "Tadka                 "};

int ponv[5]={45,100,85,75,125};
char noveg[5][30]={"Egg keema             ","Chicken Kadhai        ",
                   "Chicken 65            ","Fish curry            ",
                   "Mutton Curry          "};

int pod[5]={30,50,30,20,50};
char dessert[5][30]={"Ice Cream             ","Cup Cake              ",
                     "Fruit Salad           ","Milk Cake             ",
                     "Custard               "};

char coup[2][15]={"FRNDZ_2310","FRNDZ_2315"};

//FUNCTION DEFINATIONS
void name_returant() // Printing only the name of the resturant.
{
  printf("\t\t  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("(👉ﾟヮﾟ)👉|WELCOME TO FRENDZ RESTAURANT|👈(ﾟヮﾟ👈)\n");
  printf("\t\t  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
}

void menu() // Presents the menu to the user.
{
  int code, quantity;
  printf("MENU :👇👇\n"); // SHOWING MENU CARD.
  printf("-----\n\n");
 
  printf("1. 🥪SANDWICHES :\n");
  for (int i = 0; i < 5; i++) // Printing the diff. sandwiches
    printf("     * %s       %d|(CODE:%d)\n", sand[i], pos[i], i+1);

  printf("2. 🍔BURGERS :\n");
  for (int i = 0; i < 5; i++) 
    printf("     * %s       %d|(CODE:%d)\n", brg[i], pob[i], i+1);

  printf("3. 🍕PIZZAS :\n");
  for (int i = 0; i < 5; i++) 
    printf("     * %s       %d|(CODE:%d)\n", piz[i], pop[i], i+1);

  printf("4. 🍜NOODLES :\n");
  for (int i = 0; i < 5; i++) 
    printf("     * %s       %d|(CODE:%d)\n", nod[i], pon[i], i+1);

  printf("5. 🍥CHILLI & ROLLS :\n");
  for (int i = 0; i < 5; i++) 
    printf("     * %s       %d|(CODE:%d)\n", cr[i], poc[i], i+1);
  
  printf("6. 🍚RICE :\n");
  for (int i = 0; i < 5; i++) 
    printf("     * %s       %d|(CODE:%d)\n", ri[i], por[i], i+1);
  
  printf("7. 🟡ROTI :\n");
  for (int i = 0; i < 5; i++) 
    printf("     * %s       %d|(CODE:%d)\n", roti[i], por2[i], i+1);
  
  printf("8. 🍅VEG ITEMS :\n");
  for (int i = 0; i < 5; i++) 
    printf("     * %s       %d|(CODE:%d)\n", veg[i], pov[i], i+1);

  printf("9. 🍗NON-VEG ITEMS :\n");
  for (int i = 0; i < 5; i++) 
    printf("     * %s       %d|(CODE:%d)\n", noveg[i], ponv[i], i+1);

  printf("10. 🍨DESSERTS :\n");
  for (int i = 0; i < 5; i++) 
    printf("     * %s       %d|(CODE:%d)\n", dessert[i], pod[i], i+1);
}

int customize(int arr) // Helps to customise or add on to dishes.
{
  printf("\n\n");
  int t = 0, order = 0;
  int dish = arr;
  char sandwich[][20] = {"Cheese slices", "Mushrooms", "Chocolate sauce",
                         "Mayonnaise"};
  char burger[][20] = {"Onions", "Mayonnaise", "Cheese slices","Tomato slices"};
  char pizza[][20] = {"Mushrooms", "Oregano", "Cheese slices", "Chilli flakes"};
  char Noodles[][20] = {"Oregano", "Onions", "Cheese", "Mushrooms"};
  char Chilli_Rolls[][20] = {"Paneer", "Cheese slics"};
  char Rice[][20] = {"Curd", "Pickle","Ghee"};
  char Roti[][20]={"Green chutney","Butter","Ghee"};
  char Dess[][20]={"Sugar pearls","Choco chips","Jimies"};
  char vegnon[][20]={"Fresh onions","Fried onions","Chillies"}; 

  switch (dish) {
  case 1: {
    printf("........................................\n");
    printf("|Toppings for your sandwich(Each=20/-) :\n");
    printf("|______________________________________|\n");
    for (int i = 0; i < 4; i++) // Printing the toppings
      printf("|%d.%s  \n", i+1, sandwich[i]);
    printf("|\n");
    printf("|Press 0 if you don't want any toppings:\n");
    printf("|.......................................\n\n");
    printf("How many toppings you want :");
    scanf("%d", &t);
    while (t > 4 || t < 0) {
      printf("Invalid entry enter again:");
      scanf("%d", &t);
    }
    if (t != 0) {
      printf("\nPress topping's serial:\n");
      for (int i = 0; i < t; i++) {
        int choice = 0;
        scanf("%d", &choice);
        while (choice > 4 || choice < 0) {
          printf("Invalid entry enter again:");
          scanf("%d", &choice);
        }
      }
    }
    break;
  }
  case 2: {
    printf("........................................\n");
    printf("|Toppings for your burger(Each=20/-)   :\n");
    printf("_______________________________________|\n");
    for (int i = 0; i < 4; i++) // Printing the toppings
      printf("|%d.%s \n", i+1, burger[i]);
    printf("|\n");
    printf("|Press 0 if you don't want any toppings:\n");
    printf("........................................\n\n");
    printf("How many toppings you want :");
    scanf("%d", &t);
    while (t > 4 || t < 0) {
      printf("Invalid entry enter again:");
      scanf("%d", &t);
    }
    if (t != 0) {
      printf("Press topping's serial:\n");
      for (int i = 0; i < t; i++) {
        int choice = 0;
        scanf("%d", &choice);
        while (choice > 4 || choice < 0) {
          printf("Invalid entry enter again:");
          scanf("%d", &choice);
        }
      }
    }

    break;
  }
  case 3: {
    printf("........................................\n");
    printf("|Toppings for your pizza(Each=20/-)    :\n");
    printf("|______________________________________|\n");
    for (int i = 0; i < 4; i++) 
      printf("|%d.%s \n", i+1, pizza[i]);
    printf("|\n");
    printf("|Press 0 if you don't want any toppings:\n");
    printf("|......................................\n\n");
    printf("How many toppings you want :");
    scanf("%d", &t);
    while (t > 4 || t < 0) {
      printf("Invalid entry enter again:");
      scanf("%d", &t);
    }
    if (t != 0) {
      printf("Press topping's serial:\n");
      for (int i = 0; i < t; i++) {
        int choice = 0;
        scanf("%d", &choice);
        while (choice > 4 || choice < 0) {
          printf("Invalid entry enter again:");
          scanf("%d", &choice);
        }
      }
    }
    break;
  }
  case 4: {
    printf("........................................\n");
    printf("|Toppings for your Noodles(Each=20/-)  :\n");
    printf("|______________________________________|\n");
    for (int i = 0; i < 4; i++) 
      printf("|%d.%s \n", i+1, Noodles[i]);
    printf("|\n");
    printf("|Press 0 if you don't want any toppings:\n");
    printf("|.......................................\n\n");
    printf("How many toppings you want :");
    scanf("%d", &t);
    while (t > 4 || t < 0) {
      printf("Invalid entry enter again:");
      scanf("%d", &t);
    }
    if (t != 0) {
      printf("Press topping's serial:\n");
      for (int i = 0; i < t; i++) {
        int choice = 0;
        scanf("%d", &choice);
        while (choice > 4 || choice < 0) {
          printf("Invalid entry enter again:");
          scanf("%d", &choice);
        }
      }
    }

    break;
  }
  case 5: {
    printf("..............................................\n");
    printf("|Toppings for your Chilli & Rolls(Each=20/-) :\n");
    printf("|____________________________________________|\n");
    for (int i = 0; i < 2; i++) 
      printf("|%d.%s \n", i+1, Chilli_Rolls[i]);
    printf("|\n");
    printf("|Press 0 if you don't want any toppings    :\n");
    printf("|...........................................\n\n");
    printf("How many toppings you want :");
    scanf("%d", &t);
    while (t > 2 || t < 0) {
      printf("Invalid entry enter again:");
      scanf("%d", &t);
    }
    if (t != 0) {
      printf("Press topping's serial:\n");
      for (int i = 0; i < t; i++) {
        int choice = 0;
        scanf("%d", &choice);
        while (choice > 2 || choice < 0) {
          printf("Invalid entry enter again:");
          scanf("%d", &choice);
        }
      }
    }

    break;
  }
  case 6: {
    printf("....................................\n");
    printf("|Toppings for your Rice(Each=10/-) :\n");
    printf("|__________________________________|\n");
    for (int i = 0; i < 3; i++) 
      printf("|%d.%s \n", i+1, Rice[i]);
    printf("|\n");
    printf("|Press 0 if you don't want any toppings:\n");
    printf("|.......................................\n\n");
    printf("How many toppings you want :");
    scanf("%d", &t);
    while (t > 3 || t < 0) {
      printf("Invalid entry enter again:");
      scanf("%d", &t);
    }
    if (t != 0) {
      printf("Press topping's serial:\n");
      for (int i = 0; i < t; i++) {
        int choice = 0;
        scanf("%d", &choice);
        while (choice > 3 || choice < 0) {
          printf("Invalid entry enter again:");
          scanf("%d", &choice);
        }
      }
    }
    break;
  }
  case 7: {
    printf("....................................\n");
    printf("|Toppings for your Roti(Each=10/-) :\n");
    printf("|__________________________________|\n");
    for (int i = 0; i < 3; i++) 
      printf("|%d.%s \n", i+1, Roti[i]);
    printf("|\n");
    printf("|Press 0 if you don't want any toppings:\n");
    printf("|.......................................\n\n");
    printf("How many toppings you want :");
    scanf("%d", &t);
    while (t > 3 || t < 0) {
      printf("Invalid entry enter again:");
      scanf("%d", &t);
    }
    if (t != 0) {
      printf("Press topping's serial:\n");
      for (int i = 0; i < t; i++) {
        int choice = 0;
        scanf("%d", &choice);
        while (choice > 3 || choice < 0) {
          printf("Invalid entry enter again:");
          scanf("%d", &choice);
        }
      }
    }
    break;
  }  
  case 8: {
    printf("........................................\n");
    printf("|Toppings for your VegItems(Each=10/-) :\n");
    printf("|______________________________________|\n");
    for (int i = 0; i < 3; i++) 
      printf("|%d.%s \n", i+1, vegnon[i]);
    printf("|\n");
    printf("|Press 0 if you don't want any toppings:\n");
    printf("|.......................................\n\n");
    printf("How many toppings you want :");
    scanf("%d", &t);
    while (t > 3 || t < 0) {
      printf("Invalid entry enter again:");
      scanf("%d", &t);
    }
    if (t != 0) {
      printf("Press topping's serial:\n");
      for (int i = 0; i < t; i++) {
        int choice = 0;
        scanf("%d", &choice);
        while (choice > 3 || choice < 0) {
          printf("Invalid entry enter again:");
          scanf("%d", &choice);
        }
      }
    }
    break;
  }  
  case 9: {
    printf("............................................\n");
    printf("|Toppings for your NonVeg Items(Each=10/-) :\n");
    printf("|__________________________________________|\n");
    for (int i = 0; i < 3; i++) 
      printf("|%d.%s \n", i+1, vegnon[i]);
    printf("|\n");
    printf("|Press 0 if you don't want any toppings:\n");
    printf("|...........................................\n\n");
    printf("How many toppings you want :");
    scanf("%d", &t);
    while (t > 3 || t < 0) {
      printf("Invalid entry enter again:");
      scanf("%d", &t);
    }
    if (t != 0) {
      printf("Press topping's serial:\n");
      for (int i = 0; i < t; i++) {
        int choice = 0;
        scanf("%d", &choice);
        while (choice > 3 || choice < 0) {
          printf("Invalid entry enter again:");
          scanf("%d", &choice);
        }
      }
    }
    break;
  }
  case 10: {
    printf(".......................................\n");
    printf("|Toppings for your Dessert(Each=20/-) :\n");
    printf("|_____________________________________|\n");
    for (int i = 0; i < 3; i++) 
      printf("|%d.%s \n", i+1, Dess[i]);
    printf("|\n");
    printf("|Press 0 if you don't want any toppings:\n");
    printf("|........................................\n\n");
    printf("How many toppings you want :");
    scanf("%d", &t);
    while (t > 3 || t < 0) {
      printf("Invalid entry enter again:");
      scanf("%d", &t);
    }
    if (t != 0) {
      printf("Press topping's serial:\n");
      for (int i = 0; i < t; i++) {
        int choice = 0;
        scanf("%d", &choice);
        while (choice > 3 || choice < 0) {
          printf("Invalid entry enter again:");
          scanf("%d", &choice);
        }
      }
    }
    break;
  }

  default: {
    printf("Invalid");
  }
  }
  return t;
}

int bill(int bill[][4], int m)//Calculates bill of the customers excluding GST.
{
  int n = bill[m][0];
  switch (n) {
  case 1: {
    int cprice = 0;
    int custom = bill[m][3];
    cprice = custom * 20;
    int item = bill[m][1];
    int quantity = bill[m][2];
    int price = pos[item] + cprice;
    int net = price * quantity;
    printf("%s \t\t     %d \t  %d \t\t%d \t\t        \t%d\n", sand[item],
           pos[item], quantity, custom, net);
    return (net);
    break;
  }
  case 2: {
    int cprice = 0;
    int custom = bill[m][3];
    cprice = custom * 20;
    int item = bill[m][1];
    int quantity = bill[m][2];
    int price = pob[item] + cprice;
    int net = price * quantity;
    printf("%s \t\t     %d \t  %d \t\t%d \t\t        \t%d\n", brg[item],
           pob[item], quantity, custom, net);
    return (net);
    break;
  }
  case 3: {
    int cprice = 0;
    int custom = bill[m][3];
    cprice = custom * 20;
    int item = bill[m][1];
    int quantity = bill[m][2];
    int price = pop[item] + cprice;
    int net = price * quantity;
    printf("%s \t\t     %d \t  %d \t\t%d \t\t        \t%d\n", piz[item],
           pop[item], quantity, custom, net);
    return (net);
    break;
  }
  case 4: {
    int cprice = 0;
    int custom = bill[m][3];
    cprice = custom * 20;
    int item = bill[m][1];
    int quantity = bill[m][2];
    int price = pon[item] + cprice;
    int net = price * quantity;
    printf("%s \t\t     %d \t  %d \t\t%d \t\t        \t%d\n", nod[item],
           pon[item], quantity, custom, net);
    return (net);
    break;
  }
  case 5: {
    int cprice = 0;
    int custom = bill[m][3];
    cprice = custom * 20;
    int item = bill[m][1];
    int quantity = bill[m][2];
    int price = poc[item] + cprice;
    int net = price * quantity;
    printf("%s \t\t     %d \t  %d \t\t%d \t\t        \t%d\n", cr[item],
           poc[item], quantity, custom, net);
    return (net);
    break;
  }
  case 6: {
    int cprice = 0;
    int custom = bill[m][3];
    cprice = custom * 10;
    int item = bill[m][1];
    int quantity = bill[m][2];
    int price = por[item] + cprice;
    int net = price * quantity;
    printf("%s \t\t     %d \t  %d \t\t%d \t\t        \t%d\n", ri[item],
           por[item], quantity, custom, net);
    return (net);
    break;
  }
  case 7: {
    int cprice = 0;
    int custom = bill[m][3];
    cprice = custom * 10;
    int item = bill[m][1];
    int quantity = bill[m][2];
    int price = por2[item] + cprice;
    int net = price * quantity;
    printf("%s \t\t     %d \t  %d \t\t%d \t\t        \t%d\n", roti[item],
           por2[item], quantity, custom, net);
    return (net);
    break;
  }
  case 8: {
    int cprice = 0;
    int custom = bill[m][3];
    cprice = custom * 20;
    int item = bill[m][1];
    int quantity = bill[m][2];
    int price = pov[item] + cprice;
    int net = price * quantity;
    printf("%s \t\t     %d \t  %d \t\t%d \t\t        \t%d\n", veg[item],
           pov[item], quantity, custom, net);
    return (net);
    break;
  }
  case 9: {
    int cprice = 0;
    int custom = bill[m][3];
    cprice = custom * 10;
    int item = bill[m][1];
    int quantity = bill[m][2];
    int price = ponv[item] + cprice;
    int net = price * quantity;
    printf("%s \t\t     %d \t  %d \t\t%d \t\t        \t%d\n", noveg[item],
           ponv[item], quantity, custom, net);
    return (net);
    break;
  }
  case 10: {
    int cprice = 0;
    int custom = bill[m][3];
    cprice = custom * 20;
    int item = bill[m][1];
    int quantity = bill[m][2];
    int price = pod[item] + cprice;
    int net = price * quantity;
    printf("%s \t\t     %d \t  %d \t\t%d \t\t        \t%d\n", dessert[item],
           pod[item], quantity, custom, net);
    return (net);
    break;
  }
  
  }
}

float delivery()//For delivery of the food.
{
   char ans;int cut=0;
   printf("Do you want your order delivered(Y/N) : ");
   scanf("%s",&ans);
   if(ans == 'Y'||ans == 'y')
   {
    char address[80];float dis; 
    printf("Enter your address : ");
    scanf("\n");
    scanf("%[^\n]s",address);
    printf("Enter distance from the resturant : ");
    scanf("%f",&dis);
    printf("Do you want cutlery in your order (Y/N) : ");
    scanf("%s",&ans);
    if(ans == 'Y'||ans == 'y')cut =5;
    else cut=0;
    return (dis*0.75)+cut;
   }
  else{
    int choose;
    printf("Do you want to  1) Dine in\n\t\t\t\t2)Takeaway \nEnter choice: ");
    scanf("%d",&choose);
    while(choose>2 || choose <=0){
       printf("                Invalid entry.Enter again: ");
      scanf("%d", &choose);
    }
    if(choose==1 ){
      printf("Please be seated and wait for 20 minutes.\n");
      return 0;
    }
   else{
     printf("Please wait for 20 minutes or come back within 20 minutes\n");
     printf("Do you want cutlery in your order (Y/N) : ");
     scanf("%s",&ans);
     if(ans == 'Y'||ans == 'y')cut =5;
     else cut=0;
     return cut;
   }
  }
}

int discount()//Avails discount if the coupoun is valid.
{
  printf("Enter the coupon code: ");
  char ip[15];int comp,result=0;
  scanf("%s",ip);
  for(int i=0;i<2;i++){
      comp=strcmp(ip,coup[i]);
      if(comp==0) result=1;
    }
  if(result==1){
    int l=strlen(ip);
     char pick[3];
     pick[0]=ip[l-2];
     pick[1]=ip[l-1];
     int dis=0;
     for(int i=0;i<2;i++){
         int num;
         switch(pick[i]){
             case '0':num=0;break;
             case '1':num=1;break;
             case '2':num=2;break;
             case '3':num=3;break;
             case '4':num=4;break;
             case '5':num=5;break;
             case '6':num=6;break;
             case '7':num=7;break;
             case '8':num=8;break;
             case '9':num=9;break;}
         dis=dis*10+num;
     }
    return dis;
  }
  else{
    printf("Entered coupon code is not valid.");
    return 0;
  }
}

void contacts() // Prints the contact info of the resturant.
{
  printf("\n\n\n\t\t\t\t-->Thank You for visiting us,\n\t\t\t\t\t\t\tWe hope "
         "you have a great day ahead<--");
  printf("\n☎ TO CONTACT US :");
  printf("\nPh--6****25856");
  printf("\n    63724****6");
  printf("\nemail-friendz1@iiit-bh.ac.in");
  printf("\n      friendz2@iiit-bh.ac.in\n");
}

void rate()//Asks for rating out of 10 to user.
{
  float r;
  printf("\n\nPlease rate our service out of 10 : ");
  scanf("%f",&r);
  if(r<=7)
    printf("We will try to improve.\n");
  printf("\t\t<--Thank you for your rating---> ");
  return;
}

void donate()
{
  char ans;float mon;
  printf("\n\nWe in collaboration with a ngo called SMILE foundation are trying to help the helpless.\n");
  printf("Do you want to donate(y/n) : ");
  scanf("%s",&ans);
  if(ans=='y'||ans=='Y'){
     printf("Enter your donation amount: ");
     scanf("%f",&mon);
     printf("\nThank you for your support and for your belief in doing good. We simply couldn’t do what we do without amazing people like you.");
     return;
  }
  else
    return;
  }

void main()//THE 'main' FUNCTION
{
  float sum = 0.0;
  int a[20][4], items = 0;
  int choice = 0, code = 0, quantity = 0;
  int check = 1;
  float off=0,del;
  name_returant();
  while (check) {
    menu();
    items++;
    printf("\n\n                Your category no. : ");
    scanf("%d", &choice);
    while(choice>10 || choice <=0){
       printf("                Invalid entry.Enter again: ");
      scanf("%d", &choice);
    }
    printf("                Food code :");
    scanf("%d", &code);
    while (code > 5 || code <= 0) {
      printf("                Invalid entry.Enter again: ");
      scanf("%d", &code);
    }
    printf("                Quantity : ");
    scanf("%d", &quantity);
    while(quantity<=0){
      printf("                Invalid entry.Enter again: ");
      scanf("%d", &quantity);
    }

    int ai = items - 1;  // Array index
    a[ai][0] = choice;   // Category like burger,pizza
    a[ai][1] = code - 1; // food code
    a[ai][2] = quantity;
    a[ai][3] = customize(choice);
    printf("\nPress 1 to add more items or press 0 to get bill\n");
    scanf("%d", &check);
  }
  del=delivery();
  char yn;
  printf("Do you have any discount coupoun?(Y/N): ");
  scanf("%s",&yn);
  if (yn=='Y' || yn=='y'){
  off=discount();}
  printf("\n\n                                             BILL\n");
  printf("                                             ~~~~\n\n\n");
  printf("---------------------------------------------------------------------"
         "----------------------\n");
  printf("Item Description \t\t Base Price \t Qty \t Customizations \t Net "
         "Price\n");
  printf("---------------------------------------------------------------------"
         "----------------------\n");
  for (int m = 0; m < items; m++) {
    int out = bill(a, m);
    sum = sum + out;
  }
  sum-=off;
  float gst = 0.05 * sum;
  float total = sum + gst;
  printf("\nGST:5(percent)   \t\t\t\t\t\t\t\t\t\t\t\t\t\t%.2f\n", gst);
  printf("---------------------------------------------------------------------"
         "----------------------\n");
  printf("Total Amount  \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%.2f\n", total);
  total+=del;
  printf("\nTotal Amount with delivery charges\t\t\t\t\t\t\t\t\t\t%.2f\n", total);
   printf("---------------------------------------------------------------------"
         "----------------------\n");
  rate();
  donate();
  contacts();
}
