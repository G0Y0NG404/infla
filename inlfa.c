//specially credited to bemolove < <3
#include <stdio.h>
#include <windows.h>
#include <conio.h>

void gotoxy(int x, int y) {
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
    
}
char item[10];
int x,y;
 float price, cost, lastyr, current, percentage;
 float inflation, one, two; 
int main ()

{  
   {
		for (x =28; x <= 90 ;x++)
		{
			gotoxy(x, 6);
			
			printf("=");
		}
		for (y = 7; y <= 19; y++)
		{
			gotoxy(28, y);
			printf("=");
		}
		for (y = 7; y <= 19; y++)
		{
			gotoxy(90, y);
			printf("=");
		}
		for (x = 28; x <= 90; x++)
		{
			gotoxy(x, 20);
			printf("=");
		}
		}

     gotoxy(45,7);

    printf("Item: ");
    scanf("%s", &item);
    gotoxy(45,8);
    printf("Last year's price: ");
    scanf("%f", &lastyr);
    gotoxy(45,9);
    printf("Current's price: ");
    scanf("%f", &current);
    
        
    	inflation = (current-lastyr)/lastyr;
 	    cost = lastyr*inflation;
 	    percentage= inflation*100;
		one = (current*inflation)+current;
 		two = (one*inflation)+one;
        
        gotoxy(30,13);
 		printf("In Year 2022 the %s you can buy for P%.2f. Today, ",item,lastyr);
        gotoxy(30,14);
        printf("Year 2023 would roughly cost you  ");
        gotoxy(30,15);
        printf("P%.2f (P%.2f = %.2f%% (%f) increase)",  current, cost, percentage, inflation); 

 
 gotoxy(30,16);
 printf("Estimated Price in next  Year: P%.2f\n", one);
 gotoxy(30,17);
 printf("Estimated Price in next two Years: P%.2f%\n ", two);

 printf("\n\n");
 


    
return 0;    

}
