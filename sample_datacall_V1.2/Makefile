
TARGET := $(word 1,$(patsubst Makefile.build.%,%,$(filter-out Makefile.build.sample, $(wildcard Makefile.build.*))))


ifeq ($(TARGET), )
	TARGET := sample
endif

TARGET_FILE = $(addsuffix $(TARGET),Makefile.build.)

all: 
	make -f $(TARGET_FILE)

clean:
	make -f $(TARGET_FILE) clean
############################################################
%:
	make -f Makefile.build.$@
	
