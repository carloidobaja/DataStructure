//SYSYEM 1
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10


struct stack /* Structure definition for stack */
{
int stk[MAXSIZE];
int top;
};

typedef struct stack STACK;
STACK s;

/* Function declaration*/
void push (void);
void pop(void);
void stack(void);
void displaystack (void);
void queue(void);
void displayqueue (void);
void enqueue (void);
void dequeue(void);
void binarytree(void);
void Level1();
void Level2();
void Level3();
void Level4();
void Level5();
int boatman (void);
int tower (void);
void towers(int, char, char, char);
int fibonacci(void);
int factorial (void);
int tops=0;
int bool=0;
int depart1=0;
int depart=0;
int tops1=0;
void main ()
{
int choice;
int option = 1;
printf ("                             SYSTEM1\n");
while (option)
{
printf ("		 |**************************************|\n");
printf ("		 |1. STACK                              |\n");
printf ("		 |2. QUEUE                              |\n");
printf ("		 |3. BINARY TREE                        |\n");
printf ("		 |4. Fibonacci                          |\n");
printf ("		 |5. Factorial                          |\n");
printf ("		 |6. Tower of Hanoi                     |\n");
printf ("		 |7. Boatman, Fox, Chicken, Sack of Rice|\n");
printf ("		 |8. EXIT                               |\n");
printf ("		 |**************************************|\n");

printf ("Enter your choice\n");
scanf ("%d", &choice);
system ("CLS");

switch (choice)
{
case 1: stack();
	
break;
case 2: queue();
break;
case 3: binarytree();
break;
case 4: fibonacci();
break;
case 5: factorial();
break;
case 6: tower();
break;
case 7: boatman();
break;
case 8: return;
default:
	printf("Invalid Input");
}
printf ("\n Do you want to continue (Type 0 to exit or 1 to continue )?\n");
scanf ("%d", &option);
}
}

void stack ()// MAIN CODE FOR STACK
{
int choice;
int option = 1;


s.top = -1;

printf ("                     Parking  Garage\n");
while (option)
{
printf ("		 |---------------------------------------|\n");
printf ("		 |1. Arrive------------------------------|\n");
printf ("		 |2. Depart------------------------------|\n");
printf ("		 |3. DISPLAY The Cars in The Garage------|\n");
printf ("		 |4. EXIT--------------------------------|\n");
printf ("		 |---------------------------------------|\n");
printf ("Total Numbers of Arrivals is: %d \n", tops);
printf ("Total Numbers of Departure is: %d \n", depart);
printf ("Enter your choice\n");
scanf ("%d", &choice);
system ("CLS");

switch (choice)
{
case 1: push();
break;
case 2: pop();
break;
case 3: displaystack();
break;
case 4: return;
default:
	printf("Invalid Input");
}
printf ("\n Do you want to continue (Type  1 to continue )?\n");
scanf ("%d", &option);

}
}

/*Function to add an element to the stack*/
void push ()
{
	int ctr;
	int val;
	int num;
	int i;
	
if (s.top == (MAXSIZE - 1))
{
printf ("| Garage is Full |\n");
return;
}
else
{
printf ("There are %d available slots in the garage. \n", 10-tops);

for (i = s.top; i >= 0; i--)
{
printf ("\n-------------|  %d  |-----------------\n", s.stk[i]);
}
printf ("Enter the car Plate No. \n");
scanf ("%d", &num);
system ("CLS");
//test each value
if(s.top == -1)
{
		s.top = s.top + 1; //add an element to the estack
		tops=tops+1; // count the number of arrivals
		s.stk[s.top] = num; //create the scan variable that is being input in the stack

}
else{

//ctr is yung nagbibilang ng variable sa stack
for(ctr = 0; ctr <= s.top; ctr++) //if may laman ang stack check the number para d mag-ulet
{
	val = s.stk[ctr]; // declare mo yung mga sscan or yung mga element na nasa stack

	if (val==num)
	{
		printf("\n The number already exists! \n");
		bool = 1;
		break;
	}
	else
	{
		bool = 0;

		}

	} //end of loop


	if(bool == 1)
	{

	}
	
	else
	{
			s.top = s.top + 1;
			tops=tops+1;
			s.stk[s.top] = num;//if hindi umulet ilalagay na sa stack

	}

}

}
return;
}

