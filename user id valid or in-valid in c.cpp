 #include<stdio.h>
 #include<string.h>
int main()
 {
    char  name[20],username[20];
	 printf("ENTER USER NAME :");
	 scanf("%s",name);
	 printf("REENTER USER NAME:");
	 scanf("%s",username);
	 if (strcmp(name,username)==0 )
	 {
	 printf("VALID USERNAME\n");
	 }
	 else
	 {
	  printf("INVALID USERNAME\n"); 
     }
}
