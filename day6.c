#include <stdio.h>

int main(){
char word[50];
printf("Enter a word to encrypt: ");
scanf("%49s", word);

for (int i=0; word[i]!='\0'; i++){
word[i]=word[i]+1;
}

printf("Newly encrypted word is:%s\n", word);

return 0;
}
