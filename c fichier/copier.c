//Copier le contenu d’un fichier dans un autre en C

#include <stdio.h>

main()
{
    FILE *fp1, *fp2;
    char ch;

    // ouvrir le fichier en lecture
    fp1 = fopen("file1.txt", "r");
    // ouvrir le fichier en ecriture
    fp2 = fopen("file2.txt", "w");

    // Lire le contenu du fichier
    while((ch = getc(fp1)) != EOF)
        putc(ch, fp2);

    fclose(fp1);
    fclose(fp2);
    getch();
}
