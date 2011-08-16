# Manual Makefile for ondevice libgpod
# (libgpod v0.8.2ondevice1)
# Thanks for Sirakain for making this possible
# by giving essential advices to me
# *** CREATED BY H2CO3, 15/08/2011 ***

PROJECT = libgpod.dylib
CC = gcc
LD = $(CC)
CFLAGS = -isysroot /User/sysroot \
	 -dynamiclib \
	 -I. \
	 -I../include \
	 -I/usr/include/glib-2.0 \
	 -Wall \
	 -std=gnu99 \
	 -c \
	 -DHAVE_CONFIG_H=1
LDFLAGS = -isysroot /User/sysroot \
	  -dynamiclib \
	  -w \
	  -install_name /usr/lib/${PROJECT} \
	  -lglib-2.0 \
	  -lgmodule-2.0 \
	  -lgobject-2.0 \
	  -lz \
	  -lxml2 \
	  -lsqlite3 \
	  -lintl \
	  -lplist

OBJECTS = $(shell ./getobjname.sh)

all: $(PROJECT)

$(PROJECT): $(OBJECTS)
	$(LD) $(LDFLAGS) $(OBJECTS) -o $(PROJECT)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ $^

