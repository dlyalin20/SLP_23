#include "pipe_networking.h"


int main() {
    
    int sd = server_connect();

    listening(sd);
    

}