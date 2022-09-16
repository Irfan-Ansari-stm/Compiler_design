#include<stdio.h>
#include<string.h>
void main ()
{


    keyword();
    identifier();
    integer();
    real();


}


void keyword(){
//*********************identifying the keyword*********************************
    char str[31];
    printf("Enter the string to know keyword:");
    scanf("%s",str);


  if(!strcmp(str, "if") || !strcmp(str, "else") ||
     !strcmp(str, "while") || !strcmp(str, "do") ||
     !strcmp(str, "break") ||
     !strcmp(str, "continue") || !strcmp(str, "int")
     || !strcmp(str, "double") || !strcmp(str, "float")
     || !strcmp(str, "return") || !strcmp(str, "char")
     || !strcmp(str, "case") || !strcmp(str, "char")
     || !strcmp(str, "sizeof") || !strcmp(str, "long")
     || !strcmp(str, "short") || !strcmp(str, "typedef")
     || !strcmp(str, "switch") || !strcmp(str, "unsigned")
     || !strcmp(str, "void") || !strcmp(str, "static")
     || !strcmp(str, "struct") || !strcmp(str, "goto") || !strcmp(str, "auto")
     || !strcmp(str, "case") || !strcmp(str, "const") || !strcmp(str, "default")
     || !strcmp(str, "enum") || !strcmp(str, "extern") || !strcmp(str, "for")
     || !strcmp(str, "register") || !strcmp(str, "signed") || !strcmp(str, "union")
     || !strcmp(str, "volatile")){

     printf("%s is a keyword.\n",str);
     }
     else{

        printf("%s is not a keyword.\n",str);
     }

}

//******************** identifying for identifier*******************************

void identifier(){

    char str[40];
    printf("Enter the string to know identifier:\n");
    scanf("%s",str);

    if(str[0]=='a' || str[0]=='b' || str[0]=='c' || str[0]=='d'
      ||str[0]=='e'|| str[0]=='f'|| str[0]=='g'|| str[0]=='h'
      || str[0]=='i'|| str[0]=='j'|| str[0]=='k'|| str[0]=='l'
      || str[0]=='m'|| str[0]=='n'|| str[0]=='o'|| str[0]=='p'
      || str[0]=='q'|| str[0]=='r'|| str[0]=='s'|| str[0]=='t'
      || str[0]=='u'|| str[0]=='v'|| str[0]=='w'|| str[0]=='x'
      || str[0]=='y'|| str[0]=='z' || str[0]=="_"||

      str[0]=='A' || str[0]=='B' || str[0]=='C' || str[0]=='D'
      ||str[0]=='E'|| str[0]=='F'|| str[0]=='G'|| str[0]=='H'
      || str[0]=='I'|| str[0]=='J'|| str[0]=='K'|| str[0]=='L'
      || str[0]=='M'|| str[0]=='N'|| str[0]=='o'|| str[0]=='P'
      || str[0]=='Q'|| str[0]=='R'|| str[0]=='s'|| str[0]=='T'
      || str[0]=='U'|| str[0]=='V'|| str[0]=='w'|| str[0]=='X'
      || str[0]=='Y'|| str[0]=='Z'
      )

      {


        printf("%s is the valid identifier.\n",str);

      }
      else{

        printf("%s is not a valid identifier.\n",str);
      }







}
//******************** identifying for the integer******************************
void integer(){

    char str[20];
    printf("Enter the integer:");
    scanf("%s",str);
    int i;
    int len = strlen(str);
    printf("The lenght of %s =",str);
    if (len == 0){
        printf("This is zero.");
    }


    for(i=0;i<len;i++){

            if (str[i] != '0' && str[i] != '1' && str[i] != '2'
                && str[i] != '3' && str[i] != '4' && str[i] != '5'
                && str[i] != '6' && str[i] != '7' && str[i] != '8'
                && str[i] != '9' || (str[i] == '-' && i > 0))
            {

                //return false;
             //   printf("This is not a integer.");

            }
           // return true;



    }


}



//************************** identifying the real number************************


void real(){









}



