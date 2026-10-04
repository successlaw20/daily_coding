#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){

char password[50];
printf("Pls enter a password: ");
scanf("%49s", password);
printf("Your entered password is: [%s]\n", password);
int length = strlen(password);

int has_number=0;
for(int i=0; password[i] !='\0'; i++){
   if(isdigit((unsigned char)password[i])){
      has_number =1;
break; //for speed cos we care about if the passwrd contains atleast 1 number
                    }
        }

if (length >=8 && has_number==1){
  printf("Password length accepted and contains at least a number\n");
}
else{
  printf("Warning, Password too short, must be at least, 8 characters long and Must contain a number\n");
}

return 0;
}
