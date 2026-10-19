#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    char Arr[20] = {'/O'};

    fd = open("Hello.txt", O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Open the file\n");
        return -1;
    }
    else
    {
        printf("File gets Opened with fd : %d\n", fd);
        read(fd, Arr, 13);
        

        printf("Data from file is : %s\n", Arr);
        close(fd);
    }


    return 0;
}