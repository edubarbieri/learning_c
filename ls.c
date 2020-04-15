
#include <dirent.h>
#include <stdio.h>

void reset () {
  printf("\033[0m");
}
void blue () {
  printf("\034[0m");
}
int main(int argc, char const *argv[]) {
	DIR *dir_pointer;
	if(argc > 1){
		dir_pointer = opendir(argv[1]);
	}else{
		dir_pointer = opendir(".");
	}
  struct dirent *dir;
   
	if(dir_pointer == NULL){
		printf("No such file or directory");
		exit(0);
	}
	while ((dir = readdir(dir_pointer)) != NULL){
		printf("\033[0;34m%s\033[0m   Type: %c    ", dir->d_name, dir->d_type);
	}
	printf("\n");
	closedir(dir_pointer);
  return 0;
}
