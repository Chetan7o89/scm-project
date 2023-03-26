#include<stdio.h>
#include<string.h>
void bmi();
void bmi()
{
    float height,weight,index;
	printf("\nplease enter your height in cm: ");
	scanf("%f",&height);
	printf("please enter your weight in kg: ");
	scanf("%f",&weight);
	// convert height in m
	height = height / 100;
	index=weight/(height * height);
	printf("your bmi is: %f",index);
	if (index<=18.5)
	{
		printf("\nyou are underweight");
	}
	else if (index > 18.5 && index <= 21.5)
	{
		printf("\nyou are normal");
	}
	else if (index>21.5)
	{
		printf("\nyou are overweight");
	}
}
void tests();
void tests()
{ 
     char answer[50];
	printf("\nTests to kept in mind before making diet chart\n ");
	printf("\nCaloric needs test,\nFood sensitivity test,\nBody composition test,\nNutrient deficiency test");
	printf("\nif done any of the above test type yes,else no:");
	scanf("%s",&answer);
	if(strcmp(answer, "yes") == 0)
	{
		printf("\nso kindly analysis what you want to improve and consult a doc!!!!!");
	}
	else
	{
		printf("\nplease do these test and consult doc!!!");
		printf("\nbefore following any diet!!!");
	}
}

int main()
{
	char name[50];
	int choice;
	printf("\nDiet planner");
	printf("\nplease enter your good name: ");
	gets(name);
	printf("hi %s ",name);
	bmi();
	tests();
	printf("\n note:according to your bmi press option below:-");
	printf("\n press 1 for underweight");
	printf("\n press 2 for normal");
	printf("\npress 3 for overweight ");
	printf("\nnow enter number according to bmi:");
	scanf("%d",&choice);
	switch(choice)
	{
	  case 1:
	  printf("\nDiet chart for underweight!!!\n");
	  printf("\n1.Eating at least 5 portions of a variety of fruit and vegetables every day.");
	  printf("\n2.Basing meals on potatoes, bread, rice, pasta or other starchy carbohydrates. ");
	  printf("\n3.Having some dairy or dairy alternatives (such as soya drinks and yoghurts).");
	  break;
	  case 2:
	  printf("\n1.Diet chart for normal!!!\n");
	  printf("\n2.Fruit, vegetables, legumes (e.g. lentils and beans),\n nuts and whole grains (e.g. unprocessed maize, millet, oats, wheat and brown rice).");	
	  printf("\n3.At least 400 g (i.e. five portions) of fruit and vegetables per day \n, excluding potatoes, sweet potatoes, cassava and other starchy roots.");
	  break;
	  case 3:
	  printf("\n1.Diet chart for overweight!!!\n");
	  printf("\n2.Choose minimally processed, whole foods-whole grains, vegetables, fruits, nuts");
	  printf("\n3.Limit sugared beverages,\n refined grains, potatoes, red and processed meats, and other highly processed foods,");
	  break;
	  default:

printf("\nWrong Choice!");

break;
	}
	
	
	
	return 0;
}
