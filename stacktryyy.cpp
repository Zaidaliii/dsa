#include<stdio.h>
int stack[100],choice,i,n,top,x;
void push();
void pop();
void peek();
void display();
int main()
{
	top=-1;
	printf("enter size of array\n");
	scanf("%d",&n);
	 printf("\n\t stack operations using aray");
	 printf("\n\t 1.push\n\t 2.pop\n\t 3.display\n\t 4.peek\n\t 5.exit");
	  do{
	  printf("\n enter choice:");
	  {
	  	switch(choice)
	  	{
	  		case1:
	  		 push();
	  		 break;
	  		   case2:
	  		   	pop();
	  		   	break;
	  		   	case3:
	  		   		peek();
	  		   		break;
	  		   		 case4:
	  		   		 	display();
	  		   		 	 break;
	  		   		 	 case5:
	  		   		 	 	{
								printf("exit");   }
	  		   		 	 	break;
          default:
          {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
	  }
	  }while(choice!=4);
	  return 0;
void push()
	if (top>=1)
	 { printf("\noverflow");
	 }
	 else{
	 	printf("enter value to pushed");
	 	scanf("%d",&x);
	 	top++:
	 stack[top]=x:
	 }
	 void pop{
	 if(top==-1){
	 	printf("\nunderflow");
	 }
	 else
	 { printf("popped element is:");
	 top--;
	 }
	void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
   
}
void peek()
{
	printf("the top of the staxk is %d",stack[top]);
}
	 }
}
}
