#include "myFunction.h"
int myStrlen(char ch[])
{
    return strlen(ch);
}
void myStrcpy(char ch1[], char ch2[])
{
       printf("%s\n",strcpy(ch1,ch2));
}
void myStrupr(char ch[])
{
    printf("%s\n",strupr(ch));
}
void myStrlwr(char ch[])
{
    printf("%s\n",strlwr(ch));
}
int myStrchr(char ch[], char x)
{
    if(strchr(ch,x)!= NULL){
        return 1;
    }else{
        return -1;
    }
}
int myStrstr(char ch1[], char ch2[])
{
    if(strstr(ch1,ch2)!= NULL){
        return 1;
    }else{
        return -1;
    }
}
int myStrcmp(char ch1[], char ch2[])
{
    if(strcmp(ch1,ch2)== 0){
        return 1;
    }else{
        return -1;
    }
}
void myConjugaison(char verbe[])
{
    int longueur = strlen(verbe);

    if (verbe[longueur - 2] != 'e' || verbe[longueur - 1] != 'r') {
        printf("Ce n'est pas un verbe du premier groupe.\n");
        return;
    }

    char racine[100];
    strncpy(racine, verbe, longueur - 2);
    racine[longueur - 2] = '\0';

    printf("Present du verbe \"%s\" :\n", verbe);
    printf("je %se\n", racine);
    printf("tu %ses\n", racine);
    printf("il/elle/on %se\n", racine);
    printf("nous %sons\n", racine);
    printf("vous %sez\n", racine);
    printf("ils/elles %sent\n", racine);

}
