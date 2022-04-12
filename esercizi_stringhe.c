//Non sono ancora riuscito a fare tutti i commit da casa e non posso controllare la loro corretta funzionalità senza gcc.

//ESERCIZIO 1
#include<stdio.h>  
#include <string.h>    
int main()
{
    char ch[20] = { 'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0' };
    printf("La lunghezza della stringa è: %d", strlen(ch));
    return 0;
}

//ESERCIZIO 2
/*
int main()
{    
 char ch[20]={'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0'};    
   char ch2[20];    
   strcpy(ch2,ch);    
   printf("Il valore della seconda stringa è: %s",ch2);    
 return 0;    
}*/

//ESERCIZIO 3
/*  
int main(){    
  char ch[10]={'h', 'e', 'l', 'l', 'o', '\0'};    
   char ch2[10]={'c', '\0'};    
   strcat(ch,ch2);    
   printf("Il valore della prima stringa è: %s",ch);    
 return 0;    
}*/

//ESERCIZIO 4
/*    
int main(){    
  char str1[20],str2[20];    
  printf("Inserisci la prima stringa: ");    
  gets(str1);  
  printf("Inserisci la seconda stringa: ");    
  gets(str2);    
  if(strcmp(str1,str2)==0)    
      printf("Le stringhe sono uguali");    
  else    
      printf("Le stringhe non sono uguali");    
 return 0;    
}*/

//ESERCIZIO 5
/*   
int main(){    
  char str[20];    
  printf("Inserisci una stringa: ");    
  gets(str);
  printf("String is: %s",str);    
  printf("La stringa al contrario è: %s",strrev(str));    
 return 0;    
}    
*/

//ESERCIZIO 6
/*    
int main(){    
  char str[20];    
  printf("Inserisci una stringa: ");    
  gets(str);   
  printf("La stringa è: %s",str);    
  printf("\n %s",strlwr(str));    
 return 0;    
}    
*/

//ESERCIZIO 7
/*  
int main(){    
  char str[20];    
  printf("Inserisci una stringa: ");    
  gets(str);    
  printf("La stringa è: %s",str);    
  printf(" %s",strupr(str));    
 return 0;    
}    
*/