/*Function to delete an element from the stack*/
void pop ()
{
int num;
int ctr;
int val;
int i;

for (i = s.top; i >= 0; i--) 

{
printf ("\n-------------|  %d  |-----------------\n", s.stk[i]);
}
printf("Please enter plate number to depart: \n");
scanf("%d",&num);

if (s.top == - 1)
{
printf ("| Garage is Empty | \n");

}
else
{
	for(ctr=0;ctr<=s.top;ctr++)
	{
		val = s.stk[ctr];//check if yung number ay nasa element ba
		if(num==val)
		{
			bool=1;
			break;
		}
		else
		{
			bool = 0;
		}

	}

	if(bool == 1)
	{
		//a matching number has been found
		printf("\n Found and Removing \n");
		depart=depart+1; //count the number of departure
		depart_process1(num,ctr) ;//call for the fucntion new output array
	}
	else
	{
		printf("\n The plate number you entered does not exist! \n");
	}
	
//num = s.stk[s.top];
//printf ("The Car Plate No. that departed was: \n------\n| %d |\n------\n", s.stk[s.top]);
//s.top = s.top - 1;
}
for (i = s.top; i >= 0; i--)
{
printf ("\n-------------|  %d  |-----------------\n", s.stk[i]);//display the stack
}
}

depart_process1(int user_input, int index)
{

 int ctr;

	for(ctr = index - 0;ctr <= s.top;ctr++)//buburahin yung laman ng index na pinili tapos mag iincrement
	{
		s.stk[ctr]=s.stk[ctr+1];//magbabago na yung mga index ng element kase bumaba sila
	}	
	s.top=s.top-1;//delete the top element of the stack
 return 0;
}


/*Function to display the status of the stack*/
void displaystack ()
{
	int i;

if (s.top == -1)
{
printf ("| Garage is empty |\n");
return;
}
else
{
printf ("\n | The status of the Garage is | \n");
for (i = s.top; i >= 0; i--)
{
printf ("\n-------------|  %d  |-----------------\n", s.stk[i]);
}
}
printf ("\n");

}



void queue ()
{
int choice1;
int option1 = 1;

s.top = -1;
printf ("                     Parking  Garage\n");
while (option1)
{
printf ("		 |**************************************|\n");
printf ("		 |1. Arrive                             |\n");
printf ("		 |2. Depart                             |\n");
printf ("		 |3. DISPLAY The Cars in The Garage     |\n");
printf ("		 |4. EXIT                               |\n");
printf ("		 |**************************************|\n");
printf ("Total Numbers of Arrivals is: %d \n", tops1);
printf ("Total Numbers of Departure is %d \n", depart1);
printf ("Enter your choice\n");
scanf ("%d", &choice1);
system ("CLS");
switch (choice1)
{
case 1: enqueue();
break;
case 2: dequeue();
break;
case 3: displayqueue();
break;
case 4: return;
}


printf ("Do you want to continue (Type 0 to exit or 1 to continue )?\n");
scanf ("%d", &option1);
}
}

void enqueue ()
{
int ctr;
	int val;
	int num;
	int i;
	
if (s.top == (MAXSIZE - 1))
{
printf ("| Garage is Full |\n");
return;
}
else
{
printf ("There are %d available slots in the garage. \n", 10-tops1);

for (i = s.top; i >= 0; i--)
{
printf ("\n-------------|  %d  |-----------------\n", s.stk[i]);
}
printf ("Enter the car Plate No. \n");
scanf ("%d", &num);
system ("CLS");
//test each value
if(s.top == -1)
{
		s.top = s.top + 1;
		tops1=tops1+1;
		s.stk[s.top] = num;

}
else{


for(ctr = 0; ctr <= s.top; ctr++)
{
	val = s.stk[ctr];

	if (val==num)
	{
		printf("The number already exists!");
		bool = 1;
		break;
	}
	else
	{
		bool = 0;

		}

	} //end of loop
	
	
	if(bool == 1)
	{
		
	}
	else
	{
			s.top = s.top + 1;
			tops1=tops1+1;
			s.stk[s.top] = num;
	
	}

}

}
return;
}

