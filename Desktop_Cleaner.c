#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<String.h>
#include<unistd.h>



int main()
{
    int count = 0; char dec;
    count = system("find . -type d | wc -l");
    // printf("Total no of files %d", count);
    FILE *fp,*outputfile;
    char var[40];
    
    
    fp = popen("find . -type d | wc -l", "r");
     while (fgets(var, sizeof(var), fp) != NULL)
     {
         printf("total no of files in this directory are %s", var);
      }
      pclose(fp);
    
    

    system("rsync -avm --include='*.jpg' -f 'hide,! */' . /Users/Mehak/Documents/Pictures");
    system("rm *.jpg");
    
    system("rsync -avm --include='*.pdf' -f 'hide,! */' . /Users/Mehak/Documents/Pdfs");
    system("rm *.pdf");
    
    system("rsync -avm --include='*.docx' -f 'hide,! */' . /Users/Mehak/Documents/writing/Doc_files");
     system("rm *.docx");
    
    system("rsync -avm --include='*.mp3' -f 'hide,! */' . /Users/Mehak/Documents/Music");
     system("rm *.mp3");
    system("rsync -avm --include='*.mp4' -f 'hide,! */' . /Users/Mehak/Documents/Videos");
     system("rm *.mp4");
    system("rsync -avm --include='*.srt' -f 'hide,! */' . /Users/Mehak/Documents/Srt_files");
    system("rm *.srt");
    
system("rsync -avm --include='*.zip' -f 'hide,! */' . /Users/Mehak/Documents/Zip_file");
    system("rm *.zip");
    system("rsync -avm --include='*.dmg' -f 'hide,! */' . /Users/Mehak/Documents/DMG_files");
system("rm *.dmg");
    
   
    return 0;
}

