//Program to implement Stack uisng Arrays in C
// Include Header files
#include <stdio.h>
#include <stdlib.h>
#define MAX 3
// Global Declarations
int top = -1;
int st[MAX];
//Function Declarations
void push(void);
void pop(void);
void peep(void);
void display(void);
// Main Method to write the Menu
int main()
{
    int opt;
    do
    {
    printf("Stack Menu : 1. Push \t 2. Pop \t 3. Peep \t 4. Display \t 5. Exit\n");
    printf("==========================================================================\n");
    printf("Enter your choice : ");
    scanf("%d", &opt);
        switch(opt)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peep();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Thank you for checking the code!!");
                break;
        }
    }while(opt != 5);
    return 0;
}
// Function Definitions
void push()
{
    int num;
    if(top == MAX-1)
        printf("Stack Overflow\n");
    else
    {
        printf("Enter the number to be pushed :");
        scanf("%d",&num);
        top++;
        st[top]= num;
    }
}
void pop()
{
    if(top == -1)
        printf("Stack Underflow\n");
    else
    {
        printf("%d popped from stack\n",st[top]);
        top--;
    }
}
void peep()
{
    if(top== -1)
        printf("Stack Empty\n");
    else
        printf("%d is on the Top of the Stack\n",st[top]);
}
void display()
{
    int i;
    if(top== -1)
        printf("Stack Empty\n");
    else
    {
        for(i=top; i >= 0; i--)
            printf("%d \n",st[i]);
    }
}
//Output
Stack Menu : 1. Push 	 2. Pop 	 3. Peep 	 4. Display 	 5. Exit
==========================================================================
Enter your choice : 4
Stack Empty
Stack Menu : 1. Push 	 2. Pop 	 3. Peep 	 4. Display 	 5. Exit
==========================================================================
Enter your choice : 3
Stack Empty
Stack Menu : 1. Push 	 2. Pop 	 3. Peep 	 4. Display 	 5. Exit
==========================================================================
Enter your choice : 2
Stack Underflow
Stack Menu : 1. Push 	 2. Pop 	 3. Peep 	 4. Display 	 5. Exit
==========================================================================
Enter your choice : 1
Enter the number to be pushed :45
Stack Menu : 1. Push 	 2. Pop 	 3. Peep 	 4. Display 	 5. Exit
==========================================================================
Enter your choice : 1
Enter the number to be pushed :56
Stack Menu : 1. Push 	 2. Pop 	 3. Peep 	 4. Display 	 5. Exit
==========================================================================
Enter your choice : 1
Enter the number to be pushed :78
Stack Menu : 1. Push 	 2. Pop 	 3. Peep 	 4. Display 	 5. Exit
==========================================================================
Enter your choice : 1
Stack Overflow
Stack Menu : 1. Push 	 2. Pop 	 3. Peep 	 4. Display 	 5. Exit
==========================================================================
Enter your choice : 3
78 is on the Top of the Stack
Stack Menu : 1. Push 	 2. Pop 	 3. Peep 	 4. Display 	 5. Exit
==========================================================================
Enter your choice : 4
78 
56 
45 
Stack Menu : 1. Push 	 2. Pop 	 3. Peep 	 4. Display 	 5. Exit
==========================================================================
Enter your choice : 2
78 popped from stack
Stack Menu : 1. Push 	 2. Pop 	 3. Peep 	 4. Display 	 5. Exit
==========================================================================
Enter your choice : 4
56 
45 
Stack Menu : 1. Push 	 2. Pop 	 3. Peep 	 4. Display 	 5. Exit
==========================================================================
Enter your choice : 3
56 is on the Top of the Stack
Stack Menu : 1. Push 	 2. Pop 	 3. Peep 	 4. Display 	 5. Exit
==========================================================================
Enter your choice : 2
56 popped from stack
Stack Menu : 1. Push 	 2. Pop 	 3. Peep 	 4. Display 	 5. Exit
==========================================================================
Enter your choice : 4
45 
Stack Menu : 1. Push 	 2. Pop 	 3. Peep 	 4. Display 	 5. Exit
==========================================================================
Enter your choice : 3
45 is on the Top of the Stack
Stack Menu : 1. Push 	 2. Pop 	 3. Peep 	 4. Display 	 5. Exit
==========================================================================
Enter your choice : 2
45 popped from stack
Stack Menu : 1. Push 	 2. Pop 	 3. Peep 	 4. Display 	 5. Exit
==========================================================================
Enter your choice : 4
Stack Empty
Stack Menu : 1. Push 	 2. Pop 	 3. Peep 	 4. Display 	 5. Exit
==========================================================================
Enter your choice : 3
Stack Empty
Stack Menu : 1. Push 	 2. Pop 	 3. Peep 	 4. Display 	 5. Exit
==========================================================================
Enter your choice : 1
Enter the number to be pushed :89
Stack Menu : 1. Push 	 2. Pop 	 3. Peep 	 4. Display 	 5. Exit
==========================================================================
Enter your choice : 4
89 
Stack Menu : 1. Push 	 2. Pop 	 3. Peep 	 4. Display 	 5. Exit
==========================================================================
Enter your choice : 3
89 is on the Top of the Stack
Stack Menu : 1. Push 	 2. Pop 	 3. Peep 	 4. Display 	 5. Exit
==========================================================================
Enter your choice : 5
Thank you for checking the code!!

=== Code Execution Successful ===