/*Function to delete an element from the stack*/
void dequeue ()
{
int num;
int ctr;
int val;
int i;


for (i = s.top; i >= 0; i--)
{
printf ("\n----------|  %d  |------------\n", s.stk[i]);
}
printf("Please enter plate number to depart: ");
scanf("%d",&num);

if (s.top == - 1)
{
printf ("| Garage is Empty | \n");

}
else
{
	for(ctr=0;ctr<=s.top;ctr++)
	{
		val = s.stk[ctr];
		if(num==val)
		{
			bool=1;
			break;
		}
		else
		{
			bool = 0;
		}

	}

	if(bool == 1)
	{
		//a matching number has been found
		printf("\nFound\n");
		depart1=depart1+1;
		//depart_process1(num,ctr) ;
		sample_depart(num, ctr);

	
	}
	else
	{
		printf("\nThe plate number you entered does not exist!\n");
	}
//num = s.stk[s.top];
//printf ("The Car Plate No. that departed was: \n------\n| %d |\n------\n", s.stk[s.top]);
//s.top = s.top - 1;
}
for (i = s.top; i >= 0; i--)
{
printf ("\n-------------|  %d  |-----------------\n", s.stk[i]);//display the stack
}
}

sample_depart(int index, int userInput)
{
	
	//take note that userInput is the key variable
	int ctr;
	int num_moved = -1;
	//temp objects
	int temp_arr[userInput];
	int ctr_temp; //counter para sa temp array
/*	
	int ctr;

	for(ctr = index - 1;ctr <= s.top;ctr++)
	{
		s.stk[ctr]=s.stk[ctr+1];
	}	
	s.top=s.top-1;*/
	
	//ilalagay muna yung babang part sa temp array
	
	ctr_temp = 0;
	for(ctr = 0; ctr<=userInput-1;ctr++)
	{
		temp_arr[ctr_temp] = s.stk[ctr];
		ctr_temp++;
	}
	
	
	ctr_temp = 0;

	for(ctr = userInput;ctr <= s.top;ctr++)
	{
		s.stk[ctr_temp]=s.stk[ctr+1];
		ctr_temp++;
		num_moved ++;
	}	
	s.top=s.top-1;
	
	printf("Val: %d\n",num_moved);
	
	
	
	//from temp array to stk
	ctr_temp=num_moved;
	
	for(ctr=0;ctr<=userInput - 1;ctr++)
	{
		s.stk[ctr_temp] = temp_arr[ctr];
		ctr_temp++;
	}
	
	
}

/*Function to display the status of the stack*/
void displayqueue ()
{
	int i;
if (s.top == -1)
{
printf ("| Garage is empty |\n");
return;
}
else
{
printf ("\n | The status of the Garage is | \n");
for (i = s.top; i >= 0; i--)
{
printf ("\n-------------|  %d  |-----------------\n", s.stk[i]);}
}
printf ("\n");
}


void binarytree ()//BINARY TREE FUNCTION
{
	
	int l;
	printf ("                      Binary Tree\n");
	printf("Enter Level: ");
	scanf("%d", &l);
	switch (l){
		case 1: 
		Level1();
		break;
		case 2:
			Level2();
			break;
		case 3:
			Level3();
			break;
		case 4:
			Level4();
			break;
		case 5:
			Level5();
			break;
		default:
			printf ("Invalid");
	}
}

