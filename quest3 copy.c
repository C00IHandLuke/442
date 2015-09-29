#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "crc.h"

int main(void)
{
  static char str[] = "52516B311D700D04FB70E9E52F691DF2";
  static char str1[10000];// = "00000000000000000000000000000000000000";// = "000000000000000000000000000000000000"; //[] = "123456789123456789123456789123456780";
  crc_t crc;
  crc_t crc1;

  //int string = strlen(str);

  //printf("\n%s\n", str1);
  
 // str1[0] = str1[0]+1;
 // str1[1] = '7';
 // str1[2] = '8';
 // str1[2] = str1[2]+1;
 // printf("\n%s\n", str1);
 // printf("\n%s\n", str);
 // exit(0);

  crc = crc_init();
  crc = crc_update(crc, (unsigned char *)str, strlen(str));
  crc = crc_finalize(crc);

  //crc1 = crc_init();
  //crc1 = crc_update(crc1, (unsigned char *)str1, strlen(str1));
  //crc1 = crc_finalize(crc1);
  
//  while(crc != crc1){
    
   
    /*   static char str[] = "123456789123456789123456789123456789";
    static char str1[] = "123456789123456789123456789123456780";
    crc_t crc;
    crc_t crc1;
    */
    
    for(int i=0; i < 60; i++){
     // str1[i]='0';

      

      for(int j=0; j<i; j++){

        for(int k=0; k<10; k++){

          if(k==0) str1[j] = '0';
          if(k==1) str1[j] = '1';
          if(k==2) str1[j] = '2';
          if(k==3) str1[j] = '3';
          if(k==4) str1[j] = '4';
          if(k==5) str1[j] = '5';
          if(k==6) str1[j] = '6';
          if(k==7) str1[j] = '7';
          if(k==8) str1[j] = '8';
          if(k==9) str1[j] = '9';

        for( int n=0; n<1; n++){

        //for(int k=0; k<10; k++){

          if(k==0) str1[n] = '0';
          if(k==1) str1[n] = '1';
          if(k==2) str1[n] = '2';
          if(k==3) str1[n] = '3';
          if(k==4) str1[n] = '4';
          if(k==5) str1[n] = '5';
          if(k==6) str1[n] = '6';
          if(k==7) str1[n] = '7';
          if(k==8) str1[n] = '8';
          if(k==9) str1[n] = '9';
        
          //str1[j] = '1';
          //str1[j] = '2';
          //char imp = k;
          //str1[j] = imp;
          //printf("\n%d", i);
          //printf("\n%d", j);
          //printf("\n%d\n", str1[j]);
          //printf("\n%s\n", str1);
          printf("%s\n", str1);
          //exit(0);

          crc1 = crc_init();
          crc1 = crc_update(crc1, (unsigned char *)str1, strlen(str1));
          crc1 = crc_finalize(crc1);

            //printf("Same 0x%lx\n", (unsigned long)crc);
            //printf("Change 0x%lx\n", (unsigned long)crc1);

                if((unsigned long)crc == (unsigned long)crc1){
                  printf("The answer is:\n");
                  printf("0x%lx\n", (unsigned long)crc);
                  printf("0x%lx\n", (unsigned long)crc1);
                  printf("%s\n", str);
                  printf("%s\n", str1);
                  exit(0);
                }

        }

      }


      }

      /*if(k == 9){

                for(int l=0; l<i; l++){
                  str1[j] = '0';

                }
              }
*/

    }

    crc1 = crc_init();
    crc1 = crc_update(crc1, (unsigned char *)str1, strlen(str1));
    crc1 = crc_finalize(crc1);

    //printf("Same 0x%lx\n", (unsigned long)crc);
    printf("Change 0x%lx\n", (unsigned long)crc1);


 // }


  printf("0x%lx\n", (unsigned long)crc);
  printf("0x%lx\n", (unsigned long)crc1);
  return 0;
}
