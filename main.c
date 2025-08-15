#include<stdio.h>
#include<mariadb/mysql.h>

struct connection_details{
  char *server, *user, *password, *database;
};

int main(){
  puts("Hallo Welt!");
  return 0;
}
