#include <stdio.h>
#include<string.h>
  int main()
   {
        int n, data[100], i, j, temp;
        char str[100][100],s[100];
        printf("Enter your input for number:");
        scanf("%d", &n);
        for (i=0;i<n;i++)
                scanf("%d", &data[i]);
        printf("Enter number of names :\n");
        scanf("%d",&n);
        printf("Enter names in any order:\n");
        for(i=0;i<n;i++)
		{
			scanf("%s",str[i]);
        }  
        for (i=0;i<n-1;i++) {
                for (j=i+1;j<n;j++) {
                        if (data[i]>data[j]) {
                                temp = data[i];
                                data[i] = data[j];
                                data[j] = temp;
                        }
                }
        }
        for(i=0;i<n;i++){
           for(j=i+1;j<n;j++){
              if(strcmp(str[i],str[j])>0){
              	strcpy(s,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],s);
              }
           }
       }
        printf("Ascending Order:\n");
        for (i=0;i<n;i++)
                printf("%d\n", data[i]);
        printf("\nDescending Order:\n");
        for (i=n-1;i>=0;i--)
                printf("%d\n", data[i]);
        printf("\nThe sorted order of names are:\n");
        for(i=0;i<n;i++){
            printf("%s\n",str[i]);
   }
}

