#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

int main()
{

int i;
int total = 0;
int point1, point2, point3, point4, point5, point6, point7, point8, point9, point10;
int ans1, ans2, ans3, ans4, ans5, ans6, ans7, ans8, ans9, ans10;

printf("------Welcome to the quiz!------\n");

sleep(1);

printf(">>Press 1 to start the quiz\n");
sleep(1);
printf(">>Press 2 to exit the quiz\n");
scanf("%d", &i);

if(i==1)
{
    printf("The quiz has started!\n\n");

}
else if(i==2)
{
    printf("The quiz has ended!\n\n");
    return 0;
}
else
{
    printf("Invalid input! Please try again.\n\n");
}

sleep(1);

printf("Question 1: What is the Data Type used for an integer?\n\n");
sleep(1);
printf("1) int\n");
sleep(1);
printf("2) float\n");
sleep(1);
printf("3) char\n");
sleep(1);
printf("4) double\n");

scanf("%d", &ans1);

sleep(1);

if(ans1==1)
{
    printf("Points: 1\n\n");
    point1 = 1;
}
else
{
    printf("Points: 0\n\n");
    point1 = 0;
}

sleep(2);

printf("Question 2: What is the Data Type used for a floating point number?\n\n");
sleep(1);
printf("1) int\n");
sleep(1);
printf("2) float\n");
sleep(1);
printf("3) char\n");
sleep(1);
printf("4) double\n");

scanf("%d", &ans2);

sleep(1);

if(ans2==2)
{
    printf("Points: 1\n\n");
    point2 = 1;
}
else
{
    printf("Points: 0\n\n");
    point2 = 0;
}

sleep(2);

printf("Question 3: What flowchart represents a decision?\n\n");
sleep(1);
printf("1) Rectangle\n");
sleep(1);
printf("2) Diamond\n");
sleep(1);
printf("3) Circle\n");
sleep(1);
printf("4) Triangle\n");

scanf("%d", &ans3);

sleep(1);

if(ans3==2)
{
    printf("Points: 1\n\n");
    point3 = 1;
}
else
{
    printf("Points: 0\n\n");
    point3 = 0;
}

sleep(2);

printf("Question 4: What is a valid C Identifier?\n\n");
sleep(1);
printf("1) 123var\n");
sleep(1);
printf("2) var123\n");
sleep(1);
printf("3) var-123\n");
sleep(1);
printf("4) var 123\n");

scanf("%d", &ans4);

sleep(1);

if(ans4==2)
{
    printf("Points: 1\n\n");
    point4 = 1;
}
else
{
    printf("Points: 0\n\n");
    point4 = 0;
}

sleep(2);

printf("Question 5: What is the correct syntax for a for loop in C?\n\n");
sleep(1);
printf("1) for(i=0; i<10; i++)\n");
sleep(1);
printf("2) for(i=0; i<10; i--)\n");
sleep(1);
printf("3) for(i=0; i>10; i++)\n");
sleep(1);
printf("4) for(i=0; i>10; i--)\n");

sleep(1); 

if(ans5==1)
{
    printf("Points: 1\n\n");
    point5 = 1;
}
else
{
    printf("Points: 0\n\n");
    point5 = 0;
}

sleep(2);

printf("Question 6: Which statement skips the iteration loop?\n\n");
sleep(1);
printf("1) break\n");
sleep(1);
printf("2) continue\n");
sleep(1);
printf("3) goto\n");
sleep(1);
printf("4) return\n");
sleep(1);
scanf("%d", &ans6);

sleep(1);

if(ans6==2)
{
    printf("Points: 1\n\n");
    point6 = 1;
}
else
{
    printf("Points: 0\n\n");
    point6 = 0;

}

sleep(2);

printf("Question 7: Which statement exits the loop?\n\n");
sleep(1);
printf("1) break\n");
sleep(1);
printf("2) continue\n");
sleep(1);
printf("3) goto\n");
sleep(1);
printf("4) return\n");
sleep(1);
scanf("%d", &ans7);

sleep(1);

if(ans7==1)
{
    printf("Points: 1\n\n");
    point7 = 1;
}
else
{
    printf("Points: 0\n\n");
    point7 = 0;
}

sleep(2);

printf("Question 8: Which storage class retains a variable's value between function calls?\n\n");
sleep(1);
printf("1) auto\n");
sleep(1);
printf("2) static\n");
sleep(1);
printf("3) extern\n");
sleep(1);
printf("4) register\n");
sleep(1);
scanf("%d", &ans8);

sleep(1);

if(ans8==2)
{
    printf("Points: 1\n\n");
    point8 = 1;
}
else
{
    printf("Points: 0\n\n");
    point8 = 0;
}   

sleep(2);

printf("Question 9: What does printf(\"%%d\",10>5&&3<1); print?\n\n");
sleep(1);
printf("1) 0\n");
sleep(1);
printf("2) 1\n");
sleep(1);
printf("3) 2\n");
sleep(1);
printf("4) 3\n");
sleep(1);
scanf("%d", &ans9);

sleep(1);

if(ans9==1)
{
    printf("Points: 1\n\n");
    point9 = 1;
}
else
{
    printf("Points: 0\n\n");
    point9 = 0;
}

sleep(2);

printf("Question 10: What is the output of the following code?\n\n");
printf("int a = 5;\n");
printf("int b = 10;\n");
printf("printf(\"%%d\", a + b);\n\n");
sleep(1);
printf("1) 5\n");
sleep(1);
printf("2) 10\n");  
sleep(1);
printf("3) 15\n");
sleep(1);
printf("4) 20\n");
sleep(1);
scanf("%d", &ans10);
if(ans10==3)
{
    printf("Points: 1\n\n");
    point10 = 1;
}
else
{
    printf("Points: 0\n\n");
    point10 = 0;
}

sleep(2);

total = point1 + point2 + point3 + point4 + point5 + point6 + point7 + point8 + point9 + point10;

printf("Total Points: %d\n", total);

sleep(2);

printf("Thank you for taking the quiz!\n");

sleep(2);

}

