#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Ouvrir les deux fichiers a  fusionner
   FILE *f1 = fopen("file1.txt", "r");
   FILE *f2 = fopen("file2.txt", "r");

   // Ouvrir le fichier pour stocker le resultat
   FILE *f3 = fopen("file3.txt", "w");
   char c;

   if (f1 == NULL || f2 == NULL || f3 == NULL)
   {
         puts("Impossible d'ouvrir les fichiers");
         exit(EXIT_FAILURE);
   }

   // Copier le contenu du premier fichier dans file3.txt
   while ((c = fgetc(f1)) != EOF)
      fputc(c, f3);

   // Copier le contenu du deuxie¨me fichier dans file3.txt
   while ((c = fgetc(f2)) != EOF)
      fputc(c, f3);

   printf("Les deux fichier sont bien fusionnes dans le file3.txt");

   fclose(f1);
   fclose(f2);
   fclose(f3);
   return 0;
}
