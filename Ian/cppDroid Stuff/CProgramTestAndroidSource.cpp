

#include<stdio.h>

int max(int num1, int num2); // declare max function globally

int main()
{
	//declare some variables

	int a = 1;
	char name[] = "Ian";
	int b[10] = {1,2,3,4,5,6,7,8,9,10}; // array
	int lengthArray = sizeof (b) / sizeof(int); //get length of array
	int num1; // to be used for input
 int num2; //to be used for input also
	int test1 = 4;
	int test2 = 12;// to be compared
 int ret;
 int c = 10;
 int d = 100;


 ret = max(c, d);
        printf("The max number from our function is %d\n",ret);

	printf("Hello World!\n");
	printf("The int is %d\n", a);
	printf("Now adding 1 to the int\n");
	printf("New value = %d\n", a + 1);
	printf("String time = %s\n", name);
	/*for (int i = 0; i < 10; i++)
	{
		printf("%d\n", i);
	}*/ // for loop
	printf("Length of array = %d\n", lengthArray);
	for (int i = 0; i < lengthArray; i++)
	{
		printf("Array value at element [%d] is value %d\n", i, b[i]);//harder to do than Java; array index -> array value
		} // get some input and print out
      printf("Please enter a number\n");
      scanf("%d", &num1);
      printf("You entered %d\n", num1); //so tough to output the inputted integer, remember the &!
    printf("Please enter a second number\n");
      scanf("%d", &num2);
      printf("You entered %d\n", num2);
    printf("The total of both numbers is %d\n", num1 + num2); //add both inputted numbers together and display to user
      if (test1 == test2) //test equality
      {
      	printf("%d and %d are equal\n", test1, test2);
      	}
      else {
      	printf("%d and %d are not equal\n", test1, test2);
        }
        if (test1 > test2) //test greater than
      {
      	printf("%d is greater than %d \n", test1, test2);
      	}
      else {
      	printf("%d is not greater than %d\n", test1, test2);

	return 0;
}
   }


 //messing with functions (methods)
   int max(int num1, int num2) //display max of two numbers
   {
        int result; //local variable to store result and pass back to main program

        if (num1 > num2)
        result = num1;
        else
        result = num2;
        return result;
    }
