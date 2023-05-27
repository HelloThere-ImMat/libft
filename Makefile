#############
#### ENV ####
#############

SHELL = /usr/bin/bash

##############
#### NAME ####
##############

NAME = libft.a

##############
#### SRCS ####
##############

PATH_SRCS += srcs/
PATH_SRCS += srcs/conv/
PATH_SRCS += srcs/ctype/
PATH_SRCS += srcs/ft_printf/
PATH_SRCS += srcs/get_mext_line/
PATH_SRCS += srcs/list/
PATH_SRCS += srcs/memory/
PATH_SRCS += srcs/put/
PATH_SRCS += srcs/strings/

# conv

SRCS += ft_atoi.c
SRCS += ft_itoa.c

# ctype

SRCS += ft_isalnum.c
SRCS += ft_isalpha.c
SRCS += ft_isascii.c
SRCS += ft_isdigit.c
SRCS += ft_islower.c
SRCS += ft_isprint.c
SRCS += ft_isupper.c
SRCS += ft_tolower.c
SRCS += ft_toupper.c

# ft_printf

SRCS += ft_print_nbr.c
SRCS += ft_print_str.c
SRCS += ft_printf.c

# get_next_line

SRCS += get_next_line.c
SRCS += get_next_line_utils.c

# list

SRCS += ft_lstadd_back.c
SRCS += ft_lstadd_front.c
SRCS += ft_lstclear.c
SRCS += ft_lstdelone.c
SRCS += ft_lstiter.c
SRCS += ft_lstlast.c
SRCS += ft_lstmap.c
SRCS += ft_lstnew.c
SRCS += ft_lstsize.c

# memory

SRCS += ft_bzero.c
SRCS += ft_calloc.c
SRCS += ft_memchr.c
SRCS += ft_memcmp.c
SRCS += ft_memcpy.c
SRCS += ft_memmove.c
SRCS += ft_memset.c