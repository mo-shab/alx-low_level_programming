#include <unistd.h>
/*
This a new function
*/
int main (void){
const char *message="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2,message,55);
return (1);
}
