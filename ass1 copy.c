
#include <stdio.h>
#include <stdlib.h> /* For exit() function*/
#include <string.h>
int main()
{


int rank[26][2]={0};

   char string[10000];
   //char key[1000];
   //char test1[10000];
   //char test2[10000];
   int c = 0, count[26] = {0};
   FILE *fptr;
   if ((fptr=fopen("ass12.txt","r"))==NULL){
       printf("Error! opening file");
       exit(1);         /* Program exits if file pointer returns NULL. */
   }
   int length;
   fscanf(fptr,"%[^\n]",string);
   length = strlen(string);
   printf("String length: %d\n", length);

while (c < length)
   {
      /** Considering characters from 'a' to 'z' only
          and ignoring others */
 
      if (string[c] >= 'A' && string[c] <= 'Z') 
         count[string[c]-'A']++;
 
      c++;
   }


	for(int i= 0; i<26; i++)
	{
		rank[i][0]=count[i];
		rank[i][1]=i;
	}
   
   		
   	for (int i=1; i < 26; i++)
   {
      int index = rank[i][0]; 
      int letter = rank[i][1];
      int j = i;
      while (j > 0 && rank[j-1][0] > index)
      {
           rank[j][0] = rank[j-1][0];
           rank[j][1] = rank[j-1][1];
           j--;
      }
    rank[j][0] = index;
    rank[j][1] = letter;
}







   		

   
 
   for (c = 0; c < 26; c++)
   {
      /** Printing only those characters 
          whose count is at least 1 */
 
     // if (count[c] != 0)
         printf("%c occurs %d times in the entered string.\n",c+'a',count[c]);
   }

   for (c = 0; c < 26; c++)
   {
      /** Printing only those characters 
          whose count is at least 1 */
 
     // if (count[c] != 0)
         printf("Rank:%c occurs %d times in the entered string.\n",rank[c][1]+'A',rank[c][0]);
   }

/* this is where we create and try new keys*/
/* start by tring all the keys with length one then two and so on 
you need to check the different keys to see if work or not so check them against so 
basic words like, the and it is to see if those show up many times if they do then 
you are on the right track
use modulus % to change the vaule of the letters

create atempted key

modulo with the cipher

check to see if it gave any words or made progress

*/
	
/*
Creating the keys to attempt

start off with the smallest keys then add length
start off with key length one then try all the values for that key

add 1 to the length of the key then go through and try it


*/

	char test2[10000];
	//for(int i=0; i<26; i++)
	//{
	//char key = i;
	char test1[26];
	

		c =0;
		while (c < length)
		   {
		   //	test2[c] = (((string[c]+(key+'A'))% 26)+'A');

/*		   	if(string[c]==rank[25][1]+'A'){ //Q
		   		test2[c]='e';
		   	}
		   	else if(string[c] == rank[24][1]+'A'){ //O
		   		test2[c]='t';
		   	}
		   	else if(string[c] == rank[23][1]+'A'){ //C
		   		test2[c]='a';
		   	}
		   	else if(string[c]==rank[22][1]+'A'){  //Y
		   		test2[c]='o';
		   	}
		   	else if(string[c]=='V'){
		   		test2[c]='h';
		   	}
		   	else if(string[c]=='K'){
		   		test2[c]='l';
		   	}
		   	else if(string[c] == 'M'){
		   		test2[c]='i';
		   	}
		   	else if(string[c] == 'P'){
		   		test2[c]='g';
		   	}
		   	else if(string[c] == 'R'){
		   		test2[c]='n';
		   	}
		   	else if(string[c] == 'H'){
		   		test2[c] = 's';
		   	}
		   	else if(string[c] == 'L'){
		   		test2[c]='y';
		   	}
		   	else if(string[c] == 'G'){
		   		test2[c] = 'w';
		   	}
		   	else if(string[c] == 'S'){
		   		test2[c] = 'k';
		   	}
		   	else if(string[c] == 'A'){
		   		test2[c]='r';
		   	}
		   	else if(string[c] == 'D'){
		   		test2[c]='b';
		   	}
		   	else if(string[c] == 'B'){
		   		test2[c] = 'c';
		   	}
		   	else if(string[c] == 'N'){
		   		test2[c] = 'd';
		   	}
		   	else if(string[c] == 'T'){
		   		test2[c] = 'v';
		   	}
		   	else if(string[c] == 'I'){
		   		test2[c] = 'u';
		   	}
		   	else if(string[c] == 'W'){
		   		test2[c] = 'p';
		   	}
		   	else if(string[c] == 'Z'){
		   		test2[c] = 'j';
		   	}
		   	else if(string[c] == 'J'){
		   		test2[c]='m';
		   	}
		   	else if(string[c] == 'E'){
		   		test2[c] = 'f';
		   	}
		   	else if(string[c] == 'F'){
		   		test2[c] = 'q';
		   	}
		   	else{
*/
		   		test2[c]=string[c];
//		   	}

		   	//char let = (char)chang;
		   	//test2[c]=let;

		   	//test2[c] = (((string[c]+(key+'A'))% 26)+'A');
		   	//test2[c] = (((string[c]+(key+'A'))% 26)+'A');
		   	//test2[c] = (((string[c]+(key+'A'))% 26)+'A');
		   	//test2[c] = (((string[c]+(key+'A'))% 26)+'A');
		   	//test2[c] = (((string[c]+(key+'A'))% 26)+'A');
		   	//test2[c] = (((string[c]+(key+'A'))% 26)+'A');
		   	//test2[c] = (((string[c]+(key+'A'))% 26)+'A');
		   	//test2[c] = (((string[c]+(key+'A'))% 26)+'A');
		   	//test2[c] = (((string[c]+(key+'A'))% 26)+'A');
		   	//test2[c] = (((string[c]+(key+'A'))% 26)+'A');




		 	c++;
		   }
			//printf("\nLetter used:\n%c",(key+'A'));
		   //printf("\nData from file:\n%s",test2);
		   strcat(test2, "\0\n");

	//	  }

		   strcat(test2, "\0\n");
		   //strcpy(test2, "Fuck This\n");
		   //test2[0]=65;
		 //  printf("\nUsing Key:%c", (key+'A'));
		  // printf("\nData from file:\n%s",test2);
	//}
	int j =0;
	int n = 0;
	int totaltwo =0;
	int totalthrees = 0;
	int totalfour = 0;
	int wording = 0;
	//char twowords[2];
	//char *it = "it";
	//char *if1 = "if";
	//char *to = "to";
	//char *as = "as";
	//char *in = "in";
	//char *is = "is";
	int length1 = strlen(string);

//	for(n=0; n < 26; n++){

	while(j<(length1-1)){
		 //twowords[0] = test2[j];
		 //twowords[1] = test2[j+1];

		 //char *twos = twowords;

/*		 if((test2[j] == 'i') && (test2[j+1] == 's') ){
		 	printf("%c%c\n",test2[j],test2[j+1] );
		 	totaltwo++;
		 }

		 if((test2[j] == 'i') && (test2[j+1] == 't') ){
		 	printf("%c%c\n",test2[j],test2[j+1] );
		 	totaltwo++;
		 }

		 if((test2[j] == 'a') && (test2[j+1] == 's') ){
		 	printf("%c%c\n",test2[j],test2[j+1] );
		 	totaltwo++;
		 }

		 if((test2[j] == 'i') && (test2[j+1] == 'n') ){
		 	printf("%c%c\n",test2[j],test2[j+1] );
		 	totaltwo++;
		 }

		 if((test2[j] == 'i') && (test2[j+1] == 'f') ){
		 	printf("%c%c\n",test2[j],test2[j+1] );
		 	totaltwo++;
		 }

		 if((test2[j] == 't') && (test2[j+1] == 'o') ){
		 	printf("%c%c\n",test2[j],test2[j+1] );
		 	totaltwo++;
		 }

		 if((test2[j] == 't') && (test2[j+1] == 'h') && (test2[j+2]=='e')){
		 	printf("%c%c%c\n",test2[j],test2[j+1],test2[j+2] );
		 	totalthrees++;
		 }

		 if((test2[j] == 'a') && (test2[j+1] == 'n') && (test2[j+2]=='d')){
		 	printf("%c%c%c\n",test2[j],test2[j+1],test2[j+2] );
		 	totalthrees++;
		 }

		 if((test2[j] == 'w') && (test2[j+1] == 'a') && (test2[j+2]=='s')){
		 	printf("%c%c%c\n",test2[j],test2[j+1],test2[j+2] );
		 	totalthrees++;
		 }

		 if((test2[j] == 'h') && (test2[j+1] == 'i') && (test2[j+2]=='s')){
		 	printf("%c%c%c\n",test2[j],test2[j+1],test2[j+2] );
		 	totalthrees++;
		 }

		 if((test2[j] == 'h') && (test2[j+1] == 'e') && (test2[j+2]=='r')){
		 	printf("%c%c%c\n",test2[j],test2[j+1],test2[j+2] );
		 	totalthrees++;
		 }
*/
		 if((test2[j] == 'C') && (test2[j+1] == 'T') && (test2[j+2]=='C') && (test2[j+3]=='F')){
		 	//printf("%c%c%c%c\n",test2[j],test2[j+1],test2[j+2], test2[j+3]);
		 	totalfour++;
		 }

	//	 if((test2[j] == 'C') && (test2[j+1] == 'T') && (test2[j+2]=='C')){
	//	 	printf("%c%c%c\n",test2[j],test2[j+1],test2[j+2] );
	//	 	totalthrees++;
	//	 }

		 if((test2[j] == 'C')  && (test2[j+2]=='C')){
		 	//printf("%c%c%c%c\n",test2[j],test2[j+1],test2[j+2], test2[j+3] );
		 	totaltwo++;
		 }

	//	 if((test2[j] == (n+'A')) && (test2[j+2] == (n+'A'))){
	//	 	printf("%c%c%c%c\n",test2[j],test2[j+1],test2[j+2], test2[j+3] );
	//	 	totalthrees++;
	//	 }

		 //if((strcmp(twos, it)==0) || (strcmp(twos, if1)==1) || (strcmp(twos, to)==1) ||
		 //	(strcmp(twos, as)==1) || (strcmp(twos, in)==1) || (strcmp(twos, is)==1)){

		 //if(twowords == ( "if" || "it" || "to" || "as" || "in")){
		 //	printf("%s\n",twowords );\
		 	//printf("%d\n", j);
		 //	totaltwo++;
		 //}
		 j++;

	}
	//j=0;
	//}



	/*

	length1 = strlen(string);
	j=0;

	for(n=0; n < 26; n++){

	while(j<(length1-1)){

		if((test2[j] == (n+'A')) && (test2[j+2] == (n+'A'))){
		 	//printf("%c%c%c%c%c\n",test2[j],test2[j+1],test2[j+2], test2[j+3], test2[j+4] );
		 	totalthrees++;
		 }
		 j++;

	}
	j=0;
	}


*/





	length1 = strlen(string);
	j=0;

	for(n=0; n < length; n++){

		char one = string[n];
		char two = string[n+1];
		char three = string[n+2];
		char four = string[n+3];
		char five = string[n+4];
		char six = string[n+5];
	//	char seven = string[n+6];
	//	char eight = string[n+7];
	//	char nine = string[n+8];
	//	char ten = string[n+9];
	//	char eleven = string[n+10];
	//	char twelve = string[n+11];
	//	char thirteen = string[n+12];
	//	char fourteen = string[n+13];
	//	char fifteeen = string[n+14];






		
		j=n+9;

	while(j<(length1-5)){

		if((test2[j] == one) && (test2[j+1] == two) && (test2[j+2] == three) && (test2[j+3] == four)
			&& (test2[j+4] == five)
			 && (test2[j+5] == six) ){// && (test2[j+6] == seven) && (test2[j+7] == eight) ){
			//&& (test2[j+8] == nine) && (test2[j+9] == ten) && (test2[j+10]==eleven) && (test2[j+11]==twelve) &&
			//(test2[j+12]==thirteen)){
		 	printf("%c%c%c%c%c%c\n",test2[j],test2[j+1], test2[j+2], test2[j+3], test2[j+4], test2[j+5]);//,
		 	 //test2[j+6], test2[j+7]);//, test2[j+8], test2[j+9], test2[j+10], test2[j+11], test2[j+12] );
		 	wording++;
		 }
		 j++;

	}
	j=0;
	}
	



	/*int k = 0;
	int totalthrees = 0;
	//char threewords[3];
	//char *the = "the";
	//char *and = "and";
	int length2 = strlen(string);
	
	while(k<(length2-2)){
		 //threewords[0] = test2[j];
		 //threewords[1] = test2[j+1];
		 //threewords[2] = test2[j+2];
		 //char *threes = twowords;

		if((test2[j] == 't') && (test2[j+1] == 'h') && (test2[j+2]=='e')){
		 	printf("%c%c%c\n",test2[j],test2[j+1],test2[j+2] );
		 	totalthrees++;
		 }

		 if((test2[j] == 'a') && (test2[j+1] == 'n') && (test2[j+2]=='d')){
		 	printf("%c%c%c\n",test2[j],test2[j+1],test2[j+2] );
		 	totalthrees++;
		 }

		 if((test2[j] == 'w') && (test2[j+1] == 'a') && (test2[j+2]=='s')){
		 	printf("%c%c%c\n",test2[j],test2[j+1],test2[j+2] );
		 	totalthrees++;
		 }
		




		 //if(strcmp(threes, and)==0 || strcmp(threes, the)==1){

		 
		 	//printf("%s\n",twos );\
		 	//printf("%d\n", j);
		 //	printf("%s\n",threewords );
		 //	totalthrees++;
		// }
		 k++;

	}
*/
/*	length1 = strlen(string);
	for(char b = 0; b < 26; b++){
		for(char a = 0; a < 26; a++){

			int m = 0;
			while(m< (length1-1)){
				test2[m] = ((test2[m]+b)%26)+'A';
				test2[m+1]= ((test2[m+1]+a)%26)+'A';
				m=m+2;
			}
		//	printf("\nThe key is:\n%c%c",(b+'A'),(a+'A'));
		//	printf("\nData from file:\n%s",test2);
		}

	}
*/

	printf("Total wording words: %d\n", wording);
	printf("Total two words: %d\n", totaltwo);
	printf("Total three words: %d\n", totalthrees);
	printf("Total four words: %d\n", totalfour);
	printf("Total words: %d", (totaltwo+totalthrees));

	
	printf("\nData from file:\n%s",test2);
	printf("\nData from file:\n%s",string);


 //  printf("\n\nData from file:\n%s",string);
   fclose(fptr);
   return 0;
}
