/********************************************************


 * File: GuessingGame.c
 *
 * Copyright 2023 Personal
 *
 *
 * Author: Ajesh Vincent
 *
 * Date Edited January 29, 2023
 *
 *
 * Description: Build a fun Guessing game illustrating power of Loops for learning C
 
 
 *******************************************************/
 
 #include <stdio.h>
 #include <stdlib.h>
 #define guess 6
 
 int main()
 {
	 
	 int userguess;
	 int outofguesses=0;
	 int chances=0;
	 
	
	 
	 while(userguess!=guess && (outofguesses==0))
	 {
		 chances=chances+1;
		 if(chances>3)
		 {
			 outofguesses=1;
			 break;
			 
		 }
		 printf("Enter a number: ");
		 scanf("%d",&userguess);
		 
	 }
	 if(outofguesses==1)
	 {
		 
		 printf("You Lost");
	 }
	 else
	 {
		 printf("You won");
	 }
	 
	 return 0;
 }
		 
	 