void Level1()
{
	char node1;
	printf("Node [1]: ");
	scanf (" %c", &node1);
	
	printf("                                           [%c]\n", node1);
	printf("InOrder: %c\n",node1);
	printf("PreOrder: %c\n",node1);
	printf("PostOrder: %c\n",node1);
}

void Level2()
{
char node1, node2, node3;
 
 printf("Node [1]:");
 scanf(" %c", &node1);
 printf("Node [2]:");
 scanf(" %c", &node2);
 printf("Node [3]:");
 scanf(" %c", &node3);
 printf("                                      [%c]\n", node1);
 printf("                         [%c]", node2); printf("                       [%c]\n", node3);
 
 printf("InOrder: %c%c%c\n",node2,node1,node3); 
 printf("PreOrder: %c%c%c\n",node1,node2,node3);
 printf("PostOrder: %c%c%c\n",node2,node3,node1);
 
}

void Level3()
{
	char node1, node2, node3,node4,node5,node6,node7;
 
 printf("Node [1]:");
 scanf(" %c", &node1);
 printf("Node [2]:");
 scanf(" %c", &node2);
 printf("Node [3]:");
 scanf(" %c", &node3);
  printf("Node [4]:");
 scanf(" %c", &node4);
 printf("Node [5]:");
 scanf(" %c", &node5);
 printf("Node [6]:");
 scanf(" %c", &node6);
 printf("Node [7]:");
 scanf(" %c", &node7);
 printf("                                      [%c]\n", node1);
 printf("                         [%c]", node2); printf("                       [%c]\n", node3);
 printf("                [%c]",node4); printf("             [%c]",node5); printf("         [%c]",node6); printf ("         [%c]\n",node7);
 printf("InOrder: %c%c%c%c%c%c%c\n",node4,node2,node5,node1,node6,node3,node7); 
 printf("PreOrder: %c%c%c%c%c%c%c\n",node1,node2,node4,node5,node3,node6,node7);
 printf("PostOrder: %c%c%c%c%c%c%c\n",node4,node5,node2,node6,node7,node3,node1);
}

void Level4()
{
	char node1, node2, node3,node4,node5,node6,node7,node8,node9,node10,node11,node12,node13,node14,node15;
 
 printf("Node [1]:");
 scanf(" %c", &node1);
 printf("Node [2]:");
 scanf(" %c", &node2);
 printf("Node [3]:");
 scanf(" %c", &node3);
  printf("Node [4]:");
 scanf(" %c", &node4);
 printf("Node [5]:");
 scanf(" %c", &node5);
 printf("Node [6]:");
 scanf(" %c", &node6);
 printf("Node [7]:");
 scanf(" %c", &node7);
  printf("Node [8]:");
 scanf(" %c", &node8);
 printf("Node [9]:");
 scanf(" %c", &node9);
 printf("Node [10]:");
 scanf(" %c", &node10);
  printf("Node [11]:");
 scanf(" %c", &node11);
 printf("Node [12]:");
 scanf(" %c", &node12);
 printf("Node [13]:");
 scanf(" %c", &node13);
  printf("Node [14]:");
 scanf(" %c", &node14);
 printf("Node [15]:");
 scanf(" %c", &node15);
 
 printf("                                      [%c]\n", node1);
 printf("                         [%c]", node2); printf("                             [%c]\n", node3);
 printf("                [%c]",node4); printf("             [%c]",node5); printf("            [%c]",node6); printf ("                 [%c]\n",node7);
 printf("         [%c]",node8);printf ("          [%c]",node9);printf("  [%c]",node10);printf("       [%c]",node11);printf("  [%c]",node12);printf("       [%c]",node13);printf("       [%c]",node14);printf("       [%c]\n",node15);
 
 printf("InOrder: %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",node8,node4,node9,node2,node10,node5,node11,node1,node12,node6,node13,node13,node14,node7,node5); 
 printf("PreOrder: %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",node1,node2,node4,node8,node9,node5,node10,node11,node3,node6,node12,node13,node7,node14,node15);
 printf("PostOrder: %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",node8,node9,node4,node10,node11,node5,node2,node12,node13,node6,node14,node15,node7,node3,node1);
}

