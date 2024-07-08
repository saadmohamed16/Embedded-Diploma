#prepared by saad mohamed

CC=arm-none-eabi-
CFLAGS=-g -mcpu=arm926ej-s
INCS=-I .
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)
Project_name= learn-in-depth

all:$(Project_name).bin
	@echo"=======BUILD DONE======"
	
startup.o:startup.s
	$(CC)as.exe $(CFLAGS) $< -o $@
	
%.o:%.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@

$(Project_name).elf:$(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(ASOBJ) -o $@ -Map=Map_file.map
	
$(Project_name).bin:$(Project_name).elf
		$(CC)objcopy.exe -o binary $< $@
		
clean_all:
		rm *.o *.elf *.bin
		@echo"all files cleaned"

clean:
		rm *.elf *.bin