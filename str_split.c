#include <stdio.h>
#include<string.h>
int main()
{
   char string[100]="my_name_is_edcast_future_skills";
   char* token = strtok(string, "_");
   while(token != NULL)
   {
   printf("%s,",token);
   token = strtok(NULL, "_");
   }
    return 0;
}
