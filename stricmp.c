/*Nesessário <ctype.h>*/

int stricmp(char *s1, char *s2){
	int i=0;

	while(toupper(s1[i])==toupper(s2[i]) && s1[i]!='\0')
		i++;
	return(toupper(s1[i])-toupper(s2[i]));
}
