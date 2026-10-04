#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){

char password[50];
printf("Pls enter a password: ");
scanf("%49s", password);
printf("Your entered password is: [%s]\n", password);
int length = strlen(password);

int has_number, has_lower, has_special, has_upper=0;//complexity variables
for(int i=0; password[i] !='\0'; i++){
      // number test
   if(isdigit((unsigned char)password[i])){
      has_number =1;
      }
      //lower case test
   if(islower((unsigned char)password[i])){
      has_lower =1;
      }
      //special case test
   if(ispunct((unsigned char)password[i])){
      has_special =1;
      }
      //upper case test
   if(isupper((unsigned char)password[i])){
      has_upper =1;
      }
   if (has_number == 1 && has_upper == 1 && has_lower == 1 && has_special == 1){
       break; //for speed cos we care about if the passwrd contains atleast 1 of our test cases
              }
    }

if (length >=8 && has_number==1 && has_upper == 1 && has_lower == 1 && has_special == 1){
  printf("Password length accepted and contains at least a number, upper, lower and special char\n");
}
else{
  printf("Warning, Passwrd could be short, must be at least, 8 char. long or doesn't contain a number, upper, lower and a special char\n");
}

return 0;
}
