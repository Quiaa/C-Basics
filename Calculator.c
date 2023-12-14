#include <stdio.h>

int main()
{
	double x, y, res;
	int process = 0;

	printf("Select an option: \t (Multiply: 1. Divide: 2.  Plus: 3. Minus: 4.)\n");
	process = getSelection(4);	
	
	printf("Enter the X value: ");
	scanf("%lf", &x);
	printf("Enter the Y value: ");
	scanf("%lf", &y);


	if(process == 1)
	{
		res = x * y;
	}
	else if(process == 2)
	{
		res = x / y;
	}
	else if(process == 3)
	{
		res = x + y;
	}
	else if(process == 4)
	{
		res = x - y;
	}
	
	printf("Equal to: %.2lf",res);
	return 0;
}

int getSelection(int selections) {//selections = 4
        int fails = 0;
        while(1) {
            switch(fails++) {//Easter egg
            case 5:
                printf("C'mon, are you testing me or don't you know what is an integer?");
                break;
            case 10:
                printf("If you enter another wrong input, I'll kill myself.");
                break;
            case 11:
                printf("Program died...Probably because of you.");
				exit(1);
            }//Easter egg
            printf(": ");
            int input;
			scanf("%d", &input);
            if (input <= selections && input > 0) return input;
			printf("(ERROR) Please enter an integer in range [1, %d]", selections);
        }
}
