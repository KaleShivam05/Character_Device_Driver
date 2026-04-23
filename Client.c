#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h> 
#include<errno.h>

#define DEVICE_PATH "/dev/marvellous_driver"
#define BUFFER_SIZE 1024

int main()
{
    int fd = 0;
    int iRet = 0;
    char read_buffer[BUFFER_SIZE];
    char write_buffer[BUFFER_SIZE];

    printf("Opening the Marvellous device...\n");

    // cat /dev/marvellous_driver
    fd = open(DEVICE_PATH,O_RDWR);

    if(fd < 0)
    {
        printf("Unable to open Marvellous device\n");
        printf("Error : %s\n",strerror(errno));
        return -1;
    }

    printf("Marvellous Device opened succesfully...\n");

    printf("Enter the data for Marvellous driver\n");
    fgets(write_buffer, BUFFER_SIZE, stdin);

    write_buffer[strcspn(write_buffer, "\n")] = 0;

    printf("Writting to Marvellous Device\n");

    // echo "Jay Ganesh" > /dev/marvellous_driver
    iRet = write(fd,write_buffer,strlen(write_buffer));

    if(iRet < 0)
    {
        printf("Error : Unable to write into Marvellous Device\n");
        printf("Error : %s\n",strerror(errno));
        close(fd);
        return -1;
    }

    printf("Data succesfully written into Marvellous Device\n");

    printf("Reading the Data from Marvellous driver\n");

    // cat /dev/marvellous_driver
    iRet = read(fd,read_buffer,BUFFER_SIZE);

    if(iRet < 0)
    {
        printf("Error : Unable to read data from marvellous driver\n");
        printf("Error : %s\n",strerror(errno));
        close(fd);
        return -1;
    }

    read_buffer[iRet] = '\0';

    printf("Data recevied from Marvellous driver : %s\n",read_buffer);

    printf("closing the Marvellous Driver\n");

    close(fd);

    return 0;
}