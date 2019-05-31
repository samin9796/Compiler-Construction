/*lex program to detect department name*/

%{ 
#include<stdio.h> 
int i=0;
%} 

/* Rules Section*/
%% 
^([A-Z]){3}$ {printf("Valid\n");} 
.+ {printf("Not Valid\n");}
%% 

int main() 
{ 
yylex(); 

return 0; 
} 