void Level5()
{
char node1, node2, node3,node4,node5,node6,node7,node8,node9,node10,node11,node12,node13,node14,node15,node16,node17,node18,node19,node20,node21,node22,node23,node24,node25,node26,node27,node28,node29,node30,node31;
 
 printf("Node [1]:");
 scanf(" %c", &node1);
 printf("Node [2]:");
 scanf(" %c", &node2);
 printf("Node [3]:");
 scanf(" %c", &node3);
  printf("Node [4]:");
 scanf(" %c", &node4);
 printf("Node [5]:");
 scanf(" %c", &node5);
 printf("Node [6]:");
 scanf(" %c", &node6);
 printf("Node [7]:");
 scanf(" %c", &node7);
 printf("Node [8]:");
 scanf(" %c", &node8);
 printf("Node [9]:");
 scanf(" %c", &node9);
 printf("Node [10]:");
 scanf(" %c", &node10);
  printf("Node [11]:");
 scanf(" %c", &node11);
 printf("Node [12]:");
 scanf(" %c", &node12);
 printf("Node [13]:");
 scanf(" %c", &node13);
  printf("Node [14]:");
 scanf(" %c", &node14);
 printf("Node [15]:");
 scanf(" %c", &node15);
 printf("Node [16]:");
 scanf(" %c", &node16);
 printf("Node [17]:");
 scanf(" %c", &node17);
 printf("Node [18]:");
 scanf(" %c", &node18);
  printf("Node [19]:");
 scanf(" %c", &node19);
 printf("Node [20]:");
 scanf(" %c", &node20);
 printf("Node [21]:");
 scanf(" %c", &node21);
 printf("Node [22]:");
 scanf(" %c", &node22);
 printf("Node [23]:");
 scanf(" %c", &node23);
 printf("Node [24]:");
 scanf(" %c", &node24);
 printf("Node [25]:");
 scanf(" %c", &node25);
  printf("Node [26]:");
 scanf(" %c", &node26);
 printf("Node [27]:");
 scanf(" %c", &node27);
 printf("Node [28]:");
 scanf(" %c", &node28);
  printf("Node [29]:");
 scanf(" %c", &node29);
 printf("Node [30]:");
 scanf(" %c", &node30);
  printf("Node [31]:");
 scanf(" %c", &node31);
 
 printf("                                         [%c]\n", node1);
 printf("                     [%c]", node2); printf("                                      [%c]\n", node3);
 printf("          [%c]",node4); printf("                 [%c]",node5); printf("                   [%c]",node6); printf ("                   [%c]\n",node7);
 printf("    [%c]",node8);printf ("        [%c]",node9);printf("      [%c]",node10);printf("         [%c]",node11);printf("        [%c]",node12);printf("       [%c]",node13);printf("         [%c]",node14);printf("       [%c]\n",node15);
 printf(" [%c]",node16);printf("  [%c]",node17);printf("   [%c]",node18);printf("  [%c]",node19);printf("  [%c]",node20);printf("  [%c]",node21);printf("   [%c]",node22);printf("  [%c]",node23);printf("   [%c]",node24);printf("  [%c]",node25);printf("   [%c]",node26);printf("  [%c]",node27);printf("   [%c]",node28);printf("  [%c]",node29);printf("   [%c]",node30);printf("  [%c]\n",node31);
 
 printf("InOrder: %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",node16,node8,node17,node4,node18,node9,node19,node2,node20,node21,node10,node5,node1,node22,node11,node23,node6,node24,node12,node25,node3,node26,node13,node27,node7,node28,node14,node29,node15,node30,node31); 
 printf("PreOrder: %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",node1,node2,node4,node8,node16,node17,node9,node18,node19,node10,node20,node5,node21,node3,node6,node11,node22,node23,node12,node24,node13,node25,node26,node14,node27,node7,node28,node15,node29,node30,node31);
 printf("PostOrder: %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",node16,node17,node8,node18,node19,node9,node4,node20,node21,node10,node22,node23,node11,node5,node2,node24,node25,node12,node26,node27,node13,node6,node28,node29,node14,node30,node31,node15,node7,node3,node1);
}
	




