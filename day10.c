#include <stdio.h>
#include <ctype.h>

int main(){
char word[50];
int key;
int choice;
printf("1. Encrypt a word\n");
printf("2. Decrypt a word\n");
printf("Choose an option (1 or 2): ");
scanf("%d", &choice);

if(choice==1){
printf("Enter a secret key number: ");
scanf("%d", &key);
key=key%26;
printf("Enter a word to encrypt: ");
scanf("%49s", word);

for (int i=0; word[i]!='\0'; i++){
if (isupper((unsigned char)word[i])){
word[i]=((word[i]-'A'+key) % 26) +'A';
}

else if (islower((unsigned char)word[i]))
{
word[i]=((word[i]-'a'+key) % 26) +'a';
}

}
printf("Newly encrypted word is:%s\n", word);

}


else if(choice==2){
printf("Enter a Secret key for decryption: ");
scanf("%d", &key);
key=key%26;
printf("Enter a word to decrypt: ");
scanf("%49s", word);

for(int i=0; word[i]!='\0'; i++){
if(isupper((unsigned char)word[i])){
word[i]=((word[i]-'A'-key+26)%26)+'A';
}
else if(islower((unsigned char)word[i])){
word[i]=((word[i]-'a'-key+26)%26)+'a';
}

}

printf("Newly decrypted word is:%s\n", word);
}

return 0;
}
