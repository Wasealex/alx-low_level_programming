this project is about arguments passed in main function:
1) argument count(argc)
2) argument vector(argv)
facts about arguments
1)argc is never 0
2)argv is an array which contains strings upto index of argc meaning argv[0] to argv[argc - 1]
there for argv[argc] is a null pointer
3)argv[0] is the program name
4) int main (int argc, char *argv[]) or int main (int argc, char **argv) are the same since
an array can be an internal pointer as well
