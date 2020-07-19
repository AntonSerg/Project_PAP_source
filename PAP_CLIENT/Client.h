#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>
#include <time.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX1024 1024
#define MAX 24
#define PORT 13664
int socketCreate (int socketType);
int connectCreate (int socket, const char * ip, int port);
void dataSendRecieve (int socket);
int connectionClose (int socket);
void authorization(int socket);
void adminPanel(int socket);
void temp(char* buf);
void Add(int socket);
void CreateGroup(int socket);
void egzaminatorPanel(int socket);
void SetTimeOfTest(int socket);
void rightAnswer(int socket);
void ChooseGroupOfStudents(int socket);
void AddingAnswers(int socket);
void AddToGroup(int socket);
void PermissionGroup(int socket);
void ChooseExamForStudent(int socket);
void studentPanel(int socket);
int getch (void);
void Stars(char* buff);
long hash(char *str);