int fibonacci(){

int n, x, c;
double fib, fib1, fib2;


 printf("FIBONACCI OF A NUMBER");
 printf("Enter the Number: ");
 scanf("%d", &n);

   fib1 = 0;
   fib2 = 1;

   for(x = 0; x < (n - 1); x++){

      fib = fib1 + fib2;
      printf ("%f",fib1);
      printf ("+%f\n",fib2);
      printf ("=%f\n",fib);
      fib1 = fib2;
      fib2 = fib;

   }

 printf("The Answer is: ");
    printf("%.0f", fib); 


return 0;
}
int factorial(){
int n, x;
double product;
    printf("FACTORIAL OF A NUMBER");
    printf("Enter the Number: ");
    scanf("%d", &n);

   product = 1;

   for(x = 1; x <= n; x++){

      product = product * x;

   }

    printf("The Answer is: ");
    printf("%.0f", product);   
}

int tower()
{
	int num;
 
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    towers(num, 'A', 'C', 'B');
    return 0;
}
void towers(int num, char frompeg, char topeg, char auxpeg)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", frompeg, topeg);
        return;
    }
    towers(num - 1, frompeg, auxpeg, topeg);
    printf("\n Move disk %d from peg %c to peg %c", num, frompeg, topeg);
    towers(num - 1, auxpeg, topeg, frompeg);
}

int boatman()
{

char b, f, c, r;
 printf("THE BOATMAN, FOX, CHICKHEN, AND SACK OF RICE\n");
 printf("Enter what island (A/B) is the following belong to:\n");
 printf("Boatman \n");
 scanf(" %c", &b);
 printf("Fox \n");
 scanf(" %c", &f);
 printf("Chicken \n");
 scanf(" %c", &c);
 printf("Sack of Rice \n");
 scanf(" %c", &r);

if((b=='A'&&f=='A'&&c=='A'&&r=='A')||(b=='B'&&f=='B'&&c=='B'&&r=='B')){
    printf("There will be NO DAMAGE, because all are in the same island.");
}
else if((b=='A'&&f=='A'&&c=='A'&&r=='B')||(b=='B'&&f=='B'&&c=='B'&&r=='A')){
    printf("There will be NO DAMAGE, because only the Rice is on the other island.");
}
else if((b=='A'&&f=='A'&&c=='B'&&r=='A')||(b=='B'&&f=='B'&&c=='A'&&r=='B')){
    printf("There will be NO DAMAGE, because only the Chicken is on the other island.");
}
else if((b=='A'&&f=='B'&&c=='A'&&r=='A')||(b=='B'&&f=='A'&&c=='B'&&r=='B')){
    printf("There will be NO DAMAGE, because only the Fox is on the other island.");
}
else if((b=='B'&&f=='A'&&c=='A'&&r=='A')||(b=='A'&&f=='B'&&c=='B'&&r=='B')){
   printf("There will be DAMAGE, because the Boatman is on the other island.");
}
else if((b=='A'&&f=='A'&&c=='B'&&r=='B')||(b=='B'&&f=='B'&&c=='A'&&r=='A')){
    printf("There will be DAMAGE, because the Chicken might eat the Rice.");
}
else if((b=='A'&&f=='B'&&c=='B'&&r=='A')||(b=='B'&&f=='A'&&c=='A'&&r=='B')){
   printf("There will be DAMAGE, because the Fox might eat the Chickhen.");
}
else if((b=='A'&&f=='B'&&c=='A'&&r=='B')||(b=='B'&&f=='A'&&c=='B'&&r=='A')){
    printf("There will be NO DAMAGE, because the Chicken might eat the Rice.");
}
else{
   printf("Invalid Input, Please Return...");
}
}
 




