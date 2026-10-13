#include <stdio.h>
#include <ctype.h>

int main(){
char word[50];
int key;
printf("Enter a Secret key for encryption: ");
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

return 0;
}
