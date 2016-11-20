##
## Makefile for my_printf in /home/artha/printf
## 
## Made by dylan renard
## Login   <artha@epitech.net>
## 
## Started on  Mon Nov  7 15:05:57 2016 dylan renard
## Last update Sun Nov 20 15:04:57 2016 dylan renard
##

all: libmy

libmy:
	@$(MAKE) -C lib/my

clean:
	@$(MAKE) clean -C lib/my

fclean: clean
	@$(RM) libmy.a

re: fclean all

.PHONY: clean, re, all, fclean
