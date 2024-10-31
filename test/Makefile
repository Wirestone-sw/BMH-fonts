CC = gcc

INCLUDE_DIR = "-I../bmh_fonts/bmh_ngv/Aclonica Regular/"
INCLUDE_DIR += -I../../TTF2BMH/lib_c/

CFLAGS = $(INCLUDE_DIR)

C_FILES = test.c
C_FILES += ../../TTF2BMH/lib_c/font.c
C_FILES += ../bmh_fonts/bmh_ngv/Aclonica\ Regular/aclonica_regular_8.c
C_FILES += ../bmh_fonts/bmh_ngv/Aclonica\ Regular/aclonica_regular_24.c

test: $(C_FILES)
	$(CC) $(CFLAGS) $(C_FILES) -o test 
