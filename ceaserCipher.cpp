#include <stdio.h>

void cesar(char str[], int shift) {
  int i = 0;

  while (str[i] != '\0') {
    if (str[i] >= 'A' && str[i]<= 'Z') {
        char c = str[i] - 'A';
        c += shift;
        c = c % 26;
        str[i] = c + 'A';
    }
    i++;
  }
  printf("Encrypted cipher text is %s", str);
  printf("\n");
}

void decrypt(char str[], int shift){
	int i=0;
	while (str[i]!= '\0'){
		if(str[i] >= 'A' && str[i]<= 'Z'){
		char c = str[i] -'A';
		c -= shift;
		c = c%26;
		str[i] =c + 'A';
		}
	i++;
	}
	printf("%s", str);
	
}

int main()
{
	
    char str[10];
    int j;
    int key;
    printf("Enter your string and Key:");
    scanf("%s %d",&str, &key);
    cesar(str, key);
    printf("Show Decryption:1\n");
    scanf("%d", &j);
    if(j==1){
    	decrypt(str , key);
    	
	}
	else{
		return 0;
	}
    return 0;
}
