obj-m += MarvellousDriver.o

all: 
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

Client:
	gcc Marvellous_Driver_client.c -o Client

run:
	./Client

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
