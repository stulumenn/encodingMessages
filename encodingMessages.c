#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int encodingTheMessage ();
int encryptionTheMessage ();
void changerToEncode(char *s,char ca1, char ca2, char ca3, char ca4, char ca5, char ca6, char ca7, char ca8, char ca9, char ca10, char ca11, char ca12, char ca13, char ca14, char ca15, char ca16, char ca17, long int ce1, long int ce2, long int ce3, long int ce4, long int ce5, long int ce6, long int ce7, long int ce8, long int ce9, long int ce10, long int ce11, long int ce12, long int ce13, long int ce14, long int ce15, long int ce16, long int ce17);
void changerToEncrypt(char* s, char c2, char c4, int c1, int c3);

int main(){

	int firstStep = encodingTheMessage ();
	int secondStep = encryptionTheMessage();

	return 0;
} 

int encodingTheMessage (){ //plainmessagestosent dosyasını aç, mesajı çevir, yeni dosyaya yaz
	char* message;
	FILE *fp = fopen ("PlainMessagesToSent.txt", "r");
	fscanf (fp, "%s", message);

	changerToEncode (message,'E','I',' ','T','C','N','A','G','B','Z','H','L','U','V','R','S','Y',0,10,110,1110,11110,111110,1111110,11111110,1111111110,1111111110,11111111110,1111111111110,11111111111110,11111111111110,111111111111110,1111111111111110,11111111111111110);
	fclose (fp);

	FILE *aa = fopen ("EncodedMessages.txt", "w");
	fprintf(aa, "%s\n",message);
	fclose (aa);
}
int encryptionTheMessage (){ //encodedmessages dosyasını aç, mesajı çevir, yeni dosyaya yaz
	char* message;
	char c1, c2, c3, c4;
	FILE *fp = fopen ("EncodedMessages.txt", "r");
	fscanf (fp, "%s", message);
	changerToEncrypt (message, 1, '*', 0, '_');
	FILE* sr = fopen("EncryptedMessages.txt", "w");
	fprintf(sr, "%s\n", message);
	fclose(fp);
	fclose(sr);
}

void changerToEncode(char *s,char ca1, char ca2, char ca3, char ca4, char ca5, char ca6, char ca7, char ca8, char ca9, char ca10, char ca11, char ca12, char ca13, char ca14, char ca15, char ca16, char ca17, long int ce1, long int ce2, long int ce3, long int ce4, long int ce5, long int ce6, long int ce7, long int ce8, long int ce9, long int ce10, long int ce11, long int ce12, long int ce13, long int ce14, long int ce15, long int ce16, long int ce17){
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,r=0;
	if(s[a]==ca1){
		s[a]=ce1;
	}
	if(s[b]==ca2){
		s[b]=ce2;
	}
	if(s[c]==ca3){
		s[c]=ce3;
	}
	if(s[d]==ca4){
		s[d]=ce4;
	}
	if(s[e]==ca5){
		s[e]=ce5;
	}
	if(s[f]==ca6){
		s[f]=ce6;
	}
	if(s[g]==ca7){
		s[g]=ce7;
	}
	if(s[h]==ca8){
		s[h]=ce8;
	}
	if(s[i]==ca9){
		s[i]=ce9;
	}
	if(s[j]==ca10){
		s[j]=ce10;
	}
	if(s[k]==ca11){
		s[k]=ce11;
	}
	if(s[l]==ca12){
		s[l]=ce12;
	}
	if(s[m]==ca13){
		s[m]=ce13;
	}
	if(s[n]==ca14){
		s[n]=ce14;
	}
	if(s[o]==ca15){
		s[o]=ce15;
	}
	if(s[p]==ca16){
		s[p]=ce16;
	}
	if(s[r]==ca17){
		s[r]=ce17;
	}
}

void changerToEncrypt(char* s, char c2, char c4, int c1, int c3){
	int a=0,b=0,c=0,d=0;
	if(s[a]==c1){
		s[a]=c2;
	}
	if(s[b]==c3){
		s[b]=c4;
	}
}