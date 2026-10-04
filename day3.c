#include <stdio.h>
#include <string.h>
int main(){

char password[50];
printf("Pls enter a password: ");
scanf("%49s", password);
printf("Your entered password is: [%s]\n", password);
int length = strlen(password);
if (length >=8){
  printf("Password length accepted\n");
}
else{
  printf("Warning, Password too short, must be at least, 8 characters long\n");
}

return 0;
}